#include "myHeader.h"
#include <stdio.h>
#include <math.h>
#include <string.h>
#define PI 3.141592653589793238462643383279502884197169399375105820
#define PI2 1.57079632679
int main(int argc,char *argv[])
{

	double x,y,r,theta;
	char inputstring[12];
	


	FILE *input=fopen(argv[1], "r");
	FILE *output=fopen(argv[2], "w");
	fscanf(input,"%s", inputstring);
	if(strcmp(inputstring, "Cartesian")==0)
	{
		fprintf(output, "Polar\n");

		while(fscanf(input,"%lf %lf",&x,&y)!=EOF)
		{
			car2pol(x,y,&r,&theta);
			fprintf(output, "%g %g\n", r, theta);	
		}
	}


	else if(strcmp(inputstring, "Polar")==0)
	{
		fprintf(output, "Cartesian\n");
		while(fscanf(input,"%lf %lf",&r,&theta)!=EOF)
		{
			pol2car(r,theta, &x, &y);
			fprintf(output, "%g %g\n", x, y);
		}
	}
	fclose(output);
	return 0;
}
