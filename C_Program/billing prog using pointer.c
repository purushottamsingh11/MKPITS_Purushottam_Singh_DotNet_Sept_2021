#include<stdio.h>
#include<malloc.h>
int main()
{
int *qty,i,n;
float *amt,*price,bill=0.0;
printf("\n how many item you want to purches=");
scanf("%d",&n);
qty=(int *)malloc(n * sizeof(int));
price=(float *)malloc(n * sizeof(float));
amt=(float *)malloc(n * sizeof(float));
for(i=0;i<n;i++)
{
printf("\n enter quantinty=");
scanf("%d",(qty+i));
printf("\n enter price=");
scanf("%f",(price+i));
  amt[i]=price[i]*qty[i];     /*   *(amt+i)=*(price+i)*(*(qty+i))   */
   bill=bill+amt[i];          /*   bill=bill + *(amt+i))            */
}
printf("\n item   quantity   price      amount ");
for(i=0;i<n;i++)
{
  printf("\n %4d    %4d     %6.2f     %6.2f",(i+1),*(qty+i),*(price+i),*(amt+i));
}
  printf("\n bill=%f",bill);
return 1;
}

