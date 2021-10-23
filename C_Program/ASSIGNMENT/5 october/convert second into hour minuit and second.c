    
	#include<stdio.h>
	int main()
	{
	int s,h,m;
	printf("\nenter value in second=");
	scanf("%d",&s);
	h=s/3600;
	m=(s-(h*3600))/60;
	s=(s-(h*3600))%60;
	printf("\n%dhour:%dminuit:%dsecond",h,m,s);
	return 0;
	}


