#include<stdio.h>
int main()
{
int i,a[]={26,37,48,59,10,66},min=1000;
  for(i=0;i<6;i++)
  {
  if(a[i]<min)
     min=a[i];
  }
  

   printf("\n smallest num is=%d",min);

return 0;
}

