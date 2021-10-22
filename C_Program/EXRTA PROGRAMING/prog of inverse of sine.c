	#include<stdio.h>
	#include<math.h>
	
	int main()
	{
	
	float pi=3.14159265,v,n,x;
	 printf("\n plese enter n =");
     scanf("%f",&n);
	 if(n>=-1 && n<=1)
	 {
     v=asin(n);
	 x=v*180/pi;
	 printf("\n value of sine of %f=%f",n,x);
	 }
	 else
	 {
	 
	 printf("\n error");
	 }
     
	 return 0;
	 }

