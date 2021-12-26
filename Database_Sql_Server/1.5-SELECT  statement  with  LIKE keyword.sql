select * from students  ;
select * from students where fname = 'n%' ;   --wrong representation because alwayes use here (like) never use here (=)
select * from students where fname like 'na%' ;
select * from students where fname like '%a%' ;
select * from students where fname like '%ya%' ; --imp
select * from students where fname like'%in' ;
select * from students where fname like 'n%' ;
select * from students where fname like '%i_' ;
select * from students where fname like '%i__' ; --this is right
select * from students where fname like '%i_ _' ; --this is wrong
select * from students where fname like '%m__' ;
select * from students where fname like '____' ; --this is right
select * from students where fname like '_ _ _ _' ; --this is wrong
select * from students where fname like '%i_u' ;