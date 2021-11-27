#include<stdio.h>
const int x = 32;
// Converts a string to lowercase
char *toLowerCase(char *arr)
{
 for (int itr=0; arr[itr]!='\0'; itr++)
 arr[itr] = arr[itr] |x;
 return arr;
}
// Driver Code
int main()
{
 char str[100];
 scanf("%s",str);
 //Here it's recommended to use character array
 //as it's stored in read-write area.
 //If a pointer is used it's stored
 //in read-only memory as a string literal.
 printf("%s", toLowerCase(str));
 return 0;}
