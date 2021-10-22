#include<stdio.h>
int main()
{
    float area;
    int a,b,number;

    printf("\n enter the number out of 1,2,3,4 \n 1 for circle \n 2 for rectangle \n 3 for square \n 4 for triangle \a  ");
    scanf("%d",&number);
   
	
	
            switch(number)
             {
              case 1:
              printf("\n enter radius of circle=");
			  scanf("%d",&a);
			  area=3.14*a*a;
			  printf("\n area=%f",area);
              break; 
		   
		  
              case 2:
              printf("\n enter length and breath of rectangle=");
			  scanf("%d%d",&a,&b);
			  area=a*b;
			  printf("\n area=%f",area);
              break; 
		   
              case 3:
              printf("\n enter side of square=");
			  scanf("%d",&a);
			  area=a*a;
			  printf("\n area=%f",area);
              break; 
		   
             }
 return 0;
 
 }	  	  	   

