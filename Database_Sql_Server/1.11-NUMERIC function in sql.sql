-- NUMERIC function ===>> ABS(),CEILING(),FLOOR(),SIGN(),SQRT(),SQUARE(),EXP(),PI(),SIN(),COS(),TAN(),COT().

select abs(-12); --w/o column name
select abs(12) as 'absolute value of given number'; --with column name

select ceiling(4.7) as 'ceiling value of given number';

select floor(4.7) as 'ceiling value of given number';

select sign(10);  --ans is 1 because it is a +ve number
select sign(-10); --ans is -1 because it is a -ve number
select sign(0);   --ans is 0 because it is a zero number
select sign(10),sign(-5),sign(0);

select square(12);
select sqrt(2), sqrt(64),sqrt(6.4);

select exp(2.5),exp(1),exp(25);

select cos(30),sin(60),tan(45),cot(45); --sec() and cosec() not available in sql server.
select pi();
