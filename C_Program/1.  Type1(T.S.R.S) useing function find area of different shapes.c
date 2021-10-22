 	#include<stdio.h>
    float c_area(int);
	float Rect_area(int,int);
	float sq_area(int);
    int main()
	{
	int radius,length,breath,side;
	float x,z,y;
	printf("\nenter radius of circle=");
    scanf("%d",&radius);
	z=c_area(radius);
	printf("\narea of circle=%0.2f",z);
	
	
	printf("\nenter the length and breath of rectangle=");
    scanf("%d %d",&length,&breath);
	y=Rect_area(length , breath);
	printf("\narea of rectangle=%0.2f",y);

	
	
	printf("\nenter side of square=");
    scanf("%d",&side);
	x=sq_area(side);
	printf("\narea of squre=%0.2f",x);
	
	return 0;
	}

    float c_area(int r)
	{
	 float carea;
	 carea=3.14*r*r;
	 return carea;
	}
	
	float Rect_area(int l,int b)
	{
	 float Rarea;
	 Rarea=l*b;
	 return Rarea;
	
	}
	
	float sq_area(int a)
	{
	 float sarea;
	 sarea=a*a;
	 return sarea;
	
	}


