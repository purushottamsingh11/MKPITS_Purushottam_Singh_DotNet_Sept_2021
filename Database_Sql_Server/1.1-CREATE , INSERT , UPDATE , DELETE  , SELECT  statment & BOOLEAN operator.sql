create table employee (id int,fname varchar(20),lname varchar(20),salary decimal(10,2),departnent varchar(15),city varchar(10));


insert into employee values(1,'ravi','savarkar',50000.56 ,'market','patana');
insert into employee values(20,'ravina','tanden',20000 ,'manager','patana');
insert into employee values(3,'niku','singh',50000.54 ,'market','nagpur');
insert into employee values(20,'nikhal','sahu',70000.79 ,'market','sivan');
insert into employee values(14,'heena','ali',9000 ,'market','patana');
insert into employee values(19,'rani','gupta',40000.217 ,'market','patana');

insert into employee (id,fname,lname,salary,city) values(9,'tina','rawat',96000.27776765 ,'chappara');
insert into employee (id,fname,lname,salary,city) values(10,'sina','rai',66000 ,'nagpur');
insert into employee (id,fname,lname,salary,departnent) values(11,'kavitry','sawan',100000 ,'manager');




update employee set departnent='IT' where id=3;
update employee set departnent='IT' where id=19;

update employee set departnent='art',city='delhi',salary=867543.12,lname='ahmad' where id=14;




delete from employee where id=9;
delete from employee where city='sivan';
delete from employee where salary=40000;



select * from employee;

select fname,salary,departnent from employee;

select fname,salary,departnent from employee where city='nagpur' ;

select * from employee where  city='nagpur' ;

-- BOOLEAN operator in sql (0R , AND , NOT)
select * from employee where city='nagpur' and  id=3;
select * from employee where city='nagpur'or  id=1;
select * from employee where NOT city='nagpur' ;

