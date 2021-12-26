use mydb;
select * from students;


--FOR  UPDATING  ONLY  ONE  COLUMN  OF  TABLE
update students set branch='master art' where city='mumbai';
update students set id=5 where lname='ali';
update students set id=null where lname='ali';


--FOR  UPDATING  MANY COLUMN  OF  TABLE
update students set id=50 , fname='rani'  , city='delhi' , lname='gupta' where branch='EC';