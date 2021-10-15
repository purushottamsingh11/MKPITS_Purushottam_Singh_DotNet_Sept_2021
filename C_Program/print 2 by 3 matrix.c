#include<stdio.h>
int main()
{
int i,j,a[10][10],num;

 printf("\n enter 6 element for 2 by 3 matrix ");
  for(i=0;i<2;i++)
  {
      for(j=0;j<3;j++)
        {
          scanf("%d",&a[i][j]);
        }
  }
  
  for(i=0;i<2;i++)
  {
      for(j=0;j<3;j++)
        {
          printf("%d",a[i][j]);
        }
           printf("\n");
 }
  return 0;
}

