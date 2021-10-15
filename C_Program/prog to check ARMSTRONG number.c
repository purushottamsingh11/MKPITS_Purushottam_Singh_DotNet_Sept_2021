   
                                  /* ARMSTRONG NUMBER */
      
	   /* if (addition of cube of individual digit = given number)called ARMSTRONG NUMBER */
   
                /*  example ==== 0,1,153,370,407,371,1634,8208,9474,54748,.........*/
   
   
        #include<stdio.h>
	int main()
	{
	int num,d,n,sum=0;
	
	printf("\n enter num=");
	scanf("\n %d",&num);
        n=num;
        while (n!=0)
        {
	  d=n%10;                
	  sum=sum+d*d*d;       
	  n=n/10;
	}
	                                                           
	                 
           if(sum==num)
           {
	    printf("\n num=%d is armstrong number",num);
           }
	    else
	    printf("\n num=%d is not armstrong number",num);
					    
        return 0;
       }







 /* #include<stdio.h>
	int main()
	{
	int num,d,n,min,max,sum;
	
	printf("\n enter min num=");
	scanf("\n %d",&min);
	
	printf("\n enter max num=");
	scanf("\n %d",&max);
	      for(num=min;num<=max;num++)
		  {
                    sum=0;
					n=num;
	     		    while (n!=0)
		              {
		               d=n%10;                
					   sum=sum+d*d*d;       
					   n=n/10;
			          }
	                                                           
	                 
		              if(sum==num)
			            {
			             printf("\n num=%d is armstrong number",num);
		            	}
				   	  
			}	 
					    
      return 0;
    } */

