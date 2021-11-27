#include<stdio.h>
int main()
{
int num1,num2,count=0;
scanf("%d%d",&num1,&num2);
while(num1||num2)
{
 if((num1&1)!=(num2&1))
 count++;
 num1>>=1,num2>>=1;
}
printf("%d",count);
return 0;
}
