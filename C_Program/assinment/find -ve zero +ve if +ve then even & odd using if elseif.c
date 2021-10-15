  	#include<stdio.h>
 
  	int main()
  	{
  	int n;	
  
  	printf("\n enter number= ");
  	scanf("%d",&n);
  	if(n>0)
  	{
  	if(n%2==0)
  	{	
    	printf("\n num is even =%d and positive ",n) ;
  	}
  	else
  	{
    	printf("\n num is odd =%d and positive ",n);
  	}
  	}
  	else if(n<0)
  		{
    		printf("\n num is negative ") ;
  		} 
  		 else 
    		 {
      		 printf("\n your number is zero");
		
    		 }
 
	 return 0;
	 }

