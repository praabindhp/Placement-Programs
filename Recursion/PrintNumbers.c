#include<stdio.h>
void printNumber(int num,int n)
{
 printf("%d ",num);
 if(num!=n)
 printNumber(num+1,n);
}
int main()
{
 int n;
 scanf("%d",&n);
 printNumber(1,n);
 return 0;
}
