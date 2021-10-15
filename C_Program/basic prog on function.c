#include<stdio.h>
int sum(int,int);
float area(float pi,int r);
int main()
{
float pi=3.14;
/*int x=5,y=6,z;
  z=sum(x,y);
  printf("sum=%d",z);*/
  printf("\n sum=%d",sum(32,28));
  printf("\n area=%f",area(pi,2));
return 0;
}


int sum(int a,int b)
{
return a+b;
}


float area(float pi,int r)
{
return pi*r*r;
}

