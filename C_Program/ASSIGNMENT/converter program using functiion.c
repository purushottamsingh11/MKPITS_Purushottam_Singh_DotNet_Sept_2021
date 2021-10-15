 	 #include<stdio.h>
 	float mile_to_km(float mile);
	float doll_to_rup(float dollar);
	float rup_to_doll(float rupees);
		
	int main()
	{

	float mile,dollar,rupees;
  	printf("\n enter any value as a mile=");
  	scanf("%f",&mile);
  	printf("\n km=%0.3f",mile_to_km(mile));
	
	printf("\n enter any value as a dollar=");
  	scanf("%f",&dollar);
  	printf("\n rupees=%2.3f",doll_to_rup(dollar));
	
	printf("\n enter any value as a rupees=");
  	scanf("%f",&rupees);
  	printf("\n dollar=%2.3f",rup_to_doll(rupees));
	
	
	return 0;
	}

	   float mile_to_km(float mile)
		{
		    float km;               
			km=1.61*mile;
			return km;
		}
		
	  float doll_to_rup(float dollar)
	  
	    {
		   float rupees;
		   rupees=75.4*dollar;  
		   return rupees;
		}
		

   	  float rup_to_doll(float rupees)
	    {
		   float dollar;
		   dollar=rupees/75.4;  
		   return dollar;
		}
		

