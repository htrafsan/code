select employee_id, last_name, hire_date, salary, department_id
from employees 
where hire_date='07-jun-02'

select employee_id, last_name, hire_date, salary, department_id
from employees 
where hire_date BETWEEN '01-jan-02' and '31-dec-02'
order by hire_date, salary desc

select employee_id, last_name, hire_date, salary, department_id, job_id
from employees 
where job_id = 'IT_PROG'



select employee_id, last_name, hire_date, salary, department_id, job_id
from employees 
where job_id IN('IT_PROG','SA_MAN')


select employee_id, last_name, hire_date, salary, department_id, job_id
from employees 
WHERE LAST_NAME='King'


select employee_id, last_name, hire_date, salary, department_id
from employees 
where salary between 10000 and 15000
order by 4 desc

select employee_id, last_name, hire_date, salary, department_id
from employees 
where salary not between 10000 and 15000
order by 4 desc


select employee_id, last_name, hire_date, salary, department_id
from employees 
where last_name like 'A%'

select employee_id, last_name, hire_date, salary, department_id
from employees 
where last_name like '_u%'


select employee_id, last_name, hire_date, salary, department_id
from employees 
where last_name like '_u%n'


select employee_id, last_name, hire_date, salary, department_id
from employees 
where hire_date like '%05'


select employee_id, last_name, hire_date, salary, department_id
from employees 
where hire_date like '%JUL%'



select employee_id, last_name, hire_date, salary, department_id
from employees 
WHERE department_id=&DEPARTMENT_ID



select employee_id, last_name, hire_date, salary, department_id
from employees 
WHERE last_name=&NAME

select &column
from &table
order by &column


select employee_id, last_name, hire_date, salary, department_id
from employees 
WHERE DEPARTMENT_ID=&departmentid
and salary >&salary


select employee_id, last_name, hire_date, salary, department_id
from employees 
order by 4 desc
FETCH next 10 rows only

select employee_id, last_name, hire_date, salary, department_id
from employees 
order by 4 
FETCH next 10 rows only


select employee_id, last_name, hire_date, salary, department_id
from employees 
order by 4 desc
offset 5 rows FETCH next 5 rows only

select employee_id, last_name, hire_date, salary, department_id,
    nvl(commission_pct,0) comm
from employees 
where commission_pct is null


select employee_id, last_name, hire_date, salary, department_id,
    nvl(commission_pct,0) comm
from employees 
where commission_pct is not null


select employee_id, lower(last_name) "Lower", UPPER(last_name) "Upper",
	INITCAP(last_name) "Initcap" 
from employees


select employee_id, upper(CONCAT(CONCAT(first_name,' '),last_name)) Name,
	SUBSTR(last_name,1,3) "Substr",
	LENGTH(last_name) "Length", INSTR(last_name,'i') "Instr",
	salary, LPAD(salary,6,'*') "Lpad", RPAD(salary,6,'*') "rpad"
from employees 
where trim(last_name) ='King'


select employee_id, upper(CONCAT(CONCAT(first_name,' '),last_name)) Name,
	SUBSTR(last_name,1,3) "Substr",
	LENGTH(last_name) "Length", INSTR(last_name,'i') "Instr",
	salary, LPAD(salary,6,'*') "Lpad", RPAD(salary,6,'*') "rpad",
	trim('B' from last_name) "Trim", REPLACE(last_name, 'B','A') "Replace"
from employees 
where last_name like 'B%'


select *
from employees 
where substr(job_id,4,3)='MAN'

select EMPLOYEE_ID, LAST_NAME, JOB_ID
from employees 
where INSTR(upper(LAST_NAME),'MB')>0


SELECT ROUND(47.56852,1), TRUNC(47.56852)
FROM DUAL 


SELECT ROUND(47.56852,-1), TRUNC(47.56852,-1)
FROM DUAL 


SELECT ROUND(57.56852,-2), TRUNC(57.56852,-2)
FROM DUAL 



SELECT EMPLOYEE_ID, LAST_NAME, SALARY, 
	salary/500 "500Notes", mod(salary,500) "Extra"
from employees ;


SELECT EMPLOYEE_ID, LAST_NAME, SALARY, 
	trunc(salary/500) "500Notes", mod(salary,500) "Extra"
from employees ;

