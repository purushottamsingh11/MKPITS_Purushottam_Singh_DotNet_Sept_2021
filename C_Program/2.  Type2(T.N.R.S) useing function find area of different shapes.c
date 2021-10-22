 	#include<stdio.h>
    float c_area();
	float Rect_area();
	float sq_area();
	float tr_area();
    int main()
	{
	float x,z,y,w;

	z=c_area();
	printf("\narea of circle=%0.2f",z);
	
	
	y=Rect_area();
	printf("\narea of rectangle=%0.2f",y);

	
	
	x=sq_area();
	printf("\narea of squre=%0.2f",x);
	
	
	
	w=tr_area();
	printf("\narea of triangle=%0.2f",w);
	
	return 0;
	}

    float c_area()
	{
	 float carea;
	 int r;	  
		printf("\nenter radius of circle=");
        scanf("%d",&r);
	    carea=3.14*r*r;
	    return carea;
	}
	
	float Rect_area()
	{
	 float Rarea;
	 int l,b;
 	 printf("\nenter the length and breath of rectangle=");
     scanf("%d %d",&l,&b);
	 Rarea=l*b;
	 return Rarea;
	
	}
	
	float sq_area()
	{
	 float sarea;
	 int a;
 	 printf("\nenter side of square=");
     scanf("%d",&a);
	 sarea=a*a;
	 return sarea;
	
	}
	
	float tr_area()
	{
	 float Tarea;
	 int h,ba;
 	 printf("\nenter the higth and base of triangle=");
     scanf("%d %d",&h,&ba);
	 Tarea=0.5*h*ba;
	 return Tarea;
	
	}
	
	
	

