    
         #include<stdio.h>
         
         typedef struct
	   {
	    int no_page;
	    char book_name[10];
	    char auth_name[15];
	    float book_price;
	   }
         book;

	
	int main()
	{
	
         book b1;
	 printf("\nenter book name=");
	 gets(b1.book_name);
	 
         printf("\nenter author name=");
	 gets(b1.auth_name);
	 
	 printf("\nenter book price=");
	 scanf("%f",&b1.book_price);
	 
	 printf("\nenter number of book's page=");
	 scanf("%d",&b1.no_page);
	 
	 
	 printf(" \n book name=%s \n author name=%s \n book price=%1.2f RS.  \n book page=%d ",b1.book_name,b1.auth_name,b1.book_price,b1.no_page);
	
	return 0; 
	}

