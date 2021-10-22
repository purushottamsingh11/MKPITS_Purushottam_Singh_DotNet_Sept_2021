 	#include<stdio.h>
 	void mile_to_km();
	void doll_to_rup();
	void rup_to_doll();
		
	int main()
	{

       mile_to_km();
	   doll_to_rup();
	   rup_to_doll();
	
	
	return 0;
	}

	  void mile_to_km()
		{
		     float km,mile;
		     
           	 printf("\n enter any value as a mile=");
           	 scanf("%f",&mile);
             km=1.61*mile;
			 printf("\n km=%0.3f",km); 
		   
		}
		
	  void doll_to_rup()
	  
	    {
		      float rupees,dollar;
		      printf("\n enter any value as a dollar=");
  	          scanf("%f",&dollar);
			  rupees=75.4*dollar;
  	          printf("\n rupees=%2.3f",rupees);
	
		}
		

   	  void rup_to_doll()
	    {
		    float dollar,rupees;
		    printf("\n enter any value as a rupees=");
  	        scanf("%f",&rupees);
			dollar=rupees/75.4;
  	        printf("\n dollar=%2.3f",dollar);
		}
		


