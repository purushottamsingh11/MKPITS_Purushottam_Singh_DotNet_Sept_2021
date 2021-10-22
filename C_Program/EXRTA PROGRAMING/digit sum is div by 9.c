/*  #include<stdio.h>
	int main()
	{
	int num,d,sum,n;
	for(num=1000;num<=1100;num++)              
         {
	   n=num;
	   sum=0;
					
	    while (n!=0)
	      {
		 d=n%10;
		 sum=sum+d;
		 n=n/10;
	      }
	                                                           
	                 
           if(sum%9==0)
	    {
	      printf("\n num=%d",num);
	    }
	 }   
         return 0;
        } */ 
	
	
	
	
	
	
	
	
	
   #include<stdio.h>
	int main()
	{
	int num,d,sum,n,min,max;
	
	printf("\n enter min num=");
	scanf("\n %d",&min);
	
	printf("\n enter max num=");
	scanf("\n %d",&max);

	                                                           
              for(num=min;num<=max;num++)                  
				  {
			        n=num;
					sum=0;
					
	     		     while (n!=0)
		              {
		               d=n%10;
					   sum=sum+d;
					   n=n/10;
			          }
	                                                           
	                 
		              if(sum%9==0)
			            {
			             printf("\n num=%d",num);
		            	}
				   	 }   
      return 0;
    }


