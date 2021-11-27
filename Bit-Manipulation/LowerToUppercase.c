#include<stdio.h>
const int x = 32;
// Converts a string to uppercase
char *toUpperCase(char *a)
{
 for (int itr=0; a[itr]!='\0'; itr++)
 a[itr] = a[itr] & ~x;
 return a;
}
int main()
{
 char str[100];
 scanf("%s",str);
 //Here it's recommended to use character array
 //as it's stored in read-write area.
 //If a pointer is used it's stored
 //in read-only memory as a string literal.
 printf("%s", toUpperCase(str));
 return 0;

}
