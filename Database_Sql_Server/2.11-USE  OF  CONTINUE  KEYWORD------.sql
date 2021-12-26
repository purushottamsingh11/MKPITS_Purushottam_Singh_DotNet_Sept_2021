-- USE OF CONTINUE  KEYWORD

declare @i int,@n int;
select @i=1,@n=10;
while @i<=@n
begin
   	--print  @i; 
	set @i=@i+1; 
	if @i=4
	begin
	    continue;
	end
   -- print  @i; 
end;