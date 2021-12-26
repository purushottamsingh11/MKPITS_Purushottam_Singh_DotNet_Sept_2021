select * from employees;
select * from department;

--(method-1) INNER JOIN , FULL OUTER JOIN , LEFT OUTER JOIN , RIGHT OUTER JOIN
--     [with use of (AS) command i.e. with aliases]
select * from employees as e inner join department as d
              on  e.empdep_id=d.dep_id;

select * from employees as e full outer join department as d
              on  e.empdep_id=d.dep_id;

select * from employees as e RIGHT join department as d
              on  e.empdep_id=d.dep_id;

select * from employees as e LEFT join department as d
              on  e.empdep_id=d.dep_id;


--question on condition after joining			  
select * from employees as e inner join department as d on e.empdep_id=d.dep_id 
                                                    where dep_location='nagpur';

select * from employees as e inner join department as d on e.empdep_id=d.dep_id 
                              where dep_name='teaching' OR dep_location='delhi';
