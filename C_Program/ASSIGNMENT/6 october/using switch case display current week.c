
 	#include<stdio.h>
    int main()
	{
	  char op;
	  printf("\n enter s or S for sunday , m or M for monday , t or T for tuesday");
	  printf("\n enter w or W for wednusday , b or B for thrusday  , f or F for friday  , N or n for saturday");
	  
	  printf("\n**********************************************************************");
	  	
	  printf("\n enter your option for selection of week=");	
      scanf("%c",&op);
	  
	  switch(op)
	  {
	   case 'S':
	   case 's':
	   printf("this is sunday");
	   break;
	   
	   case 'M':
	   case 'm':
	   printf("this is monday");
	   break;
	                                      /*  we cant give name more then one character in single coat like 'th' this is --    */
	   case 'T':                          /*   --wrong  because character name in single coat has only  one character like 't' */                                                         
	   case 't':                        
	   printf("this is tuesday");      
	   break;
	   
	   case 'W':
	   case 'w':
	   printf("this is wednesday");
	   break;
	   
	   case 'B':
	   case 'b':
	   printf("this is thrusday");
	   break;
	   
	   case 'F':
	   case 'f':
	   printf("this is friday");
	   break;
	   
	   case 'n':
	   case 'N':
	   printf("this is saturday");
	   break;
	   
	   default:
	   printf("this is wrong selection");
	  }
     
    return 0;
	}


