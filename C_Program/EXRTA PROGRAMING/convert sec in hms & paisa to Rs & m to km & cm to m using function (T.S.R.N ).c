
 	#include<stdio.h>
    void pai_Rs(int);
    void Gm_Kg(int);
    void cm_m(int);
	void Sec_HMS(int);
	
    int main()
	{
	int paisa,grams,centi,second;
	 printf("\nenter paisa=");
	 scanf("%d",&paisa);
	 pai_Rs(paisa);
	 
	 printf("\nenter grams=");
	 scanf("%d",&grams);
 	 Gm_Kg(grams);
	 
	 printf("\nenter centimeter=");
	 scanf("%d",&centi);
 	 cm_m(centi);
	 
	 	 
	 printf("\nenter second=");
	 scanf("%d",&second);
	 Sec_HMS( second);
     return 0;
	 
	 }

    void pai_Rs(int p)
	{
	 int Rs;
	 Rs=p/100;
	 p=p%100;
	 printf("\n%dRs  %dpaisa ",Rs,p);
	 
	}
	
    void Gm_Kg(int gm)
	{
	 int kg;
	 kg=gm/1000;
	 gm=gm%1000;
	 printf("\n%dkg  %dgm",kg,gm);
	}
	
    void cm_m(int cm)
	{
	  int m;
	  m=cm/100;
	  cm=cm%100;
	  printf("\n%dmeter  %dcentimeter",m,cm);
	
	}


   	void Sec_HMS(int s)
	{
	 int h,m,temp;
	 h=s/3600;
     temp=s%3600;
	 m=temp/60;
	 s=temp%60;
	 
	  
 /*	 h=s/3600;	   
     m=(s-(h*3600))/60;
	 s=(s-(h*3600))%60; */
	 
	 
	 printf("\n%dhour  %dmenuit  %dsec",h,m,s);
	}

