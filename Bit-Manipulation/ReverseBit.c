#include<stdio.h>
int main()
{
 int num,rev=0,sum=0,power=1;
scanf("%d",&num);
while(num)
{
 rev=rev*10+(num&1);
 num>>=1;
}
while(rev)
{
 sum+=(rev&1)*power;
 power<<=1;
 rev/=10;
}
printf("%d",sum);
return 0;
}
