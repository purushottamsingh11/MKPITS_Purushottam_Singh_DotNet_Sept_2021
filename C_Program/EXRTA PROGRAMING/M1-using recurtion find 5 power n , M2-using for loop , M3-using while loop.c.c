	
 /*  if here n=4    means   5 to the power 4 =625 (means 5*5*5*5)  */
	
  /* this is METHOD-1 to find this que using recurtion method */
	
	#include<stdio.h>
    int Power5(int);
	int main()
	{
	 int z,n;
	 printf("enter n=");
	 scanf("%d",&n);

     z=Power5(n);
	  
	 printf(" 5 power %d is equal to %d",n,z);
	return 0;
	}
    
	int Power5(int n)
	{
	 int t;
	 if(n==1)
	 return 5;
	 else
	 {
	 t=5 * Power5(n-1);
	 return t;
 	 }
	}  
	
	
	 /* this is METHOD-2 to find this que using for loop */
 
    #include<stdio.h>
    int main()
	{
	 int z=1,n,i;
	 printf("enter n=");
	 scanf("%d",&n);

     for(i=0;i<n;i++)
	   {
	     z=z*5;
	   } 
	 printf("5 power %d is equal to %d",n,z);
	return 0;
	}    
	
	
	
	 /* this is METHOD-3 to find this que using while loop */
 
    #include<stdio.h>
    int main()
	{
	 int z=1,n,p;
	 printf("enter n=");
	 scanf("%d",&n);
	 p=n;
	 while(n!=0)
	   {
	     z=z*5;
		 
		 n--;
	   } 
	 printf("5 power %d is equal to %d",p,z);
	return 0;
	}  
      
     

