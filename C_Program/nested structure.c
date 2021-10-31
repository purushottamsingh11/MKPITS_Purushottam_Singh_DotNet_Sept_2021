
	#include<stdio.h>
    typedef struct 
	 {
	  int day,month,year;

	 }
	date;
	   
    typedef struct 
	 {
	  int empid;
      char empname[20];
	  date doj;
	 }
	emp;

	
	int main()
	{
     emp e1={3,"purushottam singh",26,5,2022};
	 
	 printf("\n detail of employess are:");
	 printf("id of employe is=%d",e1.empid);
	 printf(" employe name is=");
	 puts(e1.empname);
	 printf("date of joining is %d-%d-%d",e1.doj.day,e1.doj.month,e1.doj.year);
	 
	return 0; 
	}

