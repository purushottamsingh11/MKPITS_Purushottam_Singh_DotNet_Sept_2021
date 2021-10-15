#include <stdio.h>
int main()
{
int a,b,c;

printf("enter three number");
scanf("%d%d%d",&a,&b,&c);
if((a>b) && (a>c))
{
printf("\n a=%d is greater",a);
}
else if((b>a) && (b>c))
{
printf("\n b=%d is greater",b);
}
else
{
printf("\n c=%d is greater",c);
}

return 0;
}

