select * from employee; --for displaying complete employee_table

--QUE... W/O create a function to get employee city by passing employee full name after concatinate fname and lname
select city from employee where fname+' '+lname='niku singh';

 
--QUE... create a function to get employee city by passing employee full name after concatinate fname and lname
create function get_emp_city(@name varchar(30))
returns varchar(20)

begin
  declare @cit varchar(20);
  select @cit=city from employee where fname+' '+lname=@name;
  return @cit;
end

select dbo.get_emp_city('ravi savarkar');                           --w/o column name
select dbo.get_emp_city('niku singh') AS 'SALARY OF EMPLOYEE';   --with column name in single coat
select dbo.get_emp_city('RANI') AS SALARY_OF_EMPLOYEE;          --with column name w/o single coat(if we will not use single coat for column name then we cant use space in b/w column so we will use (_) for space)

