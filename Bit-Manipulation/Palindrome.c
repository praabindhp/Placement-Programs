#include<stdio.h>
#include<math.h>
int main()
{
int num,mask=1;
 int left,right;
 scanf("%d",&num);
 while(mask<=num)
 mask=mask<<1;
 mask=mask>>1;
 for(left=mask,right=1;left>right;left=left>>1,right=right<<1)
 if(((num&left)==0&&(num&right)!=0)
 ||((num&left)!=0&&(num&right)==0))
 break;
 if(left>right)
 printf("Not a palindrome");
 else
 printf("Palindrome");
return 0;
}
