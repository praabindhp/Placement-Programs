#include<stdio.h>
int main()
{
int num,one_complement,two_complement;
scanf("%d",&num);
one_complement = ~(num);
two_complement = one_complement+1;
two_complement = ~(two_complement);
printf("One's Complement : %d\nTwo's Complement : %d",one_complement,two_complement);
return 0;
}
