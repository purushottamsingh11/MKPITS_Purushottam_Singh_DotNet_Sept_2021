
	#include<stdio.h>
	int main()
	{
	int i,n,a,l,b;
    float c_area,s_area,R_area,pi=3.14,r;
 	printf("\nhow many times you want to find area of circle,rectangle and square= ");
 	scanf("%d",&n);
 
  		for(i=0;i<n;i++)
  		{
     	   printf("\nenter the radius of circle=  ");
		   scanf("%f",&r);
		   c_area=3.14*r*r;
		   printf("c_area=%f",c_area);
		   
     	   printf("\n******************************************* ");
		   
		     printf("\nenter the side of square=  ");
		     scanf("%d",&a);
		     s_area=a*a;
		     printf("s_area=%f",s_area);
			 
     	   printf("\n******************************************* ");
		   
		       printf("\nenter the length and breath=  ");
		       scanf("%d%d",&l,&b);
		       R_area=l*b;
		       printf("R_area=%f",R_area);
			   
			   
     	   printf("\n******************************************* ");
 	        
 	    }         
     return 0;
     }

