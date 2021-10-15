  #include<stdio.h>
 
  int main()
  {
  int number;
  char grade;
  printf("\n enter number= ");
  scanf("%d",&number);
  if(number>=90)
  {
    printf("\n your grade is = 'A' ") ;
  }
  else if(number>=80)
  {
    printf("\n your grade is = 'B' ") ;
  } 
      else 
          {
          printf("\n your grade is = 'c'");
		  printf("\n your marks is = %d",number);
          }
 
 return 0;
 }

