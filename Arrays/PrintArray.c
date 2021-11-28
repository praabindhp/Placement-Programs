#include<stdio.h>
void printArray(int *,int);
void printArray(int *arr,int n)
{
int index;
for(index=0;index<n;index++)
printf("%d ",*(arr+index));
}
int main()
{
int arr[100],n,index;
scanf("%d",&n);
for(index=0;index<n;index++)
scanf("%d",&arr[index]);
printArray(arr,n);
return 0;
}