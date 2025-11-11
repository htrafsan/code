insert into departments 
values (500, 'Test Depatment', 120, 1400 ) ;

insert into departments 
values (501, 'Test Depatment', null, null ) ;


insert into departments (department_name, department_id)
values ('Test Depatment', 502) ;


create table orders(orderid number PRIMARY key, 
					product_name varchar2(50),
					department_id number, 
					entry_date date DEFAULT sysdate,
			constraint orders_deptid_fk FOREIGN key (department_id)
				REFERENCES departments (department_id)) ;


	insert into orders (orderid, product_name, entry_date, department_id )
	values (1, 'Mouse', DEFAULT, 501) ;

	insert into orders (orderid, product_name, entry_date, department_id )
	values (2, 'Keyboard',  sysdate, 10) ;

insert into orders (orderid, product_name, entry_date, department_id )
values (3, 'Keyboard',  sysdate-1, 10) ;

insert into orders (orderid, product_name, entry_date, department_id )
values (4, 'Keyboard',  sysdate-1, 11) ;


create table my_emp
as 
select * from employees where employee_id=1111111 ;


insert into my_emp
select * from employees where salary>10000 ;


update employees 
set salary=12000
where department_id=100


update employees 
set salary=11000, hire_date='11-AUG-25'
where department_id=100


UPDATE my_emp 
SET (SALARY, hire_date)=(SELECT SALARY, hire_date FROM EMPLOYEES 
						WHERE EMPLOYEE_ID=130)
WHERE DEPARTMENT_ID=80 ;


UPDATE EMPLOYEES 
SET LAST_NAME ='Haan' where employee_id=102 ;

delete my_emp1;


delete my_emp
where employee_id=205;

insert into my_emp
select * from employees where salary>10000 ;

commit ;

delete my_emp 
where department_id=(select department_id from employees where employee_id=101)

rollback ;

TRUNCATE table my_emp;


insert into orders (orderid, product_name, entry_date, department_id )
values (&ordnumber, '&product_name', sysdate, &department_id) ;


update employees set salary =5000 where job_id='IT_PROG' ;

SAVEPOINT A ;

UPDATE employees set salary =10000 where DEPARTMENT_ID=80;

SAVEPOINT B ;

UPDATE employees set salary =24000 where employee_id=101 ;

ROLLBACK TO B;


ROLLBACK TO A;


CREATE TABLE CUSTOMERS (
			CUSTOMER_ID NUMBER(6),
			CUST_NAME 	VARCHAR2(30) NOT NULL,
			MOBILE_NO	VARCHAR2(15) NOT NULL,
			EMAIL		VARCHAR2(20),
			ADDRESS		VARCHAR2(200),
			DISCOUNT	NUMBER(2,2) DEFAULT 0,
			entry_date  DATE DEFAULT SYSDATE,
	constraint CUSTOMERS_CUSTID_PK PRIMARY KEY (CUSTOMER_ID),
	constraint CUSTOMERS_MOBILE_NO_UQ UNIQUE (MOBILE_NO),
	constraint CUSTOMERS_EMAIL_UQ UNIQUE (EMAIL)) ;
	
	
INSERT INTO CUSTOMERS (CUSTOMER_ID, CUST_NAME, MOBILE_NO, 
						EMAIL, ADDRESS, DISCOUNT, entry_date)
values (1, 'Abdur Rahman', '01912437539','rahman@gmail.com', 'Dhaka', .1, sysdate) ;						
