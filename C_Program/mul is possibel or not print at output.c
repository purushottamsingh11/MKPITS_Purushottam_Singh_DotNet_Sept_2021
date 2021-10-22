	#include<stdio.h>
	int main()
	{
	int m,n,p,q,a[10][10],b[10][10],i,j;
 		printf("\n enter the value of row of matrix a="); 
 		scanf("%d",&m);
 		printf("\n enter the value of column of matrix a="); 
 		scanf("%d",&n);
 		printf("\n enter the value of row of matrix b="); 
 		scanf("%d",&p);
 		printf("\n enter the value of column of matrix b="); 
 		scanf("%d",&q);
 				if(n==p)
  					printf("\n mul is possible");
 				else
  					printf("\n mul is not possible");
   
	return 0;
	}

