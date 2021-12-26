select * from employee; --for displaying complete employee_table

--QUE... W/O create a function to get employee salary by passing ID
select salary from employee where id=20;               --w/o column name
select salary as emp_salary from employee where id=20;   --with column name emp_sal


--QUE... create a function to get employee salary by passing ID 
create function emp_sal(@empid int)
returns decimal(10,2)

begin
declare @sal decimal(10,2);
select @sal=salary from employee where id=@empid;
return @sal;
end;

select dbo.emp_sal(20);
select dbo.emp_sal(20) as 'SALARY OF EMPLOYEE';
select dbo.emp_sal(19) as 'SALARY_OF_EMPLOYEE';
select dbo.emp_sal(11) as SALARY_OF_EMPLOYEE;