#include <stdio.h>

double calcRect(double t, double dt);
double calcTrap(double t, double dt);
double f(double t);
double fIntegral(double a, double b);

int main()
{
	double startRange, endRange, numPoly;
	double i,width,height,totalRect,totalTrap,h1,h2,hsum,integral;
	printf("Enter the integral range (a,b): ");
	scanf("%lf,%lf",&startRange,&endRange);
	printf("Enter the number of polygons to use: ");
	scanf("%lf", &numPoly);
	//dt=(b-a)/n
	width=(endRange-startRange)/numPoly;

	//total area under curve with rectangle
	for(i=0; i<numPoly;i++)
	{
		height=f(startRange+width*((2*i+1)/2 ));
		totalRect+=calcRect(width, height);
	}
	//total area for trap
	for(i=0; i<numPoly;i++)
	{
		h1=f(startRange+(i*width));
		h2=f(startRange+((i+1))*width);
		hsum=h1+h2;
		totalTrap+=calcTrap(hsum, width);
	}

	//print
	integral=fIntegral(startRange, endRange);
	printf("Rectangle Estimate of %lf is off by %lf\n", totalRect, totalRect-integral);
	printf("Trapezoidal Estimate of %lf is off by %lf\n", totalTrap, totalTrap-integral);
	return 0;
}


double calcRect(double t, double dt)
{
	double r_area;
	r_area=t*dt;
	return r_area;
}

double calcTrap(double t, double dt)
{
	double t_area;
	t_area=t*dt/2;
	return t_area;
}

double f(double t)
{
	double heightft;
	heightft=(t*t*t)-(2*(t*t))-(10*t)+10;
	return heightft;
}

double fIntegral(double a, double b)
{
	double fInteg;
	fInteg=(((b*b*b*b)/(double)4)-((2*(b*b*b))/3)-((10*(b*b))/2)+10*b)-(((a*a*a*a)/4)-((2*(a*a*a))/3)-((10*(a*a))/2)+10*a);
	return fInteg;
}
