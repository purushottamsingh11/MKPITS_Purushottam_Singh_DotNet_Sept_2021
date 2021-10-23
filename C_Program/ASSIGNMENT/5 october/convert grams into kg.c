    #include<stdio.h>
	int main()
	{
	int gm,kg;
	printf("\nenter value in grams=");
	scanf("%d",&gm);
	kg=gm/1000;
	gm=gm%1000;
	printf("\n%dkg and %dgrems",kg,gm);
	return 0;
	}


