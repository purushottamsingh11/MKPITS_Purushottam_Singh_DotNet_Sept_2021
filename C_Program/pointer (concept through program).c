#include<stdio.h>
int main()
{
int t=10,*y,s=5,*r,e=77,*n;
y=&t;
r=&s;
n=&e;


printf("\n value of y=%0x",&t);
printf("\n address of t=%0x",y);
printf("\n value of t=%d",t);
printf("\n value of t=%d",*y);

return 0;
}


