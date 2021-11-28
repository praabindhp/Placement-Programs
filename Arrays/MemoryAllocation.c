#include<stdio.h>
#include<malloc.h>
int main()
{
int *arr,n,index,additional;
scanf("%d",&n);
arr=(int*)malloc(n*sizeof(int));
scanf("%d",&additional);
arr=(int*)realloc(arr,additional*sizeof(int));
for(index=0;index<n+additional;index++)
scanf("%d",&arr[index]);