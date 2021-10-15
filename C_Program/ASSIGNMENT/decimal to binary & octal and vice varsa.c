#include<stdio.h>
int main()
{
int i,r[40],num,x,n,sum=0;
printf("\n enter 1 for decimal num to  octal number");
printf("\n enter 2 for decimal num to binary number");
printf("\n enter 3 for octal number to decimal num");
printf("\n enter 4 for binary number to decimal num");
printf("\n enter x for conversion=");
scanf("%d",&x);
switch(x)
{

case 1:
printf("enter the decimal num=");
scanf("%d",&num);
for(i=0;i<8;i++)
{
   r[i]=num%8;
   num=num/8;
}
printf("\n octal num=");

for(i=7;i>=0;i--)
{

printf("%d",r[i]);
}

break;

case 3:
printf("enter the octal num=");
scanf("%d",&num);
for(i=0;i<8;i++)
{
   n=num%10;
   sum=sum+n*pow(8,i);
   num=num/10;
}
printf("\n decimal num=%d",sum);


break;


case 2:
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

printf("%d",r[i]);
}
break;

case 4:
printf("enter the binary num=");
scanf("%d",&num);
for(i=0;i<8;i++)
{
   n=num%10;
   sum=sum+n*pow(2,i);
   num=num/10;
}
printf("\n decimal num=%d",sum);


default:
printf("wrong entry");
}
return 0;
}


