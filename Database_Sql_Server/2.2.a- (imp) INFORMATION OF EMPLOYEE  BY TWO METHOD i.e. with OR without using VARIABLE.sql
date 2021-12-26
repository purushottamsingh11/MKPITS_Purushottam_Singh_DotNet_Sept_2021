select * from employee;


 --display complete information of employee whose city=nagpur,directly(means w/o using variable)
 select * from employee where city='nagpur';




  --display some information of employee whose city=nagpur,directly(means w/o using variable)
 select fname+'   '+lname as full_name,salary as salary_of_employee  from employee where city='nagpur';





  --display some information of employee whose city=nagpur , using variable 
  --method-1.
 begin
 declare @name varchar(40),@sal decimal(10,2);
 select @name=fname+'   '+lname,@sal=salary from employee where city='nagpur';
 select @name as full_name,
        @sal as salary_ofemployee;
  end
  go      --w/o using [begin,end,go]commands also this is right..

  --OR

  --method-2.
 declare @name varchar(40),@sal decimal(10,2),@cty varchar(15);
 select @cty='nagpur';
 select @name=fname+'   '+lname,@sal=salary from employee where @cty=city;
 select @name as full_name,
        @sal as salary_ofemployee;
 
     



