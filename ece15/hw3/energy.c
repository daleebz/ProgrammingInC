#include <stdio.h> 
int main()
{
double energy_consumed, energy_generated,totalOT,total,overtime,overtimecost,cost,profit;
printf("How many kWh were consumed/generated? ");
scanf(" %lf / %lf",&energy_consumed, &energy_generated);
profit=energy_generated*0.10;
//two cases...one where you went over 300 and one where you didnt
if(energy_consumed>300)
	{
	overtime=energy_consumed-300;
	overtimecost=overtime*0.30+45;
	totalOT=overtimecost-profit;
	printf("Your bill is: $%.6lf",totalOT);
	}
else
	{
	cost=(energy_consumed*0.15);
	total=cost-profit;
	printf("Your bill is: $%.6lf",total);
	}
return 0;
}
