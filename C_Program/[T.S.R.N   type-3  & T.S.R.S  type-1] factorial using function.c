   
   
    #include<stdio.h>
    void fact(int);
	int main()
	{
    int n;
  	printf("\n enter n for finding n!=");
  	scanf("%d",&n);
	fact(n);
	
	return 0;
	
	}

   	void fact(int num)                          
	  {                             
		   int i,fact=1;
		   if(num>0)
			{                                  
			  for(i=1;i<=num;i++)
			  {            
			    fact=fact*i;               
			  }
		 	 printf("\n factorial of %d means %d! =%d",num,num,fact);
			}          	    
			else if (num==0)
			{
		     printf("\n factorial of %d means %d! =%d",num,num,fact);              
			}
			else
			{
			   printf("\n factorial of negative number is not possible");
		    }
			
		}





   /*   #include<stdio.h>
	int fact(int );
	int main()
	{

	int n,x;
  	printf("\n enter n for finding n!=");
  	scanf("%d",&n);
	x=fact(n);
	if(x==-1)
	{
	  printf("\n factorial of neg num is not possible");
	}
	else
	printf("\n factorial of %d means %d! =%d",n,n,x);
	return 0;
	
	}

 	 /*	   int fact(int num)                          
		{                             
		   int i,fact=1;
		   if(num>0)
			{                                  
			for(i=1;i<=num;i++)            
			fact*=i;                 
			return fact;
			}
			else if (num==0)
			{
			return fact;
			}
			else
			{
			 fact=-1;
			 return fact;
			}
		}     */



   		int fact(int num)                          
		{                             
		   int i,fact=1;
		   if(num>0)
			{                                  
			for(i=1;i<=num;i++)            
			fact=fact*i;                 
			}
			else if (num==0)
			{
		      fact;     /* OR     fact=1;   */
			}
			else
			{
			 fact=-1;
		    }
			
			
			return fact;

		}      */  


