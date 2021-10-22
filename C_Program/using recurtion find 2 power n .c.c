	
 /*  if here n=4    means   2 to the power 4 =243 (means 2*2*2*2)  */
	
  /* using recurtion method */
	
	#include<stdio.h>
        int Power2(int);
	int main()
	{
	 int z,n;
	 printf("enter n=");
	 scanf("%d",&n);
         z=Power2(n);
	  
	 printf(" 2 power %d is equal to %d",n,z);
	return 0;
	}
    
	int Power2(int n)
	{
	 int t;
	 if(n==1)
	 return 2;
	 else
	 {
	 t=2*Power2(n-1);
	 return t;
 	 }
	}  
	

