#include<stdio.h>
int main()
{
int i,j,a[10][10],b[10][10],c[10][10];

 printf("\n enter 6 element for 2 by 3 matrix a ");
  for(i=0;i<2;i++)
  {
      for(j=0;j<3;j++)
        {
          scanf("%d",&a[i][j]);
        }
  }
  
  
 printf("\n enter 6 element for 2 by 3 matrix b ");
   for(i=0;i<2;i++)
  {
      for(j=0;j<3;j++)
        {
          scanf("%d",&b[i][j]);
        }
  }
  
  for(i=0;i<2;i++)
  {
      for(j=0;j<3;j++)
        {
	       c[i][j]=a[i][j]+b[i][j];
		
          printf("%5d",c[i][j]);
        }
           printf("\n");
 }         printf("\n");
  return 0;
}


