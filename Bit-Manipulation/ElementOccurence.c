#include <stdio.h>
int getSingle(int arr[], int n)
{
 int ones = 0, twos = 0 ;

 int common_bit_mask;
 for( int i=0; i< n; i++ )
 {
 twos = twos | (ones & arr[i]);
 ones = ones ^ arr[i];
 common_bit_mask = ~(ones & twos);
 ones &= common_bit_mask;
 twos &= common_bit_mask;
 }
 return ones;
}
int main()
{
 int n,i;
 scanf("%d",&n);
 int arr[n];
 for(i=0;i<n;i++)
 scanf("%d",&arr[i]);
 printf("The element with single occurrence is %d",getSingle(arr, n)); 
return 0;
}
