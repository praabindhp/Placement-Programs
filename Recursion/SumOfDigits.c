#include<stdio.h>
int sumOfDigits(int num)
{
 if(num==0)
 return 0;
 return (num%10)+sumOfDigits(num/10);
}
int main()
{
 int num;
 scanf("%d",&num);
 printf("%d",sumOfDigits(num));
 return 0;
}
