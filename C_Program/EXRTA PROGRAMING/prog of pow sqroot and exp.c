	#include<stdio.h>
	#include<math.h>
	
	int main()
	{
	 float w,z;
	 int n,x,v;
	 printf("\n plese enter x =");
     scanf("%d",&x);
	 for(n=1;n<=5;n++)
	 {
        v=pow(x,n);
		 w=sqrt(x);
		  z=exp(x);
		printf("\n v=%d ",v);
		printf("\n w=%f ",w);
	    printf("\n z=%f ",z);
		}
	 
	 
     
	 return 0;
	 }

