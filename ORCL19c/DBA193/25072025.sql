select count(*) totemp, count(commission_pct) countcomm,
    sum(salary) totsal, max(salary) maxsal,
	min(salary) minsal, to_char(round(avg(salary),2),'99,999.99') avgsal,
	trunc(avg(commission_pct),2)*100||'%' avgcomm
from employees ;


	
select job_id,  count(*) totemp, sum(salary) totsal, max(salary) maxsal,
	min(salary) minsal, trunc(avg(salary)) avgsal
from employees 
group by job_id
order by totemp desc

	
select job_id, department_id,
	count(*) totemp, sum(salary) totsal, max(salary) maxsal,
	min(salary) minsal, trunc(avg(salary)) avgsal
from employees 
group by job_id, department_id;


select job_id,  count(*) totemp, sum(salary) totsal, max(salary) maxsal,
	min(salary) minsal, trunc(avg(salary)) avgsal
from employees 
where salary>10000
group by job_id
having sum(salary)>20000
order by totemp desc;


select department_id, 
	LISTAGG(last_name, ', ') WITHIN GROUP (ORDER BY last_name desc) "Listagg"
from employees 
group by department_id
order by 1 desc


select EMPLOYEE_ID, LAST_NAME, commission_pct, manager_id, 
		COALESCE(commission_pct, manager_id, employee_id) "COALESCE",
		CASE WHEN commission_pct IS NOT NULL THEN commission_pct
			WHEN manager_id IS NOT NULL THEN manager_id
			ELSE EMPLOYEE_ID END "CASE Result" 
FROM employees 


select EMPLOYEE_ID, LAST_NAME, commission_pct, salary, 
		CASE WHEN nvl(commission_pct,0)=.1 then salary*1.5
			WHEN commission_pct IS NOT NULL THEN salary*(1+commission_pct)
			 else salary*1.05 END "CASE Result" 
FROM employees 


select count(distinct department_id) from employees



SELECT    department_id, AVG(salary) avgsal
FROM     employees
GROUP BY department_id
having avg(salary) = (SELECT    MAX(AVG(salary))
					FROM     employees
					GROUP BY department_id
					)
				
did		2005		2006		2007		2008		2009	Others

10 			0			0			1			0			0		0
20			2			0			3			1			0		0
30			0			0			0			2			0		5




select department_id, 
     sum(case when to_char(hire_date,'yyyy')=2005 then 1 else 0 end)  "2005",
	 sum(case when to_char(hire_date,'yyyy')=2006 then 1 else 0 end)  "2006",
	 sum(case when to_char(hire_date,'yyyy')=2007 then 1 else 0 end)  "2007",
	 sum(case when to_char(hire_date,'yyyy')=2008 then 1 else 0 end)  "2008",
	 sum(case when to_char(hire_date,'yyyy')=2009 then 1 else 0 end)  "2009",
	 sum(case when to_char(hire_date,'yyyy') 
			not in (2005, 2006, 2007, 2008, 2009) then 1 else 0 end)  "Others"
from employees 
group by department_id
order by 1


select department_id, 
     sum(decode(to_char(hire_date,'yyyy'),2005, 1, 0))  "2005",
	 sum(decode(to_char(hire_date,'yyyy'), 2006, 1,0))  "2006",
	 sum(decode(to_char(hire_date,'yyyy'), 2007, 1,0))  "2007",
	 sum(decode(to_char(hire_date,'yyyy'), 2008, 1,0))  "2008", 
	 sum(decode(to_char(hire_date,'yyyy'), 2009, 1,0))  "2009",
	 sum(case when to_char(hire_date,'yyyy') 
			not in (2005, 2006, 2007, 2008, 2009) then 1 else 0 end)  "Others"
from employees 
group by department_id
order by 1



select e.employee_id, e.last_name, e.job_id, j.job_title, d.department_name
from employees e join jobs j 
on (e.job_id=j.job_id)
join departments d
on (e.department_id=d.department_id)


select e.employee_id, e.last_name, e.job_id, j.job_title, d.department_name
from employees e, jobs j, departments d
where e.job_id=j.job_id
and  e.department_id=d.department_id


select e.employee_id, e.last_name, job_id, j.job_title, d.department_name
from employees e join jobs j 
using (job_id)
join departments d
using (department_id)


select employee_id, last_name, job_id,  department_name
from employees natural join departments 


select employee_id, last_name, job_id,  job_title
from employees natural join jobs 


select e.employee_id, e.last_name, e.job_id, j.job_title, d.department_name
from employees e join jobs j 
on (e.job_id=j.job_id)
left join departments d
on (e.department_id=d.department_id)


select e.employee_id, e.last_name, e.job_id, j.job_title, d.department_name
from employees e, jobs j, departments d
where e.job_id=j.job_id
and  e.department_id=d.department_id(+)


select e.employee_id, e.last_name, e.job_id, j.job_title, d.department_name
from employees e join jobs j 
on (e.job_id=j.job_id)
right join departments d
on (e.department_id=d.department_id)


select e.employee_id, e.last_name, e.job_id, j.job_title, d.department_name
from departments d, employees e, jobs j 
where d.department_id=e.department_id(+)
and e.job_id=j.job_id(+)


select e.employee_id, e.last_name, e.job_id, j.job_title, d.department_name
from employees e join jobs j 
on (e.job_id=j.job_id)
left join departments d
on (e.department_id=d.department_id)


select e.employee_id, e.last_name, e.job_id, j.job_title, d.department_name
from employees e join jobs j 
on (e.job_id=j.job_id)
full join departments d
on (e.department_id=d.department_id)



select e.employee_id, e.last_name, e.salary, e.job_id, m.last_name managerName
from employees e, employees m 
where e.manager_id=m.employee_id(+)
order by 1