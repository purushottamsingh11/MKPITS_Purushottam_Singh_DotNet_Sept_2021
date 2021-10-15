    #include<stdio.h>
	int main()
	{
      int num,sum=0;
      for(num=1;num<=26;num++)
	  {
	    if(num%7==0)
		 {
		  printf("\n %d",num);
		  sum=sum+num;
		 }
      }
	  
	  	  printf("\n sum=%d",sum);

	return 0;
	}

