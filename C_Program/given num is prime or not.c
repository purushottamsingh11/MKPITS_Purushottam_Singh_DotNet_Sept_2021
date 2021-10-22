	#include<stdio.h>
	int main()
	{
	int num,i,c=0;
	
       printf("\n enter num=");
       scanf("%d",&num); 
	   
             
                  for(i=1;i<=num;i++)
	                {
	     		     if (num%i==0)
		              {
		               c++;
		              }
	                }                                           
	    
		              if(c==2)
			            {
			             printf("\n num is prime");
		            	}
				   	   else
					   {
					   printf("\n num is not a prime");
					   }
            
					
    return 0;
    }

