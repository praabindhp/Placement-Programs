#include<stdio.h>
int decToBin(int num)
{
 if(num==0)
 return 0;
 return decToBin(num/2)*10+(num%2);
}
int main()
{
 int num;
 scanf("%d",&num);
 printf("%d",decToBin(num));
 return 0;
}

