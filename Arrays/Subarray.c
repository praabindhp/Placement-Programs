#include<stdio.h>
#include<limits.h>
int main()
{
long long int arr[100];
long long size,ind1=0,max=INT_MIN,k,itr,ind,sum;
scanf("%lld",&size);
for(itr=0;itr<size;itr++)
scanf("%lld ",&arr[itr]);
scanf("%lld",&k);
for(ind=0;ind<size;ind++)
{
ind1=ind;
sum=0;
for(itr=1;itr<=k;itr++)
{
if(ind1!=size)
sum=sum+arr[ind1++];
}
if(sum>max)
max=sum;
}
printf("%lld",max);
return 0;
}