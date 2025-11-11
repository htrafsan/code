create table prods(prodid number, 
				prodname varchar2(30),
				qty number, 
				rate number) ;

alter table prods 
add constraint prods_prodid_pk PRIMARY KEY (prodid) ;

alter table prods 
add constraint prods_rate_ck CHECK (rate>0) ;
				
create table sales (saleid number,
				prodid number, 
				qty number, 
				rate number)

alter table sales add constraint sales_prodid_fk FOREIGN key (prodid)
REFERENCES prods (prodid) on delete CASCADE ;

insert into prods
values (10, 'Mouse',100, 450) ;

alter table prods DISABLE constraint prods_rate_ck ;

insert into prods
values (11, 'Keyboard',50, 0) ;

update prods set rate = 120 where prodid=11

alter table prods enable constraint prods_rate_ck ;

insert into sales 
values (1, 10, 1, 500) ;

insert into sales 
values (2, 10, 5, 450) ;

insert into sales 
values (3, 11, 1, 400) ;

select p.prodid, p.prodname, s.qty, s.rate, s.qty*s.rate amt
from sales s join prods p 
on (s.prodid=p.prodid);

select p.prodid, p.prodname, s.qty, s.rate, s.qty*s.rate amt
from sales s , prods p 
where s.prodid=p.prodid;

select prodid, p.prodname, s.qty, s.rate, s.qty*s.rate amt
from sales s join prods p 
using (prodid)

delete from prods where prodid=11 ;

insert into sales 
values (2, 11, 1, 400) ;

alter table sales 
add constraint sales_saleid_pk PRIMARY key (saleid)
DEFERRABLE INITIALLY deferred ;

insert into sales 
values (2, 11, 1, 400) ;

alter table sales drop constraint sales_saleid_pk;

alter table prods drop constraint PRODS_PRODID_PK cascade ;

alter table prods rename column prodname to product_name ;

CREATE GLOBAL TEMPORARY TABLE cart(prodid NUMBER,qty number)
ON COMMIT DELETE ROWS; 


insert into cart values (10, 5) ;
insert into cart values (11, 1) ;
insert into cart values (10, 2) ;
insert into cart values (10, 4) ;

select p.prodid, p.product_name, c.qty, p.rate, c.qty*p.rate amt
from cart c join prods p 
on (c.prodid=p.prodid);


conn sys as sysdba ;

create DIRECTORY mydir as 'E:\Delwar' ;

grant read, write on DIRECTORY mydir to hr ;

CREATE TABLE products ( prodid char(5), 
		pro_name CHAR(25), qty char(10), rate char(10))
		ORGANIZATION EXTERNAL(TYPE ORACLE_LOADER 
		DEFAULT DIRECTORY mydir  ACCESS PARAMETERS
		(RECORDS DELIMITED BY NEWLINE NOBADFILE NOLOGFILE
		FIELDS TERMINATED BY ',') 
		LOCATION ('products.txt')) PARALLEL 5  REJECT LIMIT 200;


		SELECT d.department_name, l.city
              FROM   departments  d
			  join   locations l
			  on (d.location_id=l.location_id)
              JOIN   countries c
              ON(l.country_id = c.country_id)
              JOIN regions USING(region_id)
              WHERE region_name = 'Europe';


SELECT	employee_id, last_name, manager_id, department_id
FROM	employees
WHERE  manager_id IN
                      (SELECT manager_id
                       FROM employees
                       WHERE first_name = 'John')
and   department_id IN
                      (SELECT department_id
                       FROM employees
                       WHERE first_name = 'John')
AND first_name <> 'John';



alter table employees add department_name varchar2(50) ;

update employees e
set department_name = (select department_name 
					from departments d
					where e.department_id=d.department_id)
					
SELECT employee_id, last_name, job_id, department_id
FROM   employees e
WHERE  EXISTS ( SELECT *
                 FROM   employees
                 WHERE  manager_id =e.employee_id);


SELECT employee_id, last_name, job_id, department_id
FROM   employees e
WHERE not EXISTS ( SELECT *
                 FROM   employees
                 WHERE  manager_id =e.employee_id);


SELECT employee_id, last_name, job_id, department_id
FROM   employees e
where employee_id in (select distinct manager_id from employees 
						where manager_id is not null)
						
						
SELECT employee_id, last_name, job_id, department_id
FROM   employees e
where employee_id not in (select distinct manager_id from employees 
						where manager_id is not null)


WITH dept_costs  AS (
   SELECT d.department_name, SUM(e.salary) AS dept_total
   FROM   employees e JOIN departments d
   ON     e.department_id = d.department_id
   GROUP BY d.department_name),
avg_cost    AS (
   SELECT SUM(dept_total)/COUNT(*) AS dept_avg
   FROM   dept_costs)
SELECT * 
FROM   dept_costs 
WHERE  dept_total >
        (SELECT dept_avg 
         FROM avg_cost)
ORDER BY department_name;



INSERT INTO (SELECT l.location_id, l.city, l.country_id
             FROM   locations l
             JOIN   countries c
             ON(l.country_id = c.country_id)
             JOIN regions USING(region_id)
             WHERE region_name = 'Europe')
VALUES (3300, 'Cardiff', 'UK');



create table mytab as select * from employees ;

update mytab
set department_id = null 
where department_id=80

delete mytab m
where department_name=(select department_name 
					from departments 
					where department_id=m.department_id)
and manager_id=100