#include<stdio.h>
int isHappy(int num)
{
 int sum=0;
 if(num==1)
return 1;
 if(num==4)
 return 0;
 while(num)
 {
 sum=sum+(num%10)*(num%10);
 num=num/10;
 }
 return isHappy(sum);
}
int main()
{
 int num,result;
 scanf("%d",&num);
 result=isHappy(num);
 if(result==0)
 printf("Not a happy number");
 else
 printf("Happy number");
 return 0;
}
