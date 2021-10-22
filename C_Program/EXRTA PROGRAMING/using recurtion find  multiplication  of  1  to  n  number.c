    
	/* calculation of  1 to n multiplication       OR        factorial of n*/
	
	
	#include<stdio.h>
    int One_Nmul(int);
	int main()
	{
	 int n,x;
	 printf("enter n=");
	 scanf("%d",&n);
     x=One_Nmul(n); 
	 printf("%d",x);
	 return 0;
	}
    
	int One_Nmul(int n)
	{
	 if(n==1)
	 return 1;
	 else 
	 return n*One_Nmul(n-1);
	}

