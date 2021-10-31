	
	
	#include<stdio.h>
    
	typedef struct
	 {
	  int r_no;
	  char stu_name[15];
	  int m1,m2,m3;
      /*  int total;  float avg; (both is optional no need to initilize here) */
	 }
	student;

  
	int show_total(student);
	void show_result(student);
	
	
	int main()
	{
	student s1;
	int t;
	
	     printf("\n enter roll number of  student=");
	     scanf("%d",&s1.r_no);
	 
	     printf("\n enter three marks which is in math1 math2 math3 of  student===");
	     scanf("%d%d%d",&s1.m1,&s1.m2,&s1.m3);
	 
	     printf("\n enter name of  student=");
	     fflush(stdin);
             gets(s1.stu_name);
		 
		 printf("\n***************************************************");
	         printf("\n roll number of student=%d \n name of  student=%s",s1.r_no,s1.stu_name);
	         fflush(stdin);
		 printf(" \n marks in m1=%d \n marks in m2=%d \n marks in m3=%d",s1.m1,s1.m2,s1.m3);
	 
		 
		 t=show_total(s1);
		 printf("\n total marks of student = %d",t);
		 
		 show_result(s1);
		 
		 
		 printf("\n***************************************************");
		 
	return 0;
	}


      int show_total(student s)
	  {
	  int total; 
	  total=s.m1+s.m2+s.m3;
	  return total;	    
	  }

  /*  void show_result(student st)
	{
	 float avg;
	 
	 avg=(st.m1+st.m2+st.m3)/3;
	 printf("\n average=%f",avg);
	 
	   if((avg>=90) && (st.m1>40) && (st.m2>40) && (st.m3>40))
	     printf("\n first division & pass with distinction marks ");
	   else if((avg>=60)&&(st.m1>40) && (st.m2>40) && (st.m3>40))
	     printf("\n pass with first division ");
	   else if((avg<60 && avg>=50)&&(st.m1>40) && (st.m2>40) && (st.m3>40))
	     printf("\n pass with second division "); 
	   else if((avg<50 && avg>=40)&&(st.m1>40) && (st.m2>40) && (st.m3>40))
	     printf("\n pass with third division ");
	   else
	     printf("\n you are fail");

	 }  */
	
	
     void show_result(student st)
	{
	    float avg;
	 
	    avg=(st.m1+st.m2+st.m3)/3;
	    printf("\n average=%f",avg);
	 
	    if((st.m1>40) && (st.m2>40) && (st.m3>40))
	       {
	   	if(avg>=90) 
	     	   printf("\n first division & pass with distinction marks ");
	   	else if(avg>=60)
	    	   printf("\n pass with first division ");
	  	else if(avg<60 && avg>=50)
	    	   printf("\n pass with second division "); 
		else if(avg<50 && avg>=40)
	    	   printf("\n pass with third division ");
	       }	 
	    else
	        printf("\n you are fail");

	}

