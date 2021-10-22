	 #include<stdio.h>
  	 int main()
	 {
 	    int i,j,a[3][3];
		printf("enter 9 element for 3*3 array=");

		for(i=0;i<3;i++)
		 {
  			for(j=0;j<3;j++)
  			{
  			 scanf("%d",&a[i][j]);
  			}
 		 }
        printf("\n array size 3*3 matrix is:\n");
		
		for(i=0;i<3;i++)
		 {
  			for(j=0;j<3;j++)
  			{
  			 printf("%3d",a[i][j]);
  			}
			 printf("\n");
 		 }
   	   printf("\n 3*3 matrix after all diagonal element are zero is:\n ");
	    for(i=0;i<3;i++)
		 {
  			for(j=0;j<3;j++)
  			{
			if(i==j)
			 {
			   a[i][j]=0;
			   printf("%3d",a[i][j]);
			 }
			 else
  			   printf("%3d",a[i][j]);
	
  			}
			   printf("\n");
 		 }        

   return 0;
  }

