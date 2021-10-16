
	#include<stdio.h>
	int main()
	{
	int a,b,i,hcf;
    printf("enter any two numbers=");                    
	scanf("%d%d",&a,&b);
	for(i=1 ; i<=(a<b?a:b) ; i++)       
     {	  
     if(a%i==0 && b%i==0)
	     {
	
	      hcf=i;
	     }
	 
 	 }
	    printf("hcf=%d",hcf);
		
	return 0;
	}  
	
	
	
/*	  #include<stdio.h>
	int main()
	{
	int a,b,i,hcf;
    printf("enter any two numbers=");                    
	scanf("%d%d",&a,&b);
	for(i=(a<b?a:b) ; i>=1 ; i--)       
     {	  
     if(a%i==0 && b%i==0)
	     {
	
	     break;
	     }
	 
 	 }
	    printf("hcf=%d",i);
		
	return 0;
	}         */




