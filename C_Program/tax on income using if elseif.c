  #include<stdio.h>
 
  int main()
  {
  int inc;
  float tax;
  printf("\n enter your income= ");
  scanf("%d",&inc);
  if(inc <= 90000)
  {
    printf("\n your tax is free ") ;
  }
  else if(inc<=100000 && inc>300000 )
  {
    tax=inc*0.1;
	printf("\n tax=%f",tax) ;
  } 
   else if(inc<=300000 && inc>500000 )
  {
    tax=inc*0.3;
	printf("\n tax=%f",tax) ;
  } 
     else 
          
  {
    tax=inc*0.4;
	printf("\n tax=%f",tax) ;
  }
 
 return 0;
 }

