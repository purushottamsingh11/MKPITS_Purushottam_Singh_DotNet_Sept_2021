                      
					  --ARITHMATIC OPERATION--
              -----------------------------------------
--METHOD-1.

declare  @c int=20,  @d int=5 , @add int , @sub int  ,  @mul int , @div decimal(7,2);
select @add=@c+@d,
       @sub=@c-@d,
	   @mul=@c*@d,
	   @div=@c/@d;
select @add as addition_of_two_numbers,
       @sub as subtraction_of_two_numbers,
	   @mul as multipliction_of_two_numbers,
	   @div as division_of_two_numbers;

	

--METHOD-2.

declare  @a decimal=30,  @b decimal=4;
declare  @add int=@a+@b,
         @sub int=@a-@b,
		 @mul int=@a*@b,
		 @div decimal(7,2)=@a/@b;
select @add as addition_of_two_numbers,
       @sub as subtraction_of_two_numbers,
	   @mul as multipliction_of_two_numbers,
	   @div as division_of_two_numbers;


	