
--QUE..print 1 to 20 at output

declare @i int,@n int;
select @n=20,@i=1;
while @i<=@n
begin
    print  @i;        --  if i use [select @i] on place of [print @i] then o/p will come in column form
    set @i+=1;        -- OR   set @i=@i+1;  both are same thing. 
end;

 --print 'i= ' +@i; --ask (at above, if i write [print 'i= ' +@i;] at the place of [print @i] why error will come)