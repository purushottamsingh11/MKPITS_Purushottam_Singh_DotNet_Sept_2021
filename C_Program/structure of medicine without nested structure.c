                
				/*  METHOD-1  */

	#include<stdio.h>
        typedef struct 
	 {
	  int day,month,year;

	 }
       m_date;
	     
       typedef struct 
	 {
	  int day,month,year;

	 }
      ex_date;
	   
      typedef struct 
	 {
	  float price;
          char medname[20];
	 
	 }
	medicine;

	
	int main()
	{
         medicine m1;
	 ex_date ex1;
	 m_date md1;
	 printf("\nenter medicine name=");
         gets(m1.medname);
	 printf("\nenter medicine price=");
	 scanf("%f",&m1.price);
	 printf("\nenter date of manufacturing date in dd-mm-yyyy formate=");
	 scanf("%d-%d-%d",&md1.day,&md1.month,&md1.year);
	 printf("\nenter date of expairy date in dd-mm-yyyy formate=");
	 scanf("%d-%d-%d",&ex1.day,&ex1.month,&ex1.year);
	 printf("\nmedicine name=%s \nmedicine price=%f ",m1.medname,m1.price);
	 printf("\nmedicine manufactruing date=%d-%d-%d ",md1.day,md1.month,md1.year);
         printf("\nmedicine expairy date=%d-%d-%d ",ex1.day,ex1.month,ex1.year);
	return 0;
	 
	}



     /* METHOD-2 */

/*	  #include<stdio.h>

	   
      typedef struct 
	 {
	  float price;
          char medname[20];
	  int day,month,year;
	 }
	medicine;

	
	int main()
	 {
         medicine m1;

	 printf("\nenter medicine name=");
         gets(m1.medname);
	 printf("\nenter medicine price=");
	 scanf("%f",&m1.price);
	 printf("\nenter date of manufacturing date in dd-mm-yyyy formate=");
	 scanf("%d-%d-%d",&m1.day,&m1.month,&m1.year);
	 printf("\nenter date of expairy date in dd-mm-yyyy formate=");
	 scanf("%d-%d-%d",&m1.day,&m1.month,&m1.year);
	 printf("\nmedicine name=%s \nmedicine price=%f ",m1.medname,m1.price);
	 printf("\nmedicine manufactruing date=%d-%d-%d ",m1.day,m1.month,m1.year);
         printf("\nmedicine expairy date=%d-%d-%d ",m1.day,m1.month,m1.year);
	 return 0;
	 
	 }  */

