#include<stdio.h>
int main()
{
int n,i;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
 scanf("%d",&arr[i]);
int index=0,result=0;
 for(index=0;index<n;index++)
 {
 result=result^arr[index];
 }
if(result==0)
printf("All elements occur even number of times");
else
printf("Not all elements occur even number of times");
return 0;
}
