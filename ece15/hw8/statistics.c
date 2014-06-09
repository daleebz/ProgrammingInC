#include <stdio.h>
#include <string.h>
#include "myHeader.h"


int main(int argc, char *argv[])
{

	int i;
	char outputword[50];


	printf("Output file: ");
	//make sure this is correct
	scanf("%s",&outputword);

	FILE *output = fopen(outputword, "w");
	for(i=1; i<argc; i++)//<=?
	{

		lowercaseString(argv[i]);
		wordStats(output,argv[i]);
	}

	printFrequencies(output);
	fclose(output);
	return 0;
}

