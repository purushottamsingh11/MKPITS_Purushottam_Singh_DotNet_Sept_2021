select * from employee; --for displaying complete employee_table

--QUE... W/O create a function to get employee salary by passing employee name
select salary from employee where fname='ravi';


--QUE... create a function to get employee salary by passing employee name
create function get_emp_sal(@name varchar(15))
returns decimal(10,2)
as
begin
  declare @sal decimal(10,2);
  select @sal=salary from employee where fname=@name;
  return @sal;
end

select dbo.get_emp_sal('ravi');                           --w/o column name
select dbo.get_emp_sal('niku') AS 'SALARY OF EMPLOYEE';   --with column name in single coat
select dbo.get_emp_sal('RANI') AS SALARY_OF_EMPLOYEE;     --with column name w/o single coat(if we will not use single coat for column name then we cant use space in b/w column so we will use (_) for space)

