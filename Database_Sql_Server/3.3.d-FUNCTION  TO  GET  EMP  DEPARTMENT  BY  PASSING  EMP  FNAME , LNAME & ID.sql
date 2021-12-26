select * from employee; --for displaying complete employee_table

--QUE... W/O create a function to get employee department by passing employee fname , lname & id
select departnent from employee where fname='niku' and lname='singh' and id=3;

 
--QUE... create a function to get employee deparment by passing employee fname , lname & id
create function get_emp_departnent(@fname varchar(15),@lname varchar(12),@id int)
returns varchar(20)

begin 
  declare @depar varchar(20);
  select  @depar=departnent from employee where fname=@fname and lname=@lname and id=@id;
--OR--select @depar=departnent from employee where @fname=fname and @lname=lname and @id=id;--BOTH ARE CORRECT
  return  @depar;
end

select dbo.get_emp_departnent('ravi','savarkar',1);                         --w/o column name
select dbo.get_emp_departnent('niku','singh',3) AS 'SALARY OF EMPLOYEE';    --with column name in single coat
select dbo.get_emp_departnent('RANI','gupta',19) AS SALARY_OF_EMPLOYEE;     --with column name w/o single coat(if we will not use single coat for column name then we cant use space in b/w column so we will use (_) for space)
