
-- {STRING function} in sql are ==>> LEN(),UPPER(),LOWER(),LTRIM(),RTRIM(),SUBSTRING(),REPLACE(),REPLICATE().

select len('purushottam singh') as 'length of given string is';
select upper('purushottam singh') as upper_later_of_given_string_is; 
select lower('PURUSHottam SIngG') lower_later_of_given_string_is;
select ltrim('    purushottam singh');
select rtrim('purushottam singh     ');
select substring('gulabjamun',4,4); --SUBSTRING('string',position of alphabate from which we have to keep,number of alphabate we want to keep)
select replace('gulabrush','rush','jamun sweet dish'); --REPLACE('string','which string we want to replace','replaced value')
select replicate('you  ',4);

select replace('gulabrush','rush','jamun'),replace('gulabrush','u','jamun');
select substring('gulabjamun',4,4),substring('gulabjamun',4,3),substring('gulabjamun',4,2);

------------------------------------------------------------------------------------------------

select * from employee;

select len(fname) from employee;
select fname,len(fname) from employee;                     --w/o coulmn name
select lname,len(lname) as length_of_lname from employee;  --with column name 
select fname+' '+lname,len(fname+' '+lname) from employee; --IMP IMP

select fname,upper(fname) from employee;

select fname,lower(fname) from employee;