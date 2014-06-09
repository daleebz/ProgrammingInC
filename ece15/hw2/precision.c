#include <stdio.h>

int main()
{
double n;
printf("Real number between 0 and 9: ");
scanf("%lf", &n);
//pretty straight forward, instead of breaking it apart i decided to keep it as a chunk
//it starts at .1 thus showing 1 decimal place to the right of the decimal
printf("+------+------+\n|digits|number|\n+------+------+\n|  1   |%.1lf   |\n|  2   |%.2lf  |\n|  3   |%.3lf |\n|  4   |%.4lf|\n+------+------+",n,n,n,n);
return 0;
}




