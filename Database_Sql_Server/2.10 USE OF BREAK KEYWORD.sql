-- USE OF BREAK  KEYWORD

declare @i int,@n int;
select @n=10,@i=1;
while @i<=@n
begin
    print  @i; 
	set @i+=1; 
	    if @i=4
	       begin
	          break;
	       end
end;


--OR

declare @i int,@n int;
select @n=10,@i=1;
while @i<=@n
begin
  
	    if @i=4
	       begin
	          break;
	       end
    print  @i; 
	set @i+=1; 
end;


--BOTH ARE CORRECT