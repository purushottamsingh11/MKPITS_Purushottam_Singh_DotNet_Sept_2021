        #include<stdio.h>
	int comb(int n,int r);
	int main()
	{
        int n,r,ncr;
  	printf("\n enter n for c to finding ncr=");
  	scanf("%d%d",&n,&r);
        ncr=comb(n,r);
  	printf("\n combination of %dc%d=%d",n,r,ncr);
	return 0;
	}

		  int comb(int n,int r)                          
		     {                              
			int i,factn=1,factr=1,factn_r=1,comb;
	    	        for(i=1;i<=n;i++)            
			factn=factn*i;
			
			for(i=1;i<=r;i++)            
			factr=factr*i;
			
			for(i=1;i<=(n-r);i++)            
			factn_r=factn_r*i;
			
			comb=factn/(factr*factn_r);
			return comb;
			
		    }
		
		
  /*    #include<stdio.h>                      
	int Comb_Num(int);                        /*  vvvvvvimp styl  */
	int main()
	{
	 int n,r,ncr;
 	printf("Enter the number");
 	scanf("%d",&n);
 	printf("Enter the number");
 	scanf("%d",&r);
 	ncr = Comb_Num(n)/(Comb_Num(r)*Comb_Num(n-r));      
 	printf("Value of %dC%d = %d \n",n,r,ncr);
	return 0;

	}

	int Comb_Num(int m)
	{
    	int i,f=1;
    	for(i=1;i<=m;i++)
    	{
        f=f*i;
    	}
    	return f;

	}  */



