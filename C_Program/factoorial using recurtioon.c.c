   	#include<stdio.h>
    int Fact(int);
	int main()
	 {
	 int n,x;
	 printf("enter n=");
	 scanf("%d",&n);
	 x=Fact(n); 
	 if(x==-1)
		printf("not possible");
	 else
		printf("%d",x);
			 
	  return 0;
	  }
    
	int Fact(int n)
	 {
	     int z;
		 
		 if(n==0)
		 return 1;
	
		 else if(n<0)
		 return -1;
		 
		 else 
		 {
		 z= n*Fact(n-1);
		 return z;
		 }
	  }
	  


