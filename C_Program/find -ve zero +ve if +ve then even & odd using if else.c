  #include<stdio.h>
  #include<conio.h>
  int main()
  {
  int n;
  printf("\n enter value=");
  scanf("%d",&n);
  if(n==0)
   {
     printf("\n number is zero ");
   }
     else
        {
          if(n<0)
           {
             printf("\n number is negative ");
           }
	    else
              {                                    /*after entring invaid thing like character why output is (number is +ve & even)*/
		if(n>0) 
                  {                                                                                                      
                   if(n%2==0)
                      {
                       printf("\n number is positive and even ");  
                      }
                  	  else
			       {
				 printf("\n number is positive and odd ");
			       }
                }
				else
				{
				 printf("\n invalid entry ");
				}
			      }
		}	 	 
  return 0;
}

