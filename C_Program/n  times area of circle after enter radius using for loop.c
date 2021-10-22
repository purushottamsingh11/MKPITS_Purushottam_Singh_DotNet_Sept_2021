#include<stdio.h>
int main()
{
int i,r,n;
float area;
printf("\n how many times you want to find area of circle=");
scanf("%d",&n);
for (i=1;i<=n;i++)
{
printf("\n enter the radius of circle=");
scanf("%d",&r);
area=3.14*r*r;
printf("\n area of circle=%f",area);
}
return 0;
}

