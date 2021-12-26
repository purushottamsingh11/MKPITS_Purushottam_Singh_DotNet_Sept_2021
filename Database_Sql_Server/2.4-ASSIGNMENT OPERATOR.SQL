                      
					  --assignment operation--
              -----------------------------------------
--METHOD-1.

declare  @n int=5,  @p int=30,  @q int=10,  @r int=6 ;
select	 @n = @n+10,  --or [ @n+=10 ]
         @p = @p-3,   --or [ @n-=3 ]
		 @q = @q*2,  --or [ @n*=2 ]
         @r = @r/3;   --or [ @n/=3 ]
select   @n as increment_of_number_by_10,
         @p as decrement_of_number_by_3,
		 @q as multiplication_of_number_by_2,
         @r as division_of_number_by_3;




--METHOD-2.

declare @i int;
select  @i=3;
select  @i=@i+10; 
select  @i as increment_of_number_by_10;