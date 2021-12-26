select * from employees;
select * from department;

--(method-2) INNER JOIN , FULL OUTER JOIN , LEFT OUTER JOIN , RIGHT OUTER JOIN 
--           [w/o using (AS) command i.e. w/o aliases]

select * from employees inner join department 
              on  employees.empdep_id=department.dep_id;


select * from employees full outer join department 
              on  employees.empdep_id=department.dep_id;


select * from employees left outer join department 
              on  employees.empdep_id=department.dep_id;



select * from employees right outer join department 
              on  employees.empdep_id=department.dep_id;