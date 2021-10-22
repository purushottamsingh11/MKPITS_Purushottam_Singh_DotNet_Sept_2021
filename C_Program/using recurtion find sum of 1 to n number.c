	#include<stdio.h>
    int Sum_N(int);
	int main()
	{
	 int n,x;
	 printf("enter n=");
	 scanf("%d",&n);
     x=Sum_N(n); 
	 printf("%d",x);
	 return 0;
	}
    
	int Sum_N(int n)
	{
	 if(n==1)
	 return 1;
	 else 
	 return n+Sum_N(n-1);
	}

