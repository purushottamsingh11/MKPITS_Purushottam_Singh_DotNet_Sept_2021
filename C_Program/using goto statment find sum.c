#include<stdio.h>
int main()

{
  
  int sum=0,number;
 A: printf("enter a number and enter 0 for stop=");
    scanf("%d",&number);
  if(number!=0)	
  {
  sum=sum+number;
  goto A;
  }  
  else
  {
 goto B;
 }
  B:printf("\n sum=%d",sum);
 
 return 0;
 
 }	  	  	   

