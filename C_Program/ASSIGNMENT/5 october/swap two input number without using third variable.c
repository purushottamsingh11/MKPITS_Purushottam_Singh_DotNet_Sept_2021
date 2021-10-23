    
	#include<stdio.h>
	int main()
	{
	int a,b;
	printf("\nenter first number=");
	scanf("%d",&a);
	printf("\nenter sceond number=");
	scanf("%d",&b);
	printf("\nbefor swaping numbers are %d and %d",a,b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\nafter swaping numbers are %d and %d",a,b);
	return 0;
	}


