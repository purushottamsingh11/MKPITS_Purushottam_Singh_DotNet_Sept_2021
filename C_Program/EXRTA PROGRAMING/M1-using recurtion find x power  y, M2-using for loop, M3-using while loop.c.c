
 /*  if here x=5 and y=3   means   power(5,3)   means   5 to the power 3 =125 (means 5*5*5)  */
	
  /* this is METHOD-1 to find this using recurtion method */
  	  
	#include<stdio.h>
    int Power(int , int);
	int main()
	{
	 int z,x,y;
	 printf("enter x=");
	 scanf("%d",&x);
	 printf("enter y=");
	 scanf("%d",&y);
     z=Power(x,y); 
	 printf("%d power %d is equal to %d",x,y,z);
	return 0;
	}
    
	int Power(int x ,int y)
	{
	 int t;
	 if(y==1)
	 return x;
	 else
	 {
	 t=x * Power(x, y-1);
	 return t;
 	 }
	} 

 /* this is METHOD-2 to find this using for loop */
 
    #include<stdio.h>
    int main()
	{
	 int z=1,x,y,i;
	 printf("enter x=");
	 scanf("%d",&x);
	 printf("enter y=");
	 scanf("%d",&y);
     for(i=0;i<y;i++)
	   {
	     z=z*x;
	   } 
	 printf("%d power %d is equal to %d",x,y,z);
	return 0;
	}  
    

 /* this is METHOD-3 to find this using while loop */
 
    #include<stdio.h>
    int main()
	{
	 int z=1,x,y,n;
	 printf("enter x=");
	 scanf("%d",&x);
	 printf("enter y=");
	 scanf("%d",&y);
	 n=y;
     while(y!=0)
	   {
	     z=z*x;
		 
		 y--;
	   } 
	 printf("%d power %d is equal to %d",x,n,z);
	return 0;
	}

