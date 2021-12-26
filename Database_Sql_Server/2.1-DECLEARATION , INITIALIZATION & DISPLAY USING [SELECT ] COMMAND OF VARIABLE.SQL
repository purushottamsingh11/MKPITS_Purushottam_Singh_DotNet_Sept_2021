--in programing language variables are generally use to temporary store values in memory 
--in TSQL variables are created using DECLARE command followed by variable name followed by data type preceded by @ symbol
--we use SET or SELECT commend for Assignment the value of variable (SET for assignment the value of single single variable and SELECT for assignment the values of multiple variable).

--declareation and assignment of variable in one line
declare   @name varchar(15)='niku singh',    @age int=32,    @sal decimal(8,2)=20000.3456;
select @name as name_of_empoleyee,@age as age_of_employee,@sal as salary_of_employee; --with column name
--or
select @name,@age,@sal; --without column name.


--declareation in one line and assignment of variable in other line

--CASE-1
--if more number of assignment of variable in one line then use [select] commend
declare   @name  varchar(15) ,    @age int ,    @sal decimal(8,2);
select   @name='rani singh',    @age=36,    @sal=40000.745;
select @name as name_of_empoleyee,@age as age_of_employee,@sal as salary_of_employee; 

--CASE-2
--if more number of assignment of variable in many lines then use [set] commend
declare   @name  varchar(15) ,    @age int ,    @sal decimal(8,2);
set   @name='SUDHIR YADAV';
set   @age=40;
set   @sal=50000.745;
select @name as name_of_empoleyee,@age as age_of_employee,@sal as salary_of_employee; 


