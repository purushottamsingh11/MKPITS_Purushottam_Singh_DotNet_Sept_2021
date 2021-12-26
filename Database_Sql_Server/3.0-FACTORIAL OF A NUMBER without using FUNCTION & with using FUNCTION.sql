
--FACTORIAL USING FUNCTION
create function factorial_n(@n int)
returns int
begin
declare @pro int=1,@i int=1;
while @i<=@n
begin
     select @pro=@pro*@i,
	        @i=@i+1;
end
return @pro;
end;

select  dbo.factorial_n(4) as 'factorial of given number is'; --o/p in tabular form.
--OR
print  dbo.factorial_n(4);                                    --same o/p in message form.




--FACTORIAL without USING FUNCTION

declare @pro int=1,@i int=1,@n int=5;
while @i<=@n
begin
     select @pro=@pro*@i,
	        @i=@i+1;
end
select @pro as 'factorial of given number is';   --o/p in tabular form.
--OR
print @pro;                                        --same o/p in message form.


                               


