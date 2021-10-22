	#include<stdio.h>

	int main()
	{
	
	 int x=0,y=1,z,n,m;
	 
	  printf("enter how many value you want for febonacci series=");
	  scanf("%d",&m);
	  printf("%d,%d",x,y);
    
	 for(n=1;n<=m;n++)
	 {
	     z=x+y;
	    
		 x=y;
		 y=z;
		 printf(",%d",z);
	 }
	 return 0;
	 }

