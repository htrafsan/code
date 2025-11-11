select * from employees;

select employee_id id, last_name as Name, salary, salary*12 "Yearly Sal",
        department_id 
from employees;


select * from employees;

select employee_id id, first_name||' '||last_name as Name, 
		salary, salary*12 "Yearly Sal",
        department_id 
from employees;

select employee_id id, first_name||' '||last_name as Name, 
		salary, nvl(commission_pct,0) comm, 
        salary+salary*nvl(commission_pct,0) totalsal
from employees;


select department_id from employees ;


select distinct department_id from employees 
order by department_id


select employee_id id, first_name||' '||last_name as Name, 
		salary, nvl(commission_pct,0) comm, 
        salary+salary*nvl(commission_pct,0) totalsal
from employees
order by salary desc

select employee_id id, first_name||' '||last_name as Name, 
		salary, nvl(commission_pct,0) comm, 
        salary+salary*nvl(commission_pct,0) totalsal
from employees
order by 3 desc

select employee_id id, first_name||' '||last_name as Name, 
		salary, nvl(commission_pct,0) comm, 
        salary+salary*nvl(commission_pct,0) totalsal
from employees
order by totalsal desc


select employee_id id, first_name||' '||last_name as Name, 
		salary, nvl(commission_pct,0) comm, 
        salary+salary*nvl(commission_pct,0) totalsal
from employees
order by salary+salary*nvl(commission_pct,0) desc


select employee_id id, first_name||' '||last_name as Name, 
		salary, nvl(commission_pct,0) comm, 
        salary+salary*nvl(commission_pct,0) totalsal
from employees
order by salary+salary*nvl(commission_pct,0) desc, id asc


select table_name from user_tables

desc EMPLOYEES


id, name, salary, sal+500 newsal, "Note1000", totsal
sorting by totsal


select trunc(15265/1000) from dual ;


select 'ID :'||employee_id||' Name :'||last_name||'''s Salary :'||salary empinfo
from employees

select 'ID :'||employee_id||' Name :'||last_name||q'['s Salary :]'||salary empinfo
from employees


select employee_id, last_name, salary
from employees 
where salary = 8000 

select employee_id, last_name, salary
from employees 
where salary <= 8000 
order by salary desc

select employee_id, last_name, salary
from employees 
where salary <> 8000 

select employee_id, last_name, salary
from employees 
where salary != 8000 


select employee_id, last_name, salary, department_id
from employees 
where salary <= 8000 
and department_id=80
order by salary desc


select employee_id, last_name, salary, department_id
from employees 
where salary =( select salary from employees where employee_id=160)


select employee_id, last_name, salary
from employees 
where salary BETWEEN 5000 and 10000 
order by salary desc, 2


select employee_id, last_name, salary, department_id
from employees 
where department_id in (20,30)


select employee_id, last_name, salary, department_id, commission_pct
from employees 
where commission_pct is null 

