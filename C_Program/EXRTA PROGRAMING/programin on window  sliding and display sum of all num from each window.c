    #include<stdio.h>
 	int main()
	{
	int i,j,a[]={2,3,5,9,6,2,8},sum;
		
	for(i=0;i<4;i++)
	 {
	  sum=0 ;
	   for(j=i;j<=3+i;j++)
	    {
         printf(" %d ",a[j]);
		 sum=sum+a[j];
	    }
	   printf(" sum=%d \n",sum);
	 }	  

	return 0;
	}

	 

