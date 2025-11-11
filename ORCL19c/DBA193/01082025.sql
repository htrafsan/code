select last_name, job_id, salary, hire_date 
from employees 
where department_id = (select department_id from departments 
					where department_name='IT')
					

select last_name, job_id, salary, hire_date 
from employees 
WHERE SALARY < (SELECT salary FROM EMPLOYEES WHERE last_name='Austin')


select last_name, job_id, salary, hire_date 
from employees 
WHERE SALARY = (SELECT salary FROM EMPLOYEES WHERE last_name='Austin')
and last_name<>'Austin'
order by 3 desc


select last_name, job_id, salary, hire_date 
from employees 
WHERE SALARY in (SELECT salary FROM EMPLOYEES WHERE last_name='King')
/*and last_name<>'King'
kljkljjk
*/
order by 3 desc

select last_name, job_id, salary, hire_date 
from employees 
WHERE SALARY in (SELECT salary FROM EMPLOYEES WHERE last_name='King')
and job_id <> 'AD_PRES'
order by 3 desc


select last_name, job_id, salary, hire_date 
from employees 
WHERE SALARY IN (SELECT SALARY FROM EMPLOYEES WHERE job_id = '&JOB_ID')
AND job_id !='&job_id'


select last_name, job_id, salary, hire_date 
from employees 
WHERE SALARY >ALL (SELECT SALARY FROM EMPLOYEES WHERE job_id = 'IT_PROG')
AND job_id !='IT_PROG'


select last_name, job_id, salary, hire_date 
from employees 
WHERE SALARY <ALL (SELECT SALARY FROM EMPLOYEES WHERE job_id = 'IT_PROG')
AND job_id !='IT_PROG'
ORDER BY 3 DESC



select last_name, job_id, salary, hire_date 
from employees 
WHERE SALARY >ANY (SELECT SALARY FROM EMPLOYEES WHERE job_id = 'IT_PROG')
AND job_id !='IT_PROG'
ORDER BY 3 DESC


select last_name, job_id, salary, hire_date 
from employees 
WHERE SALARY <ANY (SELECT SALARY FROM EMPLOYEES WHERE job_id = 'IT_PROG')
AND job_id !='IT_PROG'
ORDER BY 3 DESC


select last_name, job_id, salary, hire_date 
from employees 
WHERE SALARY > (SELECT MAX(SALARY) FROM EMPLOYEES WHERE job_id = 'IT_PROG')
AND job_id !='IT_PROG'
ORDER BY 3 DESC

select last_name, job_id, salary, hire_date 
from employees 
WHERE SALARY > (SELECT MIN(SALARY) FROM EMPLOYEES WHERE job_id = 'IT_PROG')
AND job_id !='IT_PROG'
ORDER BY 3 DESC


SELECT last_name, job_id, salary
FROM   employees
WHERE  salary IN (SELECT salary
                 FROM   employees 
                 WHERE JOB_ID='IT_PROG' AND SALARY BETWEEN 5000 AND 20000);



SELECT   department_id, MIN(salary)
FROM     employees
GROUP BY department_id
HAVING   MIN(salary) >
                       (SELECT MAX(salary)
                        FROM   employees
                        WHERE  department_id = 50);


SELECT employee_id,salary,last_name FROM employees M
WHERE NOT EXISTS
(SELECT 1
FROM employees W
 WHERE (W.manager_id=M.employee_id));


SELECT emp.last_name
FROM   employees emp
WHERE  emp.employee_id  IN
                           (SELECT mgr.manager_id
                            FROM   employees mgr
                            WHERE MANAGER_ID IS NOT NULL);
							



SELECT employee_id, job_id FROM EMPLOYEES 
MINUS
SELECT EMPLOYEE_ID, job_id FROM JOB_HISTORY


SELECT employee_id, job_id FROM EMPLOYEES 
INTERSECT
SELECT EMPLOYEE_ID, job_id FROM JOB_HISTORY

SELECT employee_id, job_id FROM EMPLOYEES 
UNION 
SELECT EMPLOYEE_ID, job_id FROM JOB_HISTORY


SELECT employee_id, job_id FROM EMPLOYEES 
UNION ALL
SELECT EMPLOYEE_ID, job_id FROM JOB_HISTORY


SELECT employee_id, job_id, SALARY FROM EMPLOYEES 
UNION
SELECT EMPLOYEE_ID, job_id, 0 FROM JOB_HISTORY


SELECT employee_id, job_id, SALARY FROM EMPLOYEES 
UNION
SELECT EMPLOYEE_ID, job_id, TO_NUMBER(NULL) FROM JOB_HISTORY



SELECT E.EMPLOYEE_ID, E.LAST_NAME, J.JOB_TITLE, D.DEPARTMENT_NAME, L.CITY 
FROM EMPLOYEES E, JOBS J, departments D, LOCATIONS L 
WHERE E.job_id=J.JOB_ID 
AND E.department_id=D.DEPARTMENT_ID 
AND D.LOCATION_ID=L.LOCATION_ID 
AND E.EMPLOYEE_ID IN (SELECT EMPLOYEE_ID FROM EMPLOYEES 
						MINUS 
					SELECT EMPLOYEE_ID FROM JOB_HISTORY						
					)



Total salary : 200000
Total Employees: 107 
Total Departments: 11
Total Jobs: 15
Total Countries: 5


select 1 sl, 'Total salary: '||sum(salary)  from employees 
union 
select 2, 'Total Employees: '||count(*)  from employees 
union  
select 3, 'Total Departments: '||count(distinct department_id) from employees 
union
select 4, 'Total jobs: '||count(distinct job_id) from employees 
union 
SELECT 5, 'Total Countries: '||count(distinct c.country_name)
FROM EMPLOYEES E, departments D, LOCATIONS L, Countries c
WHERE E.department_id=D.DEPARTMENT_ID 
AND D.LOCATION_ID=L.LOCATION_ID 
and l.country_id=c.country_id
order by 1


select last_name, d.department_name 
from employees e join departments d 
on (e.department_id=d.department_id)


select last_name, d.department_name 
from employees e left join departments d 
on (e.department_id=d.department_id)


select last_name, d.department_name 
from employees e right join departments d 
on (e.department_id=d.department_id)


select last_name, d.department_name 
from employees e full join departments d 
on (e.department_id=d.department_id)



select e.last_name, j.job_title, d.department_name, l.city, 
	c.country_name, r.region_name 
from employees e left join departments d 
on (e.department_id=d.department_id)
left join jobs j
using (job_id) 
left join locations l 
using (location_id) 
left join Countries c 
using (country_id)
left join regions r 
using (region_id)


select e.last_name, j.job_title, d.department_name, l.city, 
	c.country_name, r.region_name 
from employees e left join departments d 
on (e.department_id=d.department_id)
left join jobs j
on (e.job_id=j.job_id) 
left join locations l 
on (d.location_id=l.location_id) 
left join Countries c 
on (l.country_id=c.country_id)
left join regions r 
on (c.region_id=r.region_id)