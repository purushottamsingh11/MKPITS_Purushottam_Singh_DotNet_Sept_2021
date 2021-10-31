
	#include<stdio.h>
    typedef struct
	 {
	  int r_no;
	  char stu_name[15];
	  float m1,m2,m3,total,avg;
	 }
	student;

	
	int main()
	{
	 student s1,s2;
	 
     printf("\n enter roll number of first student=");
	 scanf("%d",&s1.r_no);
	 
	 printf("\n enter three marks which is in math1 math2 math3 of first student===");
	 scanf("%f%f%f",&s1.m1,&s1.m2,&s1.m3);
	 
	 printf("\n enter name of first student=");
	 fflush(stdin);
     gets(s1.stu_name);
	 
	 
	 printf("\n roll number of first student=%d \n name of first student=%s",s1.r_no,s1.stu_name);
	 printf(" \n marks in m1=%1.2f \n marks in m2=%1.2f \n marks in m3=%1.2f",s1.m1,s1.m2,s1.m3);
	 
	    s1.total=s1.m1+s1.m2+s1.m3;
		s1.avg=s1.total/3;
		
	 printf("\n total marks of first student=%1.2f ",s1.total);	   
	 printf("\n total average marks of first student=%1.2f ",s1.avg);	 	    
		
	 
	 printf("\n **********************************************************");
	 
	 
     printf("\n enter roll number of second student=");
	 scanf("%d",&s2.r_no);
	 
	 printf("\n enter name of second student=");
	 fflush(stdin);
     gets(s2.stu_name);
	 
	 printf("\n enter three marks which is in math1 math2 math3 of second student===");
	 scanf("%f%f%f",&s2.m1,&s2.m2,&s2.m3);
	 
	 printf("\n roll number of second student=%d \n name of second student=%s",s2.r_no,s2.stu_name);
	 printf(" \n marks in m1=%1.2f \n marks in m2=%1.2f \n marks in m3=%1.2f",s2.m1,s2.m2,s2.m3);
	 
	    s2.total=s2.m1+s2.m2+s2.m3;
		s2.avg=s2.total/3;
		
	 printf("\n total marks of student student=%1.2f ",s2.total);	 
	 printf("\n total average marks of second student=%1.2f ",s2.avg);	  	     
		
	 
	return 0; 
	}

