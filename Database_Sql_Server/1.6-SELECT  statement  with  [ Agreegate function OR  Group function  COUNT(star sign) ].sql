use mydb;
select * from students ;
update students set city='nagpur' where city='nagoor' ;

select count(*) from students;   --answer will alwayes come without column name(for colomn name we have to give column name as below)
select count(*) as total_number_of_student from students;   --with coloumn name



select count(*) as 'total number of student' from students where city='nagpur';  
