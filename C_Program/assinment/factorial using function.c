    #include<stdio.h>
	int fact(int n);
	int main()
	{

	int n;
  	printf("\n enter n for finding n!=");
  	scanf("%d",&n);
  	printf("\n factorial of %d means %d! =%d",n,n,fact(n));
	return 0;
	}

		int fact(int n)                          
		{                             
			int i,fact=1;
			if(n==0)                           
			{
			printf("\n 1");
		
			} 
		    else if(n>0)
			{                                    /* this is also right */
			for(i=1;i<=n;i++)            
			fact=fact*i;                  /*  int i,f=1;for(i=1;i<=n;i++) f=f*i; return f;  */
			return fact;
			}
			else
			 printf("\n can not find");                                          
		
		}

