--use of begin...end keyword means ==> begin means ( { ) and end means ( } ).

--calculation of avg salary w/o using variable.
select avg(salary) as 'average salary of employee' from employee;

--calculation of avg salary using variable.
declare @avg_sal decimal(10,2);
select  @avg_sal=avg(salary) from employee ;
select  @avg_sal as 'employee average salary';

--then for the use of IF-else statment we have to must use VARIABLE.
begin
declare @avrg_sal decimal(10,2); 
select @avrg_sal=avg(salary) from employee ;
select @avrg_sal as emp_average_salary;
if @avrg_sal > 60000
  begin
      print 'average salary is greater than 60000'; --at the place of PRINT  we can write SELECT both are correct
  end
  else
     print 'average salary is not greater than 60000'; --at the place of PRINT  we can write SELECT both are correct
		 
  end