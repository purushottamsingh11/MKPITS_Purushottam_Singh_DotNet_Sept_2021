#include<stdio.h>
float area(float,int);
int main()
{
float pi=3.14;
int rad;
  printf("\n enter radius=");
  scanf("%d",&rad);
  printf("\n area=%f",area(pi,rad));
return 0;
}

float area(float pi,int r)
{
return pi*r*r;
}

