
 /*  if here x=5 and y=3   means   power(5,3)   means   5 to the power 3 =125 (means 5*5*5)  */
	
  /*  using recurtion method */
  	  
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

