#include<stdio.h>

int main()
{
int num=1,osum=0,esum=0;

while(num<=100)

{

                     /*(num++) here also we can use */
if(num%2==0)
{
esum=esum+num;
}
else
{
osum=osum+num;
}
num++;
}

printf("\n sum of all even number=%d",esum);
printf("\n sum of all odd number=%d",osum);
return 0;
}

