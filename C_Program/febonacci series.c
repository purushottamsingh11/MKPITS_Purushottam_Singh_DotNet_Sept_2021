	#include<stdio.h>
    int main()
	{
	int x=0,y=1,z,n;
	 printf("%d,%d",x,y);
     for(n=1;n<=10;n++)
	 {
	     z=x+y;
	                    /*  printf(",%d",z); */
		 x=y;
		 y=z;
		 printf(",%d",z);
	 }
	 
	 
     
	 return 0;
	 }

