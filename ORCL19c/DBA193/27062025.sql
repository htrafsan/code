select table_name from user_tables ;


select * from EMPLOYEES;


select EMPLOYEE_ID, LAST_NAME, HIRE_DATE, JOB_ID, SALARY, COMMISSION_PCT, 
        SALARY+SALARY*COMMISSION_PCT "Total Salary"
FROM employees

select EMPLOYEE_ID, LAST_NAME, HIRE_DATE, JOB_ID, SALARY, COMMISSION_PCT, 
        SALARY+SALARY*COMMISSION_PCT total_salary
FROM employees

select EMPLOYEE_ID, LAST_NAME, HIRE_DATE, JOB_ID, SALARY, COMMISSION_PCT, 
        SALARY+SALARY*COMMISSION_PCT as total_salary
FROM employees


select EMPLOYEE_ID, LAST_NAME, HIRE_DATE, JOB_ID, SALARY, COMMISSION_PCT comm, 
        SALARY+SALARY*COMMISSION_PCT as total_salary
FROM employees


select EMPLOYEE_ID, LAST_NAME, HIRE_DATE, JOB_ID, SALARY, COMMISSION_PCT comm, 
        SALARY+SALARY*COMMISSION_PCT as total_salary
FROM employees


select EMPLOYEE_ID, LAST_NAME, HIRE_DATE, JOB_ID, SALARY, 
        nvl(COMMISSION_PCT,0)comm, 
        SALARY+SALARY*nvl(COMMISSION_PCT,0) as total_salary
FROM employees


select EMPLOYEE_ID, first_name||' '||last_name Name, salary, salary*12 YearlySal
from EMPLOYEES ;

select EMPLOYEE_ID, first_name||' '||last_name Name, salary, salary+500 NewSal
from EMPLOYEES ;

select EMPLOYEE_ID, first_name||' '||last_name Name, salary, 
	trunc(salary/1000) "Notes 1000"
from EMPLOYEES ;

select distinct department_id 
from employees
where department_id is not null;

select employee_id, last_name, salary, department_id 
from employees
where salary>10000
order by salary asc

select employee_id, last_name, salary sal, department_id 
from employees
where salary>10000
order by sal asc

select employee_id, last_name, salary sal, department_id 
from employees
where salary>10000
order by 3 asc

select employee_id, last_name, salary sal, SALARY*12 YearlySal, department_id 
from employees
where salary>10000
order by SALARY*12 asc

select employee_id, last_name, salary sal, SALARY*12 YearlySal, department_id 
from employees
where salary>10000
order by 5, 3 desc

select last_name||'''s salary is : '||salary 
from EMPLOYEES 

select last_name||q'['s salary is : ]'||salary 
from EMPLOYEES 


select * from employees where last_name='King'

select * from employees where JOB_ID='IT_PROG'

SELECT * FROM EMPLOYEES WHERE HIRE_DATE='05-FEB-06'

SELECT * FROM EMPLOYEES WHERE TO_CHAR(HIRE_DATE,'MON-RR')='FEB-06'