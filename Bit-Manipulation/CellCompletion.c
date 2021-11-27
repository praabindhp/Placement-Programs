#include<stdio.h>
int main()
{
 int arr[8],ans[8];
 int ind,itr,day,num;
 scanf("%d %d",&num,&day);
 for(itr=0;itr<num;itr++)
 scanf("%d",&arr[itr]);
 for(itr=1;itr<=day;itr++)
 {
 ans[0]=arr[1];
 ans[7]=arr[6];
 for(ind=1;ind<7;ind++)
 ans[ind]=arr[ind-1]^arr[ind+1];
 for(ind=0;ind<8;ind++)
 arr[ind]=ans[ind];
 }
 for(ind=0;ind<8;ind++)
 printf("%d ",arr[ind]);
 return 0;
}
