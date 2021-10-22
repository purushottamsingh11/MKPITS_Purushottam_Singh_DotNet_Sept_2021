#include<stdio.h>
int main()
{
    char opt;
    int a,b,c;

    printf("\n enter two input ");
    scanf("%d%d",&a,&b);
    printf("\n + for add \n - for sub \n x for mul \n / for div  ");
	
    fflush(stdin);
	
	scanf("%c",&opt);
	
          switch(opt)
             {
              case '+':
			  c=a+b;
              printf("\n addition of two number is %d ",c);
           break; 
		   
		   case '-':
			  c=a-b;
              printf("\n sub of two number is %d ",c);
           break;
		   
		    case '*':
			  c=a*b;
              printf("\n mul of two number is %d ",c);
           break;
		   
		    case '/':
			  c=a/b;
              printf("\n div of two number is %d ",c);
           break;
             }
 return 0;
 
 }	  	  	   

