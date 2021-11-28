#include<stdio.h>
#include<stdlib.h>
int main()
{
int *arr,n,index;
scanf("%d",&n);
arr=(int*)calloc(n,sizeof(int));
for(index=0;index<n;index++)
scanf("%d",&arr[index]);
for(index=0;index<n;index++)
printf("%d ",arr[index]);
return 0;
}
