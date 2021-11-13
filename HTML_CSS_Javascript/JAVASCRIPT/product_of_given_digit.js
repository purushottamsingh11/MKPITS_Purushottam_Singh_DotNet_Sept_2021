var pro=1,d,num=34;
while(num!=0)
{
d=num%10;
num=num/10;
pro=pro*d;
}
console.log("pro= "+pro);