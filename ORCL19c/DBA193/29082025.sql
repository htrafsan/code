create SEQUENCE seq1 ;

select seq1.NEXTVAL from dual; 

select seq1.currval from dual; 

create SEQUENCE seq2 
start with 10
INCREMENT by 5 
MAXVALUE 200
MINVALUE 5 
cycle ;

select seq2.NEXTVAL from dual ;



create table tran(tranid number DEFAULT seq1.nextval, 
	tran_dt date DEFAULT sysdate) ;
	
	insert into tran (tran_dt)
	values (sysdate) ;


create table trans(tranid number DEFAULT seq1.nextval, 
	tran_dt date DEFAULT sysdate) ;
	
	insert into trans (tran_dt)
	values (sysdate) ;

select * from trans

create table tran1(tranid varchar2(10), 
	tran_dt date DEFAULT sysdate) ;

insert into tran1 (tranid, tran_dt) 
values (to_char(sysdate,'YYYYMM')||'-'||seq1.nextval, SYSDATE) ;


DECLARE 
V_NUMBER NUMBER ;
BEGIN 
SELECT MAX(SUBSTR(TRANID,8,10))+1 INTO V_NUMBER FROM tran1 ;

insert into tran1 (tranid, tran_dt) 
values (to_char(sysdate,'YYYYMM')||'-'||V_NUMBER, SYSDATE) ;
COMMIT ;
END ;


select * from tran1



DECLARE 
V_NUMBER NUMBER ;
BEGIN 
SELECT NVL(MAX(SUBSTR(TRANID,8,10)),0)+1 INTO V_NUMBER FROM tran1 
WHERE SUBSTR(TRANID,1,6)= to_char(sysdate,'YYYYMM');

insert into tran1 (tranid, tran_dt) 
values (to_char(sysdate,'YYYYMM')||'-'||V_NUMBER, SYSDATE) ;
COMMIT ;
END ;


CREATE SYNONYM CASH_TRAN FOR TRAN1 ;

DELETE CASH_TRAN

SELECT * FROM TRAN1


DROP SYNONYM CASH_TRAN


CREATE INDEX TRAN1IDX ON TRAN1 (tran_dt);

SELECT * FROM TRAN1
WHERE TO_CHAR(TRAN_DT,'DD-MON-YY')='29-AUG-25'


SELECT TRANID, TO_CHAR(TRAN_DT,'DD-MON-YYYY HH12:MI:SS AM') FROM TRAN1



CREATE INDEX EMPLNAMEIDX ON MYEMP (UPPER(LAST_NAME)) ;


SELECT * FROM MYEMP 
WHERE UPPER(LAST_NAME) ='KING'

SELECT * FROM MYEMP 
WHERE UPPER(LAST_NAME) =UPPER('KiNG')



create or replace view emp_status 
as 
select e.employee_id, e.first_name||' '||e.last_name emp_name,
	e.salary, d.department_name, j.job_title, l.city 
from employees e left join departments d
on (e.department_id=d.department_id)
join  jobs j
on e.job_id=j.job_id
left join locations l 
on d.location_id=l.location_id



select * from emp_status


create or replace view emp_IT 
as 
select e.employee_id, e.first_name||' '||e.last_name emp_name,
	e.salary, d.department_name, j.job_title, l.city 
from employees e left join departments d
on (e.department_id=d.department_id)
join  jobs j
on e.job_id=j.job_id
left join locations l 
on d.location_id=l.location_id
where j.job_id='IT_PROG' ;

GRANT SELECT, UPDATE ON emp_IT TO PUBLIC ;

REVOKE SELECT, UPDATE on emp_it from PUBLIC ;

CREATE VIEW MYEMP_VIEW 
AS SELECT * FROM MYEMP ;

SELECT COUNT(*) FROM MYEMP;

SELECT COUNT(*) FROM MYEMP_VIEW;

DELETE MYEMP_VIEW WHERE DEPARTMENT_ID=80

SELECT * FROM USER_VIEWS ;

SELECT TEXT FROM USER_VIEWS WHERE VIEW_NAME = 'EMP_STATUS'


select e.employee_id, e.first_name||' '||e.last_name emp_name,
	e.salary, d.department_name, j.job_title, l.city 
from employees e left join departments d
on (e.department_id=d.department_id)
join  jobs j
on e.job_id=j.job_id
left join locations l 
on d.location_id=l.location_id


CREATE VIEW emp_status1
as
SELECT * FROM emp_status;


CREATE OR REPLACE VIEW MYEMP_VIEW 
AS SELECT * FROM MYEMP 
WITH READ ONLY ;


CREATE TABLE EMPTAB 
AS SELECT EMPLOYEE_ID, LAST_NAME, SALARY, DEPARTMENT_ID 
FROM EMPLOYEES ;

CREATE view EMPTAB_VIEW 
AS 
SELECT * FROM EMPTAB WHERE DEPARTMENT_ID=80
with CHECK OPTION CONSTRAINT emptabviewdid_ck ;

CREATE view EMPTAB_VIEW 
AS 
SELECT * FROM EMPTAB WHERE DEPARTMENT_ID=80 ;

SELECT * FROM EMPTAB_VIEW

INSERT INTO EMPTAB_VIEW 
VALUES (501, 'Delwar',5000, 20)

SELECT * FROM EMPTAB


CREATE or replace view EMPTAB_VIEW 
AS 
SELECT * FROM EMPTAB WHERE DEPARTMENT_ID=80
with CHECK OPTION CONSTRAINT emptabviewdid_ck ;


