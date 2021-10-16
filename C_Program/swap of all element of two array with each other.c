	#include<stdio.h>
	int main()
	{

	int A[3]={2,4,6},B[3]={4,6,8},C[3],i;
	for (i=0;i<3;i++)
	{

	C[i]=A[i];
	A[i]=B[i];
	B[i]=C[i];
	}
	for (i=0;i<3;i++)
	{
		printf("%d,",A[i]);
	}

	printf("\n");

	for (i=0;i<3;i++)
	{
	printf("%d,",B[i]);
	}
	return 0;
	}



