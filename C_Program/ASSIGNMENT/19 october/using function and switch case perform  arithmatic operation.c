
	#include<stdio.h>
	
	float ADD(float , float);
	void SUB(float , float);
	void MUL();
	float DIV();
	
	int main()
	{
	 float a,b,add,sub,div;
	 char op;
	 
 	 printf("\npress + for addition \n      - for substraction \n      * for multiplication      \n      / for divide");
	 printf("\n*********************************************");
	 printf("\nselect any symbol from ( +,-,* or / ) =");
	 scanf("%c",&op);
	 printf("\n*********************************************");
	 
	 switch(op)
	 {
	 case '+': 
	 printf("\nenter any two number for addition=");
         scanf("%f%f",&a,&b);
	 add=ADD(a,b);
	 printf("\naddition of %1.2f and %1.2f=%1.2f",a,b,add); 
	 break;
	 
	 case '-':
         printf("\nenter any two number for substraction=");
         scanf("%f%f",&a,&b);
	 SUB(a,b);
	 break;
	
	 case '*':
	 MUL();
	 break;
	 
	
	 case '/':
	 div=DIV();
     /*  printf("\ncalculation of %1.2f is divided by %1.2f=%1.2f",a,b,div); */   /* why at output printing the value of a and b is wrong*/   /* bec in this type of function x & y not return value to a and b */
	 printf("\ndivision of two number=%1.2f",div);
         break;
	 
	 default:
	 printf("\nwrong selection"); 
	
	 return 0;
	}
	}
	
	

	float ADD(float x,float y)
	{
	  float a;
	  a=x+y;
	  return a;
	}
	
	
    
       void SUB(float x , float y)
	  {
	   float s;
	   s=x-y;
	   printf("\nsubtraction of %1.2f and %1.2f=%1.2f",x,y,s);
	  }
	
	
	
	void MUL()
	 {
	   float x,y,m;
	   printf("\nenter two number for multiplication=");
           scanf("%f%f",&x,&y);
	   m=x*y;
	   printf("\nmultiplication of %1.2f and %1.2f=%1.2f",x,y,m);
	 }
	 
	
	
	float DIV()
	 {
	   float x,y,d;
	   printf("\nenter two number  for division=");
           scanf("%f%f",&x,&y);
	   d=x/y;
	   return d;
	 }
	

