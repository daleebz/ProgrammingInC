#include <stdio.h>
int main()
{
double a, b, c=0, d=0, e=0, sum;
int terms;
printf("Type a sum of two to five reals: ");
//terms counts the numbers of terms in between the plusses
terms = scanf("%lf+%lf+%lf+%lf+%lf", &a, &b, &c, &d, &e);
//sum is my shortcut for the sum to simplify it for me
sum = a+b+c+d+e;
printf("Your %d terms add up to %.2lf.", terms, sum);
}
