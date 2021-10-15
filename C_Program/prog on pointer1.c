#include<stdio.h>
int main()
{
int i,a[10],*b;
b=&a[0];
printf("\n enter 10 element of array");
for(i=0;i<10;i++)
{
scanf("%d",(b+i));
}
for(i=0;i<10;i++)
{
printf("%4d",*(b+i));
}

return 0;
}


/*#include<stdio.h>
int main()
{
int i,a[10];

printf("\n enter 10 element of array");
for(i=0;i<10;i++)
{
scanf("%d",(a+i));
}
for(i=0;i<10;i++)
{
printf("%4d",*(a+i));
}

return 0;
}*/

