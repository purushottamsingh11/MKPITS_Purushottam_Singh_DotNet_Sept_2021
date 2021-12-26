select * from employee;
select * from students;

----------------------------------------------------------------------

--(union ) not display repeated thing .
select fname,lname from employee
union
select fname,lname from students;

---------------------------------------------
--(union all) display repeated thing also.
select fname,lname from employee
union all
select fname,lname from students;

