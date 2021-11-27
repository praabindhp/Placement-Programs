#include<stdio.h>
unsigned long long int factorial(int num)
{
 if(num==1)
 return 1;
 return num*factorial(num-1);
}
int main()
{
 int num;
 scanf("%d",&num);
 printf("%llu",factorial(num));
 return 0;
}
