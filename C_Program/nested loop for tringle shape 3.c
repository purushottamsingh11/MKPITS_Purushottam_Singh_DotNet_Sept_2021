	#include<stdio.h>
	int main()
	{
	 int i,num,count=0;
	 printf("enter number=");
	 scanf("%d",&num);
	 
	 for(i=1;i<=num;i++)
	 {
	 if(num%i==0)
	 
	 {
	 count++;
	 }
	 }
	 if(count > 2)
	 {
	 printf("\n num is not prime");
	 }
	 else
	 {
       printf("\n num is  prime");	 
	 }
	 
	 
	 return 0;
	 }
     

