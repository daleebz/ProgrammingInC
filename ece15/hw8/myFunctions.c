#include<string.h>
#include<math.h>
#include<stdio.h>
#define PI 3.141592653589793238462643383279502884197169399375105820
#define PI2 1.57079632679
// Functions for sortFile.c
void sort(int array[], int length) 
{
	int i,temp,j;
//run it through this many itterations
	for(j=0; j<length-1; j++)
	{
//run it through the string
		for(i=0; i<length-1; i++)
		{
			if(array[i]>array[i+1])
			{
				temp = array[i];
				array[i]= array[i+1];
				array[i+1]=temp;
			}
		}
	}
} 

// Functions for statistics.c
int letterFrequencies[26]; 
// Global array for wordStats, printFrequencies


//make lowercase
void lowercaseString(char string[])
{
	int i;
	for( i=0; string[i]!='\0'; i++)
		if((string[i] <= 90) & (string[i] >= 65))
			string[i] = string[i] + 32;
}



void wordStats(FILE *fp, char string[]) 
{
	int i,length;
	//tracks current length
	static int cumulativeLength;
	//tracks total length

	//print the word in lower case
	for(i=0; string[i]!='\0'; i++)
	{
		fprintf(fp,"%c", string[i]);
	}
	//find length
	length=strlen(string);
	//find total length	
	cumulativeLength += length;
	fprintf(fp,": length=%d total=%d\n",length, cumulativeLength);

	//letter counting
	for(i=0; string[i]!='\0'; i++)
	{
		switch(string[i])
		{
			case 'a':
				letterFrequencies[0]++;
				break;
			case 'b':
				letterFrequencies[1]++;
				break;
			case 'c':
				letterFrequencies[2]++;
				break;
			case 'd':
				letterFrequencies[3]++;
				break;
			case 'e':
				letterFrequencies[4]++;
				break;
			case 'f':
				letterFrequencies[5]++;
				break;
			case 'g':
				letterFrequencies[6]++;
				break;
			case 'h':
				letterFrequencies[7]++;
				break;
			case 'i':
				letterFrequencies[8]++;
				break;
			case 'j':
				letterFrequencies[9]++;
				break;
			case 'k':
				letterFrequencies[10]++;
				break;
			case 'l':
				letterFrequencies[11]++;
				break;
			case 'm':
				letterFrequencies[12]++;
				break;
			case 'n':
				letterFrequencies[13]++;
				break;
			case 'o':
				letterFrequencies[14]++;
				break;
			case 'p':
				letterFrequencies[15]++;
				break;
			case 'q':
				letterFrequencies[16]++;
				break;
			case 'r':
				letterFrequencies[17]++;
				break;
			case 's':
				letterFrequencies[18]++;
				break;
			case 't':
				letterFrequencies[19]++;
				break;
			case 'u':
				letterFrequencies[20]++;
				break;
			case 'v':
				letterFrequencies[21]++;
				break;
			case 'w':
				letterFrequencies[22]++;
				break;
			case 'x':
				letterFrequencies[23]++;
				break;
			case 'y':
				letterFrequencies[24]++;
				break;
			case 'z':
				letterFrequencies[25]++;
				break;
		}
	}

}

void printFrequencies(FILE *fp) 
{
	int i;
	fprintf(fp, "Letters:");
	for(i=0;i<26;i++)
	{
		if(letterFrequencies[i]>0)
		{
			fprintf(fp, " %c:%d", i+97,letterFrequencies[i]);
		}
	}
}

// Functions for car-pol.c
void car2pol(double x, double y, double *pr, double *ptheta) 
{
	*pr=sqrt((x*x)+(y*y));
	if(x>0)
		*ptheta=atan(y/x);
	else if(x<0)
		*ptheta=atan(y/x)+PI;
	else if(x==0&&y>0)
		*ptheta=PI2;
	else if(x==0&&y<0)
		*ptheta=-1*(PI2);
	else if(x==0&&y==0)
		*ptheta=0;
}

void pol2car(double r, double ptheta, double *px, double *py) 
{
	*px=r*cos(ptheta);
	*py=r*sin(ptheta);
}

