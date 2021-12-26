declare @i int=1,@sum int=0;
begin 
   while @i<=10
   begin
      select @sum=@sum+@i,
	         @i=@i+1;
   end

end;

select @sum ;                                  --w/o column name
--OR
select @sum as sum_of_number_from_1_to_10;     --with column name style-1
--OR
select @sum as 'sum of number from 1 to 10';    --with column name style-2
--OR
print @sum ;             --ans will be show in message section
--OR
print ('sum of number'+@sum) ;  