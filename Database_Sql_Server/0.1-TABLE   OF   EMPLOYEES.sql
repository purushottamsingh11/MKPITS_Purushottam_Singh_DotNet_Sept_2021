
create table employees(emp_id int,emp_name varchar(25),emp_salary decimal(7,2),empdep_id varchar(5));
insert into employees values(10,'niku singh',50000,'P1');
insert into employees values(11,'taku sinha',67000,'P2');
insert into employees values(12,'nisaam gibs',72000,'P3');
insert into employees values(13,'sivani devi',33000.876,'P2');
insert into employees values(10,'raniku chhore',88000.22,'P4');

update employees set emp_id=14 where empdep_id='P4';


select * from employees; 