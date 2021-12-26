
--CALCULATION OF GROSS SALARY USING T-SQL.

--METHOD-1.
declare  @name varchar(15)='niku singh',    @age int=32,    @sal decimal(8,2)=20000.3456 ,  @gross_sal decimal(10,2);
select   @gross_sal =(@sal+@sal*0.2)+500; 
select   @gross_sal as gross_salary;  --calculation of only gross salary

--METHOD-2.
declare  @name varchar(15)='niku singh',    @age int=32,    @sal decimal(8,2)=20000.3456 ;
declare  @gross_sal decimal(10,2)=(@sal+@sal*0.2)+500; 
select   @gross_sal as gross_salary;  --calculation of only gross salary

--OR

select   @name as name_of_empoleyee,    --display complete information with gross salary.
         @age as age_of_employee,  
		 @sal as salary_of_employee, 
		 @gross_sal as gross_salary; 
