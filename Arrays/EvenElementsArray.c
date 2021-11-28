#include<stdio.h>
#include<malloc.h>
int* collectEven(int *arr,int n)
{
int *result,rIndex=0,index;
result=(int*)malloc(n*sizeof(int));
for(index=0;index<n;index++)
{
if(arr[index]%2==0)
result[rIndex++]=arr[index];
}
result[rIndex]=-1;
return result;
}
int main()
{
int n,arr[100],index,*result;
scanf("%d",&n);
for(index=0;index<n;index++)
scanf("%d",&arr[index]);
result=collectEven(arr,n);
for(index=0;result[index]!=-1;index++)
printf("%d ",result[index]);
return 0;
}