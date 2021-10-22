	#include<stdio.h>
    int Sum_Nsq(int);
	int main()
	{
	 int n,x;
	 printf("enter n=");
	 scanf("%d",&n);
     x=Sum_Nsq(n); 
	 printf("%d",x);
	 return 0;
	}
    
	int Sum_Nsq(int n)
	{
	 if(n==1)
	 return 1;
	 else 
	 return n*n+Sum_Nsq((n-1));
	}

