
	#include<stdio.h>
    #include<malloc.h>
	
	int main()
	{
	  int i,j,n,temp,*a;
	  
	  	printf("enter n means size of array="); 
        scanf(" %d ",&n);
	    a=(int *)malloc(n * sizeof(int));
	  	printf("enter number="); 
        for(i=0;i<n;i++)                                                 /*  why it take one extra input */
         {
          scanf(" %d ",&a[i]);
         }
    
        printf("\n  befor arrengment \n "); 
        for(i=0;i<n;i++)
         {
          printf(" %d ",a[i]);
         }
   
	  
        for(i=0;i<n-1;i++)
           {
            for(j=0;j<n-1-i;j++)
		   {
		      if(a[j]<a[j+1])
			     {
		            temp=a[j];
		            a[j]=a[j+1];
		            a[j+1]=temp;
					
				 }
           }
           }
		 printf("\n after arrengment in assending order \n ");
		   
		    for(i=0;i<n;i++)
         {
          printf(" %d ",a[i]);
         } 
		   
     return 0;
    }          

