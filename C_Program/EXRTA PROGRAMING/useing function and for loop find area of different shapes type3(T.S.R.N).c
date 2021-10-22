
 	#include<stdio.h>
    void c_area(int);
    void Rect_area(int,int);

    int main()
	{
	int radius,length,breath,n,i;
	
	
	printf("\nhow many times you want to find area of circle=");
    scanf("%d",&n);
	for(i=1;i<=n;i++)
	   {
	    printf("\nenter radius of circle=");
        scanf("%d",&radius);
	    c_area(radius);
	   }
	printf("\nhow many times you want to find area of rectangle=");
    scanf("%d",&n);
	for(i=1;i<=n;i++)
	  {      
	   printf("\nenter the length and breath of rectangle=");
       scanf("%d %d",&length,&breath);
	   Rect_area(length , breath);
      }
    return 0;
	}

    void c_area(int r)
	{
	 float carea;
	 carea=3.14*r*r;
	 printf("\narea of circle=%0.2f",carea);
	 
	}
	
	void Rect_area(int l,int b)
	{
	 float Rarea;
	 Rarea=l*b;
	 printf("\narea of rectangle=%0.2f",Rarea);
	 
	
	}
	

