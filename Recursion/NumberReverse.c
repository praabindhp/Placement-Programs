#include<stdio.h>
int reverse(int num,int pv)
{
 if(num==0)
 return 0;
 return (num%10)*pv+reverse(num/10,pv/10);
}
int main()
{
 int num,pv=1;
 scanf("%d",&num);
 while(num/pv)
 pv=pv*10;
 pv=pv/10;
 printf("%d",reverse(num,pv));
 return 0;
}
