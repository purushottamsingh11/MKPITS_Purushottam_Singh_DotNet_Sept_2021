      
	 #include<stdio.h>
	 #include<malloc.h>
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
	 
	 
	  patient getdetail();
	  void showresult(patient);
	 
	  int main()
	  {
	    patient *pa;
		int i,n;
		printf("how many patient in your hospital=");
		scanf("%D",&n);
		pa=(patient *)malloc(n* sizeof(patient));  
		for(i=1;i<=n;i++)
		{
	    pa[i]=getdetail();
		}
		for(i=1;i<=n;i++)
		{
	    showresult(pa[i]);
		}

	   return 0;
	  }
	  
	  
	  patient getdetail()
	   {
	  	patient p1;
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
	  
	   return p1;
	  }
	  
	  
	   void showresult(patient p)
	   {
	   	printf("\n[patient id num is= %d] ",p.id);
        printf("[patient age is= %d] ",p.age);
		printf("[patient appotment date in dd-mm-yyyy form is= %d-%d-%d] ",p.app_date.day,p.app_date.month,p.app_date.year);
	    printf("[patient full name= %s ",p.fname);
		fflush(stdin);
		printf(" %s] ",p.lname);
		fflush(stdin);
		printf("[patient diagnosis name= %s] ",p.diagnosis);
		fflush(stdin);
		printf("[docter name is= %s]",p.doctname);
		fflush(stdin);
	  
	   
	   }
	  

