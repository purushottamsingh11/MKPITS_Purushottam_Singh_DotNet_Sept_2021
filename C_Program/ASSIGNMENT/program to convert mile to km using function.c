 	#include<stdio.h>
 	float mile_to_km(float mile);
	int main()
	{
    float mile ;
  	printf("\n enter any value as a mile=");
  	scanf("%f",&mile);
  	printf("\n km=%0.3f",mile_to_km(mile));
	return 0;
	}

	   float mile_to_km(float mile)
		{
		    float km ;                /* float mile;   why this is wrong here */
			km=1.61*mile;
			return km;
		}

