declare @l int , @b int , @area_r int ,
        @a int , @area_s int,
		@r float ,@pi float=3.14, @area_c float,
		@base decimal(3,2) , @hight decimal(4,2) , @area_t decimal(5,3) ;

--for finding area of rectangle
select @l=30,
       @b=50;
select @area_r=@l*@b;
select @area_r as 'AREA OF RECTANGLE';


--for finding area of square
set @a=40;
select @area_s=@a*@a;
select @area_s as 'AREA OF SQUARE';


--for finding area of circle
set @r=4.5;
select @area_c=@pi*@r*@r;
select @area_c as 'AREA OF CIRCLE';


--for finding area of tringle
set @base=4.1;
set @hight=2.5;
select @area_t=0.5*@base*@hight;
select @area_t as 'AREA OF TRIANGLE';
