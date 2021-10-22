#include<stdio.h>

int main()
{
int i=0,sum=0,num;

while(i<=5)
{
printf("enter a number= ");
scanf("%d",&num);
sum=sum+num;
i++;
}

printf("\n sum of all number=%d",sum);
return 0;

}

