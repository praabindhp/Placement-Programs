#include<stdio.h>
#include<math.h>
int main()
{
int L,R,i,count=0,flag,ctr=0,itr;
 scanf("%d%d",&L,&R);
 for(i=L;i<=R;i=++L,count=0,flag=0)
 {
 do
 {
 if(i&1)
 count++;
 i>>=1;
 }while(i);
 for(itr=2;itr<=sqrt(count);itr++)
 {
 if(count%itr==0)
 {
flag=1;
 break;
 }
 }
 if(flag==0&&count!=1)
 ctr++;
 }
 printf("%d",ctr);
return 0;
}
