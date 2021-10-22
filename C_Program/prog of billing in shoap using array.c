#include<stdio.h>
int main()
{
int num,min,max,i;
int count=1;
/*printf("\n enter min num");
scanf("%d",&min);

printf("\n enter max num");
scanf("%d",&max); */

/*for(num=1;num<=100;num++)*/
printf("\n enter max num");
scanf("%d",&num);
     for(i=1;i<=num;i++)
	  {
	     if(num%i==0);
		 {
		  count++;
		  }
	  }
		    if(count==2)
			{
			 printf("\n prime");
			}
			else
			printf("\n not prime");
	  

return 0;
}

