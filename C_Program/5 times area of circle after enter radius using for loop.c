#include<stdio.h>
int main()
{
int i,r;
float area;
for (i=1;i<=5;i++)
{
printf("\n enter the radius of circle=");
scanf("%d",&r);
area=3.14*r*r;
printf("\n area of circle=%f",area);
}
return 0;
}

