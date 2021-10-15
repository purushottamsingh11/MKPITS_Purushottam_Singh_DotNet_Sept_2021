	#include<stdio.h>
	int main()
  	  {
	int num,min,max,i,c;

       printf("\n enter min num=");
       scanf("%d",&min);

       printf("\n enter max num=");
       scanf("%d",&max); 

          for(num=min;num<=max;num++)

            {
              c=0;
                  for(i=1;i<=num;i++)
	                {
	     		     if (num%i==0)
		              {
		               c++;
		              }
	                }                                             /*why not total num of prime num is right*/
	    
		              if(c==2)
			            {
			             printf("\n %d\n",num);
		            	}
				   	   
            }
			printf("\n total num of prime are=%d",c);
					
    return 0;
    }

	 	 	    	
					
					
					
					
					
					
					

