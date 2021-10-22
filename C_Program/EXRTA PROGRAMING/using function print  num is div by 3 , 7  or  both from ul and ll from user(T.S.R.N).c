 	#include<stdio.h>
 	void div(int,int);  /*declearation of function*/

	int main()
	{
    int nl,nh;
  	printf("\n enter lower limit=");
  	scanf("%d",&nl);
	
	printf("\n enter higher limit=");
  	scanf("%d",&nh);
	
	div( nl, nh);   /* call of function */
  
    return 0;
	}
   	   void div(int n1,int n2)  /*defenation of function*/
		{
		  int i;
		  printf("div by 3        div by 7        div by 3 & 7 both");
		  for(i=n1;i<=n2;i++)
		  {
		  if(i%3==0)
		  printf("\n %2d ",i);
		  
		  if(i%7==0)
		  printf("\n \t \t  %2d",i);
		  
		  
		  if(i%7==0 && i%3==0)
		  printf("\n \t \t  \t \t \t %2d",i);
		  }
		}

