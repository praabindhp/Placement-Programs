#include<stdio.h>
#include<limits.h>
int minElement(int *arr,int n)
{
int index,min=INT_MAX;
for(index=0;index<n;index++)
{
if(arr[index]<min)
min=arr[index];
}
return min;
}
int main()
{
int n,index,arr[100];
scanf("%d",&n);
for(index=0;index<n;index++)
scanf("%d",&arr[index]);
printf("%d",minElement(arr,n));
return 0;
}