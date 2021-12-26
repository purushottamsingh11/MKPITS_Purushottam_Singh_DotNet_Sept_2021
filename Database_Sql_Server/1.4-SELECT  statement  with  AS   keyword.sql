select * from students ;
select fname firstname , city  from students where id=6 ;   --without (as) command and without single inverted comma(' ')
--OR
select fname 'firstname' , city  from students where id=6 ;   --without (as) command and with single inverted comma(' ')
--OR
select fname as firstname , city  from students where id=6 ;    --with (as) command and without single inverted comma(' ')





select fname+ '    ' +lname  fullname , city  from students ;  --with four space b/w fname and lname
select fname+ ' ' +lname  fullname , city  from students ; --with single space b/w fname and lname
select fname+lname  fullname , city  from students ;
--OR
select fname+lname as fullname , city  from students ;
--OR
select fname+lname  'fullname' , city  from students ;




select fname+'   '+lname as first_name , city as distic , id as sr_no  from students;
select fname+'   '+lname as first_name , city as distic , id as sr_no , branch as STREEM from students;
select city as distic ,fname+'   '+lname as first_name ,  id as sr_no , branch as STREEM from students;
--OR
select city  distic ,fname+'   '+lname   first_name ,  id  sr_no , branch  STREEM from students;




--column name change and some calculation also on coloumn values.
--IMP IMP IMP IMP IMP--
select  id as sr_no from students;
select  id+id*10/100+5  as sr_no from students;
select  id+3  as sr_no from students;
