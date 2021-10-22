  #include<stdio.h>
	int main()
	{
	int i,sum=0,num;
	printf("enter 10 num\n");
	  for(i=1;i<=10;i++)
	   {
	     scanf("%d",&num);
		 if(num%3==0)
		 continue; 
	     sum=sum+num;
	   }
	printf("sum=%d",sum);
	return 0;
	}


