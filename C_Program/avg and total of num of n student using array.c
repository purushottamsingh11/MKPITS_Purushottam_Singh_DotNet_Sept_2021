	#include<stdio.h>
	int main()
	{
	 int i,A[20],n,sum=0,avg;
	 
	 printf("enter number of student=");
	 scanf("%d",&n);
	 
	 for(i=0;i<n;i++)
	 {
	 printf("enter marks of each student=");
	 scanf("%d",&A[i]);
	 sum=sum+A[i];
	 }
	  avg=sum/n;
	 
	  printf("\n %d",sum );
	
	   printf("\n%d",avg);
	 
	 return 0;
	 }
     

