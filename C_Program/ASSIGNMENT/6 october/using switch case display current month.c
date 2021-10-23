
 	#include<stdio.h>
    int main()
	{
	  int i,n,z;
	  printf("\n enter 1 for january , 2 for february , 3 for march");
	  printf("\n enter 4 for april , 5 for may  , 6 for june");
	  printf("\n enter 7 for july , 8 for august   ,  9 for september");
	  printf("\n enter 10 for october  ,   11 for november   , 12 for december");
	  
	  printf("\n**********************************************************************");
	  	
	  printf("\n enter a number for selection of month=");	
      scanf("%d",&n);
	  
	  switch(n)
	  {
	   case 1:
	   printf("this is january month");
	   break;
	   case 2:
	   printf("this is february month");
	   break;
	   case 3:
	   printf("this is march month");
	   break;
	   case 4:
	   printf("this is april month");
	   break;
	   case 5:
	   printf("this is may month");
	   break;
	   case 6:
	   printf("this is jun month");
	   break;
	   case 7:
	   printf("this is july month");
	   break;
	   case 8:
	   printf("this is august month");
	   break;
	   case 9:
	   printf("this is september month");
	   break;
	   case 10:
	   printf("this is octomber month");
	   break;
	   case 11:
	   printf("this is november month");
	   break;
	   case 12:
	   printf("this is december month");
	   break;
	   
	   default:
	   printf("this is wrong selection");
	  }
     
    return 0;
	}


