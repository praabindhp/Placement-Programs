#include<stdio.h>
int addElements(int *arr,int n,int atIndex)
{
 if(atIndex!=n)
 return arr[atIndex]+addElements(arr,n,atIndex+1);
 else
 return 0;
}
int main()
{
 int n,arr[100],index;
 scanf("%d",&n);
 for(index=0;index<n;index++)
 scanf("%d",&arr[index]);
 printf("%d",addElements(arr,n,0));
 return 0;
}
