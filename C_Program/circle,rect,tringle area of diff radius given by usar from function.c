#include<stdio.h>
float areac(float,int);
int arear(int,int);
float areat(int,int);
int main()
{

float pi=3.14;
int rad,i,l,b,base,h,x;
printf("\n1 for area of circle");
printf("\n2 for area of rectangle");
printf("\n3 for area of triagle");
printf("\nselect x for area of diff shape=");
scanf("%d",&x);
 printf("\n*------------------*");
switch(x)
{
 case 1:
  for(i=1;i<=2;i++)
  {
  printf("\n enter radius of circle=");
  scanf("%d",&rad);
  printf("\n area=%f",areac(pi,rad));
  printf("\n******************");
  }
  break;
  
  case 2:
    for(i=1;i<=2;i++)
  {
  printf("\n enter length and breath of rectangle=");
  scanf("%d%d",&l,&b);
  printf("\n area=%d",arear(l,b));
  printf("\n******************");
  }
  break;
  
  case 3:
   for(i=1;i<=2;i++)
  {
  printf("\n enter hight and base of triangle=");
  scanf("%d%d",&h,&base);
  printf("\n area=%f",areat(h,base));
  printf("\n******************");
  } 
  break;
  default:
  printf("wrong entry");
  }
return 0;
}

float areac(float pi,int r)
{
return pi*r*r;
}

int arear(int l,int b)
{
return l*b;
}

float areat(int ba,int ht)
{
return .5*ba*ht;
}

