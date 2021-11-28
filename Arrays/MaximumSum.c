#include<stdio.h>
#include<limits.h>
int main()
{
int arr[100],size,ind,sum=0,max=INT_MIN;
scanf("%d",&size);
for(ind=0;ind<size;ind++)
scanf("%d",&arr[ind]);
for(ind=0;ind<size;ind++)
{
sum=sum+arr[ind];
if(sum>max)
max=sum;
if(sum<0)
sum=0;
}
printf("%d",max);
return 0;
}