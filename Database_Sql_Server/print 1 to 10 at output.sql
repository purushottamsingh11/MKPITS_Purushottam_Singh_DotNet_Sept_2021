declare @counter int=10;
while @counter>=1
begin
print @counter;
set @counter=@counter-1;
end

---------------------------------

declare @counter int=1;
while @counter<=10
begin
print @counter;
set @counter=@counter+1;
end

-----------------------------------

declare @counter int=10;
while @counter>=1
begin
if @counter=5
break;
print @counter;
set @counter=@counter-1;
end

-----------------------------------
--why not  working properly

declare @counter int=10;
while @counter>=1
begin
if @counter=5
continue;
print @counter;
set @counter=@counter-1;
end