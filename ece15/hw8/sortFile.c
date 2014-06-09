#include "myHeader.h"
#include <stdio.h>

//user define to set max
int main(int argc, char *argv[])
{
	int length=0,i=0,j;
	int sortArray[50];
	FILE *reference = fopen(argv[1], "r");
	if(argc>3)
	{
		length=atoi(argv[3]);
	}
	while (fscanf(reference, "%d", &sortArray[i])==1)	
	{
		i++;
	}

	sort(sortArray,argc>3?length:i);
	FILE *output =  fopen(argv[2], "w");
	for(j=0;j<(argc>3?length:i); j++)
	{	
		fprintf(output, "%d ", sortArray[j]);
	}
	fclose(output);
	fclose(reference);
	return 0;

}
