select * from employees;
select * from department;

-- INNER JOIN , FULL OUTER JOIN , LEFT OUTER JOIN , RIGHT OUTER JOIN
--   {slect only some column at output}
--     [with use of (AS) command i.e. with aliases]

select e.emp_name,e.emp_salary,d.dep_name  from employees as e inner join department as d
              on  e.empdep_id=d.dep_id;

 --OR

 select emp_name,emp_salary,dep_name  from employees as e inner join department as d
              on  e.empdep_id=d.dep_id;

----------------------ABOVE BOTH ARE CORRECT STYLE---------------------------------------


select emp_id,emp_name,dep_location,dep_name from employees as e full outer join department as d
              on  e.empdep_id=d.dep_id;

select emp_name,dep_location,dep_name from employees as e right join department as d
              on  e.empdep_id=d.dep_id;

select emp_id,emp_name,dep_location,dep_name,emp_salary from employees as e left join department as d
              on  e.empdep_id=d.dep_id;

