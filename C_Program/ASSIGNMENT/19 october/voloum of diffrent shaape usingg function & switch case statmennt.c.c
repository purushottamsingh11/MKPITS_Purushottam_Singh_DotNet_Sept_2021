
	#include<stdio.h>
	
	float Vol_cube(float);
	void Vol_sphere(float);
	void Vol_cylinder();
	float Vol_cone();
	
	int main()
	{
	 float side,volume,radius,z;
	 int n;
	 
 	 printf("\npress 1 for cube \n      2 for sphere \n      3 for cylinder      \n      4 for cone");
	 printf("\n*********************************************");
	 printf("\nselect any number from 1,2,3 or 4 =");
	 scanf("%d",&n);
	 printf("\n*********************************************");
	 
	 switch(n)
	 {
	 case 1: 
	 printf("\nenter the side of cube=");
     scanf("%f",&side);
	 volume=Vol_cube(side);
	 printf("\nvolume of cube=%1.2f",volume);
	 break;
	 
	 case 2:
	 printf("\nenter the radius of sphere=");
     scanf("%f",&radius);
	 Vol_sphere(radius);
	 break;
	
	 case 3:
	 Vol_cylinder();
	 break;
	 
	
	 case 4:
	 volume=Vol_cone();
	 printf("\nvolume of cube=%1.2f",volume);
	 break;
	 
	 default:
	 printf("\nwrong selection"); 
	
	 return 0;
	}
	}
	
	

	float Vol_cube(float a)
	{
	  float v;
	  v=a*a*a;
	  return v;
	}
	
	
    
    void Vol_sphere(float r)
	{
	  float v;
	  v=1.34*3.14*r*r*r;
	  printf("\nvolume of sphere=%1.2f",v);
	}
	
	
	
	void Vol_cylinder()
	 {
	   float h,r,v;
	   printf("\nenter the hight and radius of cylinder=");
       scanf("%f%f",&h,&r);
	   v=3.14*r*r*h;
	   printf("\nvolume of cylinder=%1.2f",v);
	 }
	 
	
	
	float Vol_cone()
	 {
	   float h,r,v;
	   printf("\nenter the hight and radius of cone=");
       scanf("%f%f",&h,&r);
	   v=0.33*3.14*r*r*h;
	   return v;
	 }
	

