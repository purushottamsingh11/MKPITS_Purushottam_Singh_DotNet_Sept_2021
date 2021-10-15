#include<stdio.h>
int main()
{
int i,a[10],ec=0,oc=0,esum=0,osum=0;
   printf("\n enter 10 num=");
  	for(i=0;i<10;i++)
	{
	scanf("%d",&a[i]);
	
	}
		for(i=0;i<10;i++)
  			{
  				if(a[i]%2==0)
				{
				esum=esum+a[i];
				ec++;
	 
				}
				else
				{
				osum=osum+a[i];
				oc++;
		  
				}
             }
  
      printf("\n sum of even number=%d ",esum);
	  printf("\n number of even num=%d ",ec);
      printf("\n sum of odd number=%d ",osum);
      printf("\n number of even num=%d",oc);
	  printf("\n");
	  printf("\n  even num are=");
	 
	   for(i=0;i<10;i++)
  			{
  				if(a[i]%2==0)
				{
	             printf("\n %d",a[i]);
		  
				}
			
             }
			 
			 printf("\n  odd num are=");
	 
	   for(i=0;i<10;i++)
  			{
  				if(a[i]%2!=0)
				{
	             printf("\n %d",a[i]);
		  
				}
			}
			
      
  
return 0;
}

