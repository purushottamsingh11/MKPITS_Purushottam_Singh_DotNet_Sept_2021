	
	 #include<stdio.h>
	 
	 typedef struct 
	  {
	    int day,month,year;
	  }date;
	  
	  
	 typedef struct 
	  {
	    int id,age;
		date app_date;
		char fname[20],lname[20],doctname[30],diagnosis[25];
	  }patient;
	  
	  
	  void getdetail(patient);
	  
	  
	  
	  int main()
	  {
	    patient p1;
		int i,n;
	    printf("\nenter the number of patient in your hospital= ");
	    scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
	    printf("\nenter patient id number=");
	    scanf("%d",&p1.id);
        printf("\nenter patient age=");
	    scanf("%d",&p1.age);
		printf("\nenter patient appointment date in dd-mm-yyyy form=");
	    fflush(stdin);
	    scanf("%d-%d-%d",&p1.app_date.day,&p1.app_date.month,&p1.app_date.year);
	    printf("\nenter patient first name=");
		fflush(stdin);
		gets(p1.fname);
		printf("\nenter patient last name=");
		fflush(stdin);
		gets(p1.lname);
		printf("\nenter patient diagnosis name=");
		fflush(stdin);
		gets(p1.diagnosis);
		printf("\nenter docter name=");
		fflush(stdin);
		gets(p1.doctname);
		
		getdetail(p1); 
	     }
	   return 0;
	  }
	  
	   void getdetail(patient p)
	   {
	   
		 
	      printf("\n patient id number is=%d",p.id);
          printf("\n patient age is=%d",p.age);
		  printf("\n patient appointment date in dd-mm-yyyy form is=%d-%d-%d",p.app_date.day,p.app_date.month,p.app_date.year);
	      printf("\n patient name=%s %s",p.fname,p.lname);
	  	  fflush(stdin);
	      printf("\n patient diagnosis name=%s",p.diagnosis);
		  fflush(stdin);
		  printf("\n docter name is=%s",p.doctname);
		  fflush(stdin);
	      
	   }


