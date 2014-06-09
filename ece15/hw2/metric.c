#include <stdio.h>

int main()
{
double feet, inches, cm,totalinches;
//totalinches takes the feet and inches section and adds them together
printf("Your height in feet and inches: ");
scanf("%lf'%lf", &feet, &inches);
totalinches=feet*12+inches;
cm=totalinches*2.54;
printf("You are %.1lf cm tall.", cm);
}
