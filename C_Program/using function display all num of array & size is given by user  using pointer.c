	#include<stdio.h>
	#include<malloc.h>
	void DISPLAY_Array(int *,int);      

	int main()
	{
    int *N,i,n;
	printf("enter n means size of array=");
	scanf("%d",&n);

	N=(int *)malloc(n * sizeof(int));
	printf("enter %d number of array=",n);
	for(i=0;i<n;i++)
	{
	 scanf("%d",(N+i));         /* OR   &N[i]   */
	}
	
    DISPLAY_Array(N,n);

    return 0;
	}


	void DISPLAY_Array(int *A,int n)
	{
 	int i;
    printf("array is=");
 	for(i=0;i<n;i++)
 		{
  		  printf("%5d",*(A+i));     /* OR    A[i]   */
 
 		}
 	}

