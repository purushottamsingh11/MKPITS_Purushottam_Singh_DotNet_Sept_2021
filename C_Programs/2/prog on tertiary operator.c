#include<stdio.h>
int main()
{
int x,z;
printf("enter the value of x:");
scanf("%d",&x);
z=(x%2==0? 2*x+5:3*x-1);
printf("\n the value of z is=%d",z);
return 0;

}

