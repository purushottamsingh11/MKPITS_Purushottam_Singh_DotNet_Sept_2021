
--SUM OF NUMBER FROM 1 to n USING FUNCTION.

create function sumN(@n int)
returns int
begin
declare @i int=1,@sum int=0;
while @i<=@n
begin
select @sum=@sum+@i,      --0R-- --set @s=@s+@i;
       @i=@i+1;                  --set @i=@i+1;
     
end
return @sum;
end;

select dbo.sumN(11);
--OR
select dbo.sumN(17) as 'sum from 1 to n i.e 17';