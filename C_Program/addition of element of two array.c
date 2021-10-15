#include<stdio.h>
int main()
{

int A[3]={2,4,6},B[3]={4,6,8},C[3],i;
for (i=0;i<3;i++)
{

C[i]=A[i]+B[i];

}

for (i=0;i<3;i++)
{

printf("%d,",C[i]);

}



return 0;
}







