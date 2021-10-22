	#include<stdio.h>
	int main()
	{
	int a,b,i;                                           
    printf("enter any two numbers=");                    
	scanf("%d%d",&a,&b);                                   /* this is also right */
	for(i=(a>b?a:b) ; i<=a*b ; i=i+(a>b ? a:b))           /* for(i=0;i<=a*b;i++) */     
     {	  
     if(i%a==0 && i%b==0)
	     {
	
	       break;
	     }
	 
 	 }
	    printf("lcm=%d",i);
		
	return 0;
	}    


/* 	 #include<stdio.h>
	int main()                                           
	{                                                  
	int a,b,i,lcm;                                    
    printf("enter any two numbers=");                
	scanf("%d%d",&a,&b);                                
	for(i=a*b ; i>=(a<b?a:b); i--)                        
     {	  
     if(i%a==0 && i%b==0)                           
	     {
	
	       lcm=i;
	     }
	 
 	 }
	    printf("lcm=%d",lcm);
		
	return 0;
	}     */    


 
 
    /* this is also right */
 
   /* i=a*b ; i>=1 ; i--) */

