

 select * from employee;

--QUE-find grosssalary of employee with full name and salary whose city='delhi'. 
 declare @name varchar(40),@sal decimal(10,2),@gross_sal decimal(10,2),@cty varchar(15);
 select @cty='delhi';
 select @name=fname+'   '+lname,@sal=salary, @gross_sal=(@sal+@sal*0.2)+500 from employee where @cty=city ;
 select @name as full_name,
        @sal as salary_ofemployee,
	    @gross_sal as grosssalary;

--ASK(why not here we found grosssalary of all employee here only found grosssalary of only last employee)
 declare @nam varchar(40),@salr decimal(10,2),@grosssal decimal(10,2);
 select @nam=fname+'   '+lname,@salr=salary, @grosssal=(@salr+@salr*0.2)+500 from employee;
 select @nam as full_name,
        @salr as salary_ofemployee,
	    @grosssal as grosssalary;


 declare @sal decimal(10,2) , @gross_sal decimal(10,2);
 --select  @sal=salary; --this is wrong repersention
 select  @sal=salary, @gross_sal=(@sal+@sal*0.2)+500 from employee where city='delhi';
 select  @gross_sal as grosssalary;