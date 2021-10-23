	      #include<stdio.h>
  	      int main()
	      {
 	        int i,j,sum1=0,sum2=0,a[2][3];
		printf("enter 6 element for 2*3 array=");
                for(i=0;i<2;i++)
		 {
  			for(j=0;j<3;j++)
  			{
  			 scanf("%d",&a[i][j]);
  			}
 		 }
                printf("\n array size 2*3 is:\n");
		
		for(i=0;i<2;i++)
		 {
  			for(j=0;j<3;j++)
  			{
  			 printf("%3d",a[i][j]);
  			}
			 printf("\n");
 		 }
		printf("\n first row is: ");
	        for(i=0;i<1;i++)
		 {
  			for(j=0;j<3;j++)
  			{
  			 printf(" %d ",a[i][j]);
			 sum1=sum1+a[i][j];
  			}
 		 }
		 
	         printf("\n sum of element of first row  is :");
		 printf("%d",sum1);
		
		 printf("\n ");
	  	 printf("\n ");
		 
		 printf("\n second row  is: :");
	         for(i=1;i<2;i++)
		  {
  			for(j=0;j<3;j++)
  			{
  			 printf(" %d ",a[i][j]);
			 sum2=sum2+a[i][j];
  			}
 		 }
		 
		 printf("\n sum of element of second row  is :");
		 printf("%d",sum2);  
	         printf("\n************************************** ");
          return 0;
          }

