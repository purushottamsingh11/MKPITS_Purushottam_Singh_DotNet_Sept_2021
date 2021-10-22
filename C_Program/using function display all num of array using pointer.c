	#include<stdio.h>

	void DISPLAY_Array(int *);      /* OR  (int *A)  */

	int main()
	{
    int N[]={4,5,3,8,1,2,6,7,9,10};
	
    int B[]={40,5,3,81,12,24,96,10,33,77};
	
    DISPLAY_Array(N);
	 printf("\n");
	DISPLAY_Array(B);
    return 0;
	}


	void DISPLAY_Array(int *A)
	{
 	int i;
    printf("array is=");
 	for(i=0;i<=9;i++)
 		{
  		  printf("%5d",*(A+i));  /* OR  A[i]  */
 
 		}
 	}

