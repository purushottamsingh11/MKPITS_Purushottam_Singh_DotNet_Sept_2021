#include<stdio.h>
int main()
{
int i,a[30],n;
   printf("\n what is the size of array yuo want to display=");
   scanf("%d",&n);
  
  		for(i=0;i<n;i++)
  			{
  				if(i%2==0)
				{
				  a[i]=0;
				  
			    }
				else
				{
			      a[i]=1;
				   
				}
             }
     printf("\n prepaired array is as follow");
	for(i=0;i<n;i++)
	{
	  printf("\n %d",a[i]);
	}
     
	

return 0;
}

