select last_name, salary, trunc(salary/1000) "Notes1000", 
    trunc(mod(salary,1000)/500) "Notes500",
    trunc(mod(salary,500)/100) "Notes100",
    trunc(salary/1000)+ trunc(mod(salary,1000)/500)+ trunc(mod(salary,500)/100)
    "Total Notes"    
from employees

select employee_id, last_name, salary, 
	to_char(hire_date,'fmMonth dd, yyyy') hiredate
from employees 
where hire_date='05-feb-06'


select to_char(sysdate,'dd/mm/rrrr hh12:mi:ss AM') from dual

select 12500+(6000*2)+(60000/300) FROM DUAL

SELECT EMPLOYEE_ID, LAST_NAME, HIRE_DATE, HIRE_DATE+7
FROM EMPLOYEES ;

SELECT SYSDATE, SYSDATE+7 FROM DUAL ;

SELECT SYSDATE, ADD_MONTHS(SYSDATE,3)+10 FROM DUAL ;

SELECT SYSDATE, ADD_MONTHS(SYSDATE,-3) FROM DUAL ;

SELECT EMPLOYEE_ID, LAST_NAME, HIRE_DATE, SYSDATE-HIRE_DATE NO_OF_DAYS
FROM EMPLOYEES ;


SELECT EMPLOYEE_ID, LAST_NAME, HIRE_DATE,
    TRUNC(SYSDATE-HIRE_DATE) NO_OF_DAYS,
    TRUNC((SYSDATE-HIRE_DATE)/7) WEEKS,
    TRUNC(MONTHS_BETWEEN(SYSDATE,HIRE_DATE)) MONTHS,
    TRUNC(TRUNC(MONTHS_BETWEEN(SYSDATE,HIRE_DATE))/12)||' Year '||
    MOD(TRUNC(MONTHS_BETWEEN(SYSDATE,HIRE_DATE)),12)||' Month' YearMonth
FROM EMPLOYEES ;


select to_char(to_date('15-aug-78'),'Day'),  next_day('15-aug-78','Friday')
from dual;


select last_day(sysdate) from dual

select to_char(to_date('15-feb-24'),'Day'),  last_day('15-feb-24')
from dual;


select round(sysdate,'year')
from dual;

select trunc(sysdate,'year')
from dual;


select round(sysdate,'month')
from dual;

select trunc(sysdate,'month')
from dual;


select EMPLOYEE_ID, LAST_NAME, HIRE_DATE, salary 
from employees 
where salary='10000'


select EMPLOYEE_ID, LAST_NAME, HIRE_DATE, salary 
from employees 
where hire_date='30/jan/04'


select EMPLOYEE_ID, LAST_NAME, HIRE_DATE, salary 
from employees 
where hire_date=to_date('30-01-04','dd-mm-rr')


select EMPLOYEE_ID, LAST_NAME, to_char(HIRE_DATE,'dd-mm-rrrr') hiredate, salary 
from employees 
where hire_date=to_date('30-01-04','dd-mm-rr')



select EMPLOYEE_ID, LAST_NAME, to_char(HIRE_DATE,'dd-mm-rrrr') hiredate, 
    to_char(salary,'999,99,999.99') salary
from employees 
where hire_date=to_date('30-01-04','dd-mm-rr');


select EMPLOYEE_ID, LAST_NAME, to_char(HIRE_DATE,'dd-mm-rrrr') hiredate, 
    to_char(salary,'999G99G999D99') salary
from employees 
where hire_date=to_date('30-01-04','dd-mm-rr')


select EMPLOYEE_ID, LAST_NAME, to_char(HIRE_DATE,'dd-mm-rrrr') hiredate, 
    to_char(salary,'999G99G999D99') salary
from employees 
where SALARY=TO_NUMBER('10,000','99,999')



select EMPLOYEE_ID, LAST_NAME, to_char(HIRE_DATE,'dd-mm-rrrr') hiredate, 
    to_char(salary,'999G99G999D99') salary
from employees 
where SALARY>TO_NUMBER('10,000','99,999')



SELECT FIRST_NAME, LAST_NAME, NVL(COMMISSION_PCT,0) COMM, SALARY, 
		NVL2(COMMISSION_PCT,COMMISSION_PCT*SALARY+SALARY, SALARY) TOTSAL,
		NULLIF(LENGTH(FIRST_NAME),LENGTH(LAST_NAME)) "NULLIFF",
		COALESCE(COMMISSION_PCT, MANAGER_ID, EMPLOYEE_ID) "COALESCE"
FROM EMPLOYEES

SELECT LAST_NAME, JOB_ID, SALARY,
		CASE WHEN JOB_ID='IT_PROG' THEN SALARY*1.10 
			WHEN JOB_ID='SA_REP' THEN SALARY*1.15
			WHEN JOB_ID LIKE '%MAN%' THEN SALARY*1.05
			ELSE SALARY END NEW_SAL 
FROM employees


SELECT LAST_NAME, JOB_ID, SALARY,
		DECODE(JOB_ID,'IT_PROG', SALARY*1.10,
				'SA_REP' , SALARY*1.15,
				'SA_MAN' , SALARY*1.05
				, SALARY ) NEW_SAL 
FROM employees



SELECT EMPLOYEE_ID, LAST_NAME, HIRE_DATE,
    TRUNC(SYSDATE-HIRE_DATE) NO_OF_DAYS,
    TRUNC((SYSDATE-HIRE_DATE)/7) WEEKS,
    TRUNC(MONTHS_BETWEEN(SYSDATE,HIRE_DATE)) MONTHS,
	
CASE WHEN TRUNC(TRUNC(MONTHS_BETWEEN(SYSDATE,HIRE_DATE))/12)>1 THEN 
    TRUNC(TRUNC(MONTHS_BETWEEN(SYSDATE,HIRE_DATE))/12)||' Years '
	else 
	TRUNC(TRUNC(MONTHS_BETWEEN(SYSDATE,HIRE_DATE))/12)||' Year ' 
end ||
	
case when  MOD(TRUNC(MONTHS_BETWEEN(SYSDATE,HIRE_DATE)),12)>1 then 
    MOD(TRUNC(MONTHS_BETWEEN(SYSDATE,HIRE_DATE)),12)||' Months'
	else 
	MOD(TRUNC(MONTHS_BETWEEN(SYSDATE,HIRE_DATE)),12)||' Month' 
	end YearMonth
FROM EMPLOYEES ;

select employee_id, last_name, COMMISSION_PCT, salary, 
	case when COMMISSION_PCT is null then 'Salary'
	else 
	'comm+Salary' end "Comm/Salary"
from employees ;


employeeid, name, comm, salary, salary+comm/salary 

100, king, 0, 24000, salary 
150, Kocher, .1, 6000, salary+comm 