#include <stdio.h>
int main()
{
char a;
//decalre the char var "a"
printf("Lowercase letter between b and y:   ");
scanf("%c", &a);
printf("%c follows %c and precedes %c.",a-32,a-33,a-31);
//subtract a by 32 to get the equivlent capital letters from the hexideci table
}
