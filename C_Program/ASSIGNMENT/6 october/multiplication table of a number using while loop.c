
 	#include<stdio.h>
    int main()
	{
	  int i,n,z;
	  printf("enter a number for which we want to print multiplication table=");
      scanf("%d",&n);
	  i=1;
      while(i<=10)
	   {
	    z=n*i;
        printf("\n %d ",z);
		
		i++;
	   }
     
    return 0;
	}


