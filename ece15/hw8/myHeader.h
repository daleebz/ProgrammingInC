//myHeader.h 
#include <stdio.h>
#define PI 3.141592653589793238462643383279502884197169399375105820

// Declarations for sortFile.c
 void sort(int array[], int length);

 // Declarations for statistics.c
 void lowercaseString(char string[]);
 void wordStats(FILE *fp, char string[]);
 void printFrequencies(FILE *fp);

 // Declarations for car-pol.c
 void car2pol(double x, double y, double *pr, double *ptheta);
 void pol2car(double r, double theta, double *px, double *py);

