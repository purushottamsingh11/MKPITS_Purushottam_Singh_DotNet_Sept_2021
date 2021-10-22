#include<stdio.h>
int main()
{
int i,a[]={26,37,48,59,10,66},max=0;
  for(i=0;i<6;i++)
  {
  if(a[i]>max)
     max=a[i];
  }
  

   printf("\n gretest num is=%d",max);

return 0;
}



/*	#include<stdio.h>
	int main()
	{
	int i,a[]={26,37,48,59,10,66},max=a[0],min=a[0];


  for(i=1;i<6;i++)
  {
  if(a[i]>max)
     max=a[i];
  }
  printf("\n gretest num is=%d",max);
  
  
  
  for(i=1;i<6;i++)
  {
  if(a[i]<min)
     min=a[i];
  }
  printf("\n smallest num is=%d",min);

return 0;
}          */
 
