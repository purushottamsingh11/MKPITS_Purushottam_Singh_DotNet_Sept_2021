/*swap of first and last element of a array   M1*/


#include<stdio.h>
int main()
{
int i,a[]={26,37,48,59,10,66},m;

    a[0]=a[0]+a[5];
	a[5]=a[0]-a[5];
    a[0]=a[0]-a[5];

  for(i=0;i<6;i++)
  {
 printf(" %d ",a[i]);
  
  }
  
  
  
return 0;
}          




/*swap of first and last element of a array   M2*/



/*#include<stdio.h>
int main()
{
int i,a[]={26,37,48,59,10,66},m;

    m=a[0];
	a[0]=a[5];
    a[5]=m;

  for(i=0;i<6;i++)
  {
 printf(" %d ",a[i]);
  
  }
  
  
  
return 0;
}          /*




































