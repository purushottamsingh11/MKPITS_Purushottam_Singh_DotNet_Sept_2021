select * from employee;


select count(*) from employee ; --w/o column name
select count(*) as num_of_employee from employee ;  --with column name
select count(*) from employee where salary<50000;
select count(*) as 'num of employee' from employee where salary<=50000;
select count(*) as num_of_employee from employee where salary<=50000.56;
select count(*) as 'num of employee' from employee where city='patana';

select count(fname) as num_of_employee from employee ; 
select count(departnent) as num_of_employee from employee ; --ans is 7(because NULL value is not count) {IMP}
select count(salary) as 'num of employee' from employee where city='nagpur';

select sum(salary) as total_salary_of_employee from employee ;
select sum(salary) as 'total salary of emp from patana' from employee where city='patana' ;

select avg(salary) from employee ;
select avg(salary) as avg_salary_of_empl_from_id_20 from employee where id=20 ;
select avg(salary) as avg_salary_of_empl_department_market from employee where departnent='market' ;



select max(salary) as max_salary_of_employee   from employee ;
select max(salary) as max_salary_of_empl_from_id_20   from employee where id=20 ;
select max(salary) as max_salary_of_empl_department_scince   from employee where departnent='scince' ;


select min(salary) as min_salary_of_employee   from employee ;
select min(salary) as 'min salary of empl from id 20'   from employee where id=20 ;
select min(salary) as min_salary_of_empl_department_scince   from employee where departnent='scince' ;
select * from employee;
