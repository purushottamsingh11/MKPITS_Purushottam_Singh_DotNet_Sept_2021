
	#include<stdio.h>
    typedef struct 
	 {
	  int day,month,year;

	 }
	date;
	   
    typedef struct 
	 {
	  float price;
      char medname[20];
	  date m_date,ex_date;
	 }
	medicine;

	
	int main()
	{
     medicine m1={45.45,"mintop",22,11,2019,21,2,2021};
	 
	 printf("\nmedicine name=%s \nmedicine price=%f ",m1.medname,m1.price);
	 printf("\nmedicine manufactruing date=%d-%d-%d ",m1.m_date.day,m1.m_date.month,m1.m_date.year);
     printf("\nmedicine expairy date=%d-%d-%d ",m1.ex_date.day,m1.ex_date.month,m1.ex_date.year);
	return 0;
	 
	}

