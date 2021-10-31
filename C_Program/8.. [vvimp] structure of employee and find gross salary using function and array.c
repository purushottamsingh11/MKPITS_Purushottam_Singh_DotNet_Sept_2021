
	  #include<stdio.h>
	  #include<malloc.h>
	  typedef struct 
	  {
	    int id;
	    char name[20];
	    float basicsal;
	  }employee; 
	  
	  
	  void emp_display(employee);
      employee emp_getdetail();
	  float gross_sal(employee);
	  
	  
     
	 int main()
	   {
	    employee *em;
		int i,n;
		printf("\n enter the number of empolyee=");
		scanf("%d",&n);
		em=(employee *) malloc(n* sizeof(employee));
		   
		   for(i=1;i<=n;i++)
		    {
	          em[i]=emp_getdetail();
	        }  
		
		  for(i=1;i<=n;i++)
		    {
	          emp_display(em[i]);
		    }  
	    return 0;
	   }
	  


      
	  void emp_display(employee e1)
	   {
	    float gross;
		gross=gross_sal(e1);
	    printf("\n employee detail:[id number of employee=%d] [employee salary=%1.2f] ",e1.id,e1.basicsal);
		printf("[employee name is=%s] [gross sal=%1.2f]",e1.name,gross);
	   }
  
     
	 
	 employee emp_getdetail()
	  {
	  employee e;
	  
	  printf("\n enter employee id number=");
	  scanf("%d",&e.id);
	  
	  printf("\n enter employee salary=");
	  scanf("%f",&e.basicsal);
	  
	  printf("\n enter employee name=");
	  fflush(stdin);
	  gets(e.name);
	  
	  return e;
	  }


     float gross_sal(employee emp)
	 {
	  float gr_sal;
	  gr_sal=emp.basicsal+(emp.basicsal*0.35)+(emp.basicsal*0.08);
	  return gr_sal;
	 }

