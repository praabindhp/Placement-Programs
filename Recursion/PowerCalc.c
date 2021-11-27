#include<stdio.h>
int powerCalc(int num,int power)
{
 if(power==0)
 return 1;
 return num*powerCalc(num,power-1);
}
int main()
{
 int num,power;
 scanf("%d %d",&num,&power);
 printf("%d",powerCalc(num,power));
 return 0;
}
