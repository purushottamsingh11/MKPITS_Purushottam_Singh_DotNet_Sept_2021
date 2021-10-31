       
	   #include<stdio.h>
	   
	   typedef struct 
	    {
	     int day,month,year;
	    }date;                


	   typedef struct 
	   {
	     int book_id,adi_no;
	     float price;
         char book_name[20],auth_name[20];
	     date pub_date;
	   }book;                

       
	   
	   book getdetail();
	   void showdetail(book);
	   
	   
      
	   int main()
	   {
	    book b;
	   
	    b=getdetail();
		showdetail(b);
	    return 0;
	   }
       
	   
	   book getdetail()
         {
		    book b1;
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
		 
		    return b1;
		 }

     
	   void showdetail(book bo)
	   {
	    
	  printf("\n**********************************************************************");
	  
	  printf("\n book id=%d \n book addition number=%d \n book price=%f ",bo.book_id,bo.adi_no,bo.price);
	  printf("\n book name=%s \n book author name=%s",bo.book_name,bo.auth_name);
	  printf("\n publication date of book is=%d-%d-%d",bo.pub_date.day,bo.pub_date.month,bo.pub_date.year);
	  
	  printf("\n**********************************************************************");
	  
	   }
       


  











