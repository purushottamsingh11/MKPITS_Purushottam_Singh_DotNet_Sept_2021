	#include<stdio.h>
	int main()
	{
	int i,l,b,n;
	float area;
	
 	   printf("\n how many times you want to find area of rectangle=");
		scanf("%d",&n);
    	for (i=1;i<=n;i++)
		{
		    printf("\n enter the length and breath of rectangle=");
			scanf("%d%d",&l,&b);
			area=l*b;
			printf("\n area of rectangle =%f",area);
		  
		}
		  
			return 0;
		}

