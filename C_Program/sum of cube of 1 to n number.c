	#include<stdio.h>
	#include<math.h>
	int main()
	{
	int n,p=0;
     int i;
	
 	    printf("\n plese enter n =");
		scanf("%d",&n);
     for(i=1;i<=n;i++)
		{
		   p=p+i*i*i;	 
		   
		}
		printf("\n sum of cube of 1 to %d is %d",n,p);
		 
			return 0;
		}

