
 	#include<stdio.h>
    void c_area(int);
    void Rect_area(int,int);
	void sq_area(int);
    int main()
	{
	int radius,length,breath,side;
	float x,z,y;
	printf("\nenter radius of circle=");
    scanf("%d",&radius);
	c_area(radius);

	
	
	printf("\nenter the length and breath of rectangle=");
    scanf("%d %d",&length,&breath);
	Rect_area(length , breath);


	
	
	printf("\nenter side of square=");
    scanf("%d",&side);
	sq_area(side);

	
	return 0;
	}

    void c_area(int r)
	{
	 float carea;
	 carea=3.14*r*r;
	 printf("\narea of circle=%0.2f",carea);
	 
	}
	
	void Rect_area(int l,int b)
	{
	 float Rarea;
	 Rarea=l*b;
	 printf("\narea of rectangle=%0.2f",Rarea);
	 
	
	}
	
   void sq_area(int a)
	{
	 float sarea;
	 sarea=a*a;
	 printf("\narea of squre=%0.2f",sarea);
	 
	
	}

