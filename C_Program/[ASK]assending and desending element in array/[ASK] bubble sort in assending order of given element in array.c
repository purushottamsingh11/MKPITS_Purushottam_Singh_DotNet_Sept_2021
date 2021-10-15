	#include<stdio.h>
	int main()
	{
	  int i,j,temp,a[5]={20,3,2,12,8};
          printf("\n  befor arrengment \n "); 
            for(i=0;i<5;i++)
              {
               printf(" %d ",a[i]);
              }
        for(i=0;i<4;i++)                                    /*  why it take one extra input */
           {
            for(j=0;j<4-i;j++)
		   {
		      if(a[j]>a[j+1])
			     {
		            temp=a[j];
		            a[j]=a[j+1];
		            a[j+1]=temp;
					
			     }
                   }
            }
		 printf("\n after arrengment in assending order \n ");
		   
		    for(i=0;i<5;i++)
                       {
                          printf(" %d ",a[i]);
                       } 
		   
           return 0;
          }          

