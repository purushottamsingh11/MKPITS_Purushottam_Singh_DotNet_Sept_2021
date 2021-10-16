
	#include<stdio.h>
	int main()
	{
	int i,n,ec=0,oc=0;
	printf("enter ten numbers=");
	for(i=1;i<=10;i++)
	{
  	  scanf("%d",&n);
		if(n%2==0)
		{
			ec++;
		}
 		else
		{
			oc++;
		}
		
	}
	printf("count of even number=%d\n",ec);
	printf("count of odd number=%d",oc);
	return 0;
	}

