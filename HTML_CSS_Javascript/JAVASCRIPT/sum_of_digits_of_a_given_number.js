var num=23,d,sum=0;
while(num!=0)
{
d=num%10;
num=num/10;
sum=sum+d;
}
console.log("sum of digit of given number= "+sum);