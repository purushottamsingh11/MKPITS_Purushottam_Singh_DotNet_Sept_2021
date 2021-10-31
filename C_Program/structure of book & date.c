                

	#include<stdio.h>
    
	typedef struct 
	 {
	  int day,month,year;
         }
	date;
	   
    
	typedef struct 
	 {
	  int book_id,adi_no;
	  float price;
      char book_name[20],auth_name[20];
	  date pub_date;
	 }
	book;

	
	int main()
	{
          book b1,b2={4,2031,103.65,"math","RK_Singh",10,11,2021};
	  
	  printf("\n enter book id=");
	  scanf("%d",&b1.book_id);
          printf("\n enter book addition number=");
	  scanf("%d",&b1.adi_no);
	  printf("\n enter book price=");
	  scanf("%f",&b1.price);
	  printf("\n enter book name=");
	  fflush(stdin);
	  gets(b1.book_name);
	  printf("\n enter author name=");
	  fflush(stdin);
	  gets(b1.auth_name);
	  printf("\n enter date in dd-mm-yyyy form=");
	  scanf("%d-%d-%d",&b1.pub_date.day,&b1.pub_date.month,&b1.pub_date.year);
	  
	  printf("\n**********************************************************************");
	  
	  printf("\n book id=%d \n book addition number=%d \n book price=%f ",b1.book_id,b1.adi_no,b1.price);
	  printf("\n book name=%s \n book author name=%s",b1.book_name,b1.auth_name);
	  printf("\n publication date of book is=%d-%d-%d",b1.pub_date.day,b1.pub_date.month,b1.pub_date.year);
	  
	  printf("\n**********************************************************************");
	  
	  printf("\n book id=%d \n book addition number=%d \n book price=%f ",b2.book_id,b2.adi_no,b2.price);
	  printf("\n book name=%s \n book author name=%s",b2.book_name,b2.auth_name);
	  printf("\n publication date of book is=%d-%d-%d",b2.pub_date.day,b2.pub_date.month,b2.pub_date.year);
	  
	  printf("\n**********************************************************************");
	
	return 0;
	}





