select * from employee;

--solution of question w/o using VARIABLE
--QUE-1.
select fname,salary,departnent from employee where city='rachi';
--QUE-2.
select avg(salary) as averagesalary from employee; 
--QUE-3.
select avg(salary) as averagesalary from employee where departnent='IT'; 
--QUE-4.
select max(salary) as maxsalary from employee;
--QUE-5.
select count(fname) as numberofemployee from employee;
--QUE-6.
select count(fname) as numberofemployee from employee where city='patana';
--QUE-7.
select salary+salary*0.4+200 as grosssalary from employee ;
--QUE-8.
select fname+' '+lname as fullname,salary as empsalary,salary+salary*0.4+200 as grosssalary from employee ;
--QUE-9.
select fname+' '+lname as fullname,salary as empsalary,salary+salary*0.4+200 as grosssalary from employee where city='nagpur' ;


--NOW
--solution of question using VARIABLE.

--QUE-1.
declare @firstname varchar(20),
        @sal decimal,
		@dep varchar(20),
		@cty varchar(15)='rachi';
select  @firstname=fname,@sal=salary,@dep=departnent from employee where @cty=city;
select  @firstname as 'starting name',
        @sal as 'salary of employee',
	    @dep as 'department of employee';

--QUE-2.
declare @average decimal(10,2);
select  @average = avg(salary)  from employee;
select  @average as 'average salary of employee';

--QUE-3.
declare @avge  decimal(10,2) , @dprt  varchar(13);
select  @avge = avg(salary)  from  employee  where  @dprt=departnent;
select  @avge as 'average salary of employee';
          --OR
declare @avg  decimal(10,2);
select  @avg = avg(salary)  from  employee  where departnent='IT';
select  @avg as 'average salary of employee';

--QUE-4.
declare @maxsal decimal(10,2);
select  @maxsal=max(salary)  from employee;
select  @maxsal as 'maximum salary of employee';

--QUE-6.
declare @countemp int,@cit varchar(20)='patana';
select  @countemp=count(fname) from  employee  where city= @cit;
select  @countemp as 'total number of student';
print   @countemp;


--QUE-8.
declare  @fullname varchar(20),@salr decimal(10,2),@grosssalary decimal(15,2);
select   @fullname=fname+' '+lname ,@salr=salary,  @grosssalary=salary+salary*0.4+200 from employee ;
select   @fullname as 'fullname of emp' ,
         @salr as 'salary of emp',  
		 @grosssalary as 'gross salary of emp' ;
	     --OR
 declare  @fulname varchar(20),@slr decimal(10,2),@grossalary decimal(15,2);
 select   @fulname=fname+' '+lname ,@slr=salary, @grossalary=@slr+@slr*0.4+200 from employee ;
 select   @fulname as 'fullname of emp' ,
          @slr as 'salary of emp',  
		  @grossalary as 'gross salary of emp' ;


 --QUE-9.
 declare  @funame varchar(20),@slry decimal(10,2),@grssalary decimal(15,2),@ct varchar(10)='nagpur';
 select   @funame=fname+' '+lname ,@slry=salary, @grssalary=@slry+@slry*0.4+200 from employee where @ct=city ;
 select   @funame as 'fullname of emp' ,
          @slry as 'salary of emp',  
		  @grssalary as 'gross salary of emp' ;
