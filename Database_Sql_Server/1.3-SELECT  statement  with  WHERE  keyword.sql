use mydb;
select * from students;

select fname , city  from students where city ='nagpur' ;
--OR
select fname , city  from students where city  like 'nagpur' ;
select  *  from students where city ='nagpur' ;

select fname , city  from students where id=6 ;
--OR
select fname , city  from students where id like 6 ;
select * from students where id=6 ;




