#include<stdio.h>
int main()
{
int i,n;
printf("enter number 1 to n=");
scanf("%d",&n);
for (i=1;i<=n;i++)
{
printf("\nnum=%d",i);
printf("\nsq of num=%d",i*i);
printf("\ncube of num=%d",i*i*i);
}
return 0;
}

