	#include<stdio.h>
	#include<math.h>
	int main()
	{
	int i,n,count_e=0,count_o=0;
	
	
 	    printf("\n to display number of odd and even number from 1 to n,plese enter n =");
		scanf("%d",&n);
     for(i=1;i<=n;i++)
		{
		   if(i%2==0)
		    {
			printf(" %5d",i);
			count_e++;
			}
		  else
		    {
		    printf("%5d",i);
			count_o++;
			}
		   
		}
		printf("\n totalnum of even num=%d \n totalnum of odd num=%d \n out of 1 to %d",count_e,count_o,n); 
			return 0;
		}

