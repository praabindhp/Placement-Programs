#include<stdio.h>
#include<limits.h>
int main()
{
int arr[100],size,ind,ind1,ind2,sum,count=0,k;
scanf("%d",&size);
for(ind=0;ind<size;ind++)
scanf("%d ",&arr[ind]);
scanf("%d",&k);
for(ind=0;ind<size-2;ind++)
{
for(ind1=ind+1;ind1<size-1;ind1++)
{
for(ind2=ind1+1;ind2<size;ind2++)
{
sum=arr[ind]+arr[ind1]+arr[ind2];
if(sum>k)
count++;
}
}
}
printf("%d",count);
return 0;
}