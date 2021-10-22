    #include<stdio.h>
 	int main()
	{
	int i,j,a[]={2,3,5,9,6,2,8},max;
		
	for(i=0;i<5;i++)
	 {
	   max=a[i];
	   for(j=i;j<=2+i;j++)
	    {
	      if(a[j]>max)
		  max=a[j];
   	      printf(" %d ",a[j]);
	    }
	    printf(" max=%d \n",a[i]);
	 }	  

	return 0;
	}

	 

