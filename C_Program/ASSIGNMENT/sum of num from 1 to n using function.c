/*	  #include<stdio.h>
	int sum(int n);
	int main()
	{

	int n;
  	printf("\n enter n=");
  	scanf("%d",&n);
  	printf("\n sum=%d",sum(n));
	return 0;
	}

		int sum(int n)
		{
			int i,sum=0;
			for(i=1;i<=n;i++)
			sum=sum+i;
			return sum;
		}*/


    #include<stdio.h>
	int sum(int fnum,int snum);
	int main()
	{

	int fnum,snum;
  	printf("\n enter first number and second number=");
  	scanf("%d%d",&fnum,&snum);
  	printf("\n sum=%d",sum(fnum,snum));
	return 0;
	}

		int sum(int fnum,int snum)
		{
		int i,sum=0,s=0;
		 if(fnum <= snum)
		 {
			
			for(i=fnum;i<=snum;i++)
			s=s+i;
			return s;
	     }
		 
		 else if(fnum >= snum )
		 {
			for(i=fnum;i>=snum;i--)
			sum=sum+i;
			return sum;
				
	     }
		
		}

