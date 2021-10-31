	
	
	#include<stdio.h>
    
	typedef struct
	 {
	  int r_no;
	  char stu_name[15];
	  int m1,m2,m3,total;
	  float avg;
	 }
	student;

  
	int show_total(student);
	float show_avg(student);
	
	
	int main()
	{
	student s1;
	int t;
	float a;
	     printf("\n enter roll number of  student=");
	     scanf("%d",&s1.r_no);
	 
	     printf("\n enter three marks which is in math1 math2 math3 of  student===");
	     scanf("%d%d%d",&s1.m1,&s1.m2,&s1.m3);
	 
	     printf("\n enter name of  student=");
	     fflush(stdin);
             gets(s1.stu_name);
		 
		 
	     printf("\n roll number of student=%d \n name of  student=%s",s1.r_no,s1.stu_name);
	     fflush(stdin);
	     printf(" \n marks in m1=%d \n marks in m2=%d \n marks in m3=%d",s1.m1,s1.m2,s1.m3);
	 
		 
		 t=show_total(s1);
		 printf("\n total marks of student = %d",t);
		 
		 
		 a=show_avg(s1);
		 fflush(stdin);
		 printf("\n average marks of student = %1.2f",a);
	 
	return 0;
	}


      int show_total(student s)
	  {
	  int total; 
	  total=s.m1+s.m2+s.m3;
	  
          return total;	    
	  }

    
      float show_avg(student st)
	 {
	 float avg;
	 avg=(st.m1+st.m2+st.m3)/3;           /*   avg=st.total/3;  (it is wrong)   */
	 
	 return avg;
	 }

