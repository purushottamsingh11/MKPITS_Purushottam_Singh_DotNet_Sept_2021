create table products (id int, p_name varchar(12),price int,quantity int,catogry_no int);
insert into products values (51 , 'jam' , 211 , 1 , 12 );
insert into products values (211 , 'pulse' , 190 , 2 , 45 );
insert into products (id,p_name,quantity)  values (10, 'bread' , 8);
insert into products values (5 , 'sope' , 58 , 10 , 3 );
insert into products (catogry_no)  values ( 5);
insert into products values (65 , 'oil' , 115 , 1 , 23 );
insert into products (id,p_name,catogry_no)  values (1 , 'butter' , 56);
insert into products values (100 , 'milk' , 50 , 5 , 20 );



select * from products;