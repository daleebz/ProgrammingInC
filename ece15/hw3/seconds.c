#include <stdio.h>

int main() 
{
unsigned long long int years, days, hours, minutes, seconds;
unsigned long long int input,a,b,c;
printf("How many seconds? ");
scanf("%llu", &input);
//31,536,000 seconds in a year
years= input/31536000;
a= input%31536000;
days=a/86400;
b=a%86400;
hours=b/3600;
c=b%3600;
minutes=c/60;
seconds=c%60;

printf("That is %llu year(s), %llu day(s), %llu hour(s), %llu min(s), %llu sec(s)", years,days, hours, minutes, seconds);

return 0;
}

