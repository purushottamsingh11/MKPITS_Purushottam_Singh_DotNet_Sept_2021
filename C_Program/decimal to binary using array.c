#include<stdio.h>
int main()
{
int i,r[40],num;
printf("enter the decimal num=");
scanf("%d",&num);
for(i=0;i<8;i++)
{
   r[i]=num%2;
   num=num/2;
}
printf("\n binary num=");

for(i=7;i>=0;i--)
{

printf("%d,",r[i]);
}
return 0;
}



