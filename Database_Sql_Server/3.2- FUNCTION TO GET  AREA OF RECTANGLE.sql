create function areaofrect(@l int,@b int)
returns int

begin
declare @area int;
select @area=@l*@b;
return @area;
end;


select  dbo.areaofrect(9,6) as AREA_OF_RECTANGLE;
select  dbo.areaofrect(11,8);