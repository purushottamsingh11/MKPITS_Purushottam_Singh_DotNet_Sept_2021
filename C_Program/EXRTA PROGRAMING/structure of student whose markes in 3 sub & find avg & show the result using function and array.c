        
      	
   #include<stdio.h>
    
	typedef struct 
	 {
	  int r_no;
	  char stu_name[15];
	  int m1,m2,m3;
	 
	 }
	student;
	   	   
    
	student getdetail();
	void displaydetail(student);
	float showresult(student);
	int showtotal(student);
	
	int main()
	{
	  student *s;
	  int i,n;
	  printf("\n enter the number of student= ");
	  scanf("%d",&n);
	  s=(student *)malloc(n* sizeof(student));
	  for(i=1;i<=n;i++)
	  {
	    s[i]=getdetail();
	  }
	  for(i=1;i<=n;i++)
	  {
  	    displaydetail(s[i]);
	  }
	return 0;
	}
	
	
 	 student getdetail()
   	   {
	 	 student s1;
		
		 printf("\n enter roll number of  student=");
	     scanf("%d",&s1.r_no);
	 
	     printf("\n enter three marks which is in math1 math2 math3 of  student===");
	     scanf("%d%d%d",&s1.m1,&s1.m2,&s1.m3);
	 
	     printf("\n enter name of  student=");
	     fflush(stdin);
         gets(s1.stu_name);
		 
		 return s1;
	
	    }

      void displaydetail(student st)
	  {
	    float average;
		int total;
	  	average=showresult(st); 
		total=showtotal(st);
		
		printf("\n***************************************************");
	    
		printf("\n roll number of student=%d \n name of  student=%s",st.r_no,st.stu_name);
	    fflush(stdin);
		printf(" \n marks in m1=%d \n marks in m2=%d \n marks in m3=%d \n total marks is=%d \n average marks is=%1.2f",st.m1,st.m2,st.m3,total,average);
	   
	 
	    if((st.m1>40) && (st.m2>40) && (st.m3>40))
	       {
	   	if(average>=90) 
	     	   printf("\n result: you have first division & pass with distinction marks ");
	   	else if(average>=60)
	    	   printf("\n result: you are pass with first division ");
	  	else if(average<60 && average>=50)
	    	   printf("\n result: you are pass with second division "); 
		else if(average<50 && average>=40)
	    	   printf("\n result: you are pass with third division ");
	       }	 
	    else
	        printf("\n result: you are fail");
	   
	    printf("\n***************************************************");
	  
	  
	  
	  
	  }

      
	  float showresult(student stu)
	  {
	    float avg;
	    avg=(stu.m1+stu.m2+stu.m3)/3;
	   return avg;
	  }

      
	  int showtotal(student stu)
	  {
	    int tot;
	    tot=(stu.m1+stu.m2+stu.m3);
	   return tot;
	  }

