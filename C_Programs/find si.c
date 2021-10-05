#include <stdio.h>
int main()
{
float n,r,p,si;


printf("enter the value of time:");
scanf("%f" , &n);

printf("enter the value of roi:");
scanf("%f" , &r);

printf("enter the value of principle amount:");
scanf("%f" , &p);

si=(p*n*r)/100;

printf("simple intrest=%f" , si);

return 0;

}



