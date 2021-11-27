#include<stdio.h>
void reversePrint(int *arr,int n,int atIndex)
{
 if(atIndex!=n-1)
 reversePrint(arr,n,atIndex+1);
 printf("%d ",arr[atIndex]);
}
int main()
{
 int n,arr[100],index;
 scanf("%d",&n);
 for(index=0;index<n;index++)
 scanf("%d",&arr[index]);
 reversePrint(arr,n,0);
 return 0;
}
