    #include<stdio.h>
    #include<math.h>
	int main()
	{
     int i,a,r,b,c,n;
	 printf("enter a and r= ");
	 scanf("%d%d",&a,&r);
	 
	 for(i=1;i<=5;i++)
	 {
	    b=a*pow(r,(i-1));
		printf(" %d ",b);
	 }
	 printf("\n enter n for nth element= ");
	 scanf(" %d ",&n);
	       c=a*pow(r,(n-1));
	 printf(" \n %d ",c);
	return 0;
	}



























































































