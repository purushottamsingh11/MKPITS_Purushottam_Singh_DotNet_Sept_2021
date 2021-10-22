#include <stdio.h>
int main()
{
int a,b,c;

printf("enter three number");
scanf("%d%d%d",&a,&b,&c);
if((a<b) && (a<c))
{
printf("\n a=%d is smallest",a);
}
else if((b<a) && (b<c))
{
printf("\n b=%d is smallest",b);
}
else
{
printf("\n c=%d is smallest",c);
}

return 0;
}

