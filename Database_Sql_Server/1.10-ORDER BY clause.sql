-- [ORDER BY] clause is use to sort/arrange the records either in ascending or descending order. 
-- for arranging in descending orderwe use DESC keyword 
-- but
-- for arranging in ascending order we will not use any keyword.
-- ORDER BY caluse is alwayes use with SELECT statment.
-- ORDER BY caluse is work for sorting/arrange both alphabet(a-z or A-Z) and number(1-9).
--IMP
--ORDER BY,GROUP BY,WHERE,HAVING clause is always use at the ending of SELECT statment and UPDATE statment and DELETE statment.

select * from students  ;
-- for sorting in ascending order.
select * from students  ORDER BY fname;  --work on alphabet 
select * from students  ORDER BY id;     -- work on numeric value
select id,fname,city from students  ORDER BY fname;   
select id,city from students  ORDER BY id; 

-- for sorting in descending order.
select * from students  ORDER BY fname desc;   
select * from students  ORDER BY id  desc; 
select id,fname,city from students  ORDER BY fname desc;   
select id,city from students  ORDER BY id desc; 