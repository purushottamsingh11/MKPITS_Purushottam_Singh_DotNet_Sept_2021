	#include<stdio.h>
	int main()
	{
	int year;
	printf("enter year=");
	scanf("%d",&year);
	if((year%100==0 && year%400==0)||(year%4==0 && year%400==0))
	{
		printf("given year =%d is a leap year having (366 day) and (february has 29 day)",year);	  
	}
	else
	{
		printf("given year =%d is not a leap year having (365 day and 4 hour) and (february has 28 day)",year);
	
	}
	
	
	return 0;
	}


