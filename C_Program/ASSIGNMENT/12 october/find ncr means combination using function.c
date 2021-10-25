        #include<stdio.h>
	int comb(int n,int r);
	int main()
	{
        int n,r;
  	printf("\n enter n for c to finding ncr and npr=");
  	scanf("%d%d",&n,&r);
  	printf("\n combination of %dc%d=%d",n,r,comb(n,r));
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
		
		



