#include<stdio.h>

int sumArray(int array[], int startIdx, int len);
void printArray(int array[], int startIdx, int len);

int main()
{
	int i,j,sum1,sum2;
	int startIdxmain, lenmain;
	int size=8;
	int inputArray[size];
//scan numbers in
	printf("Enter 8 numbers: ");
	for(i=0; i<8;i++)
	{
		scanf("%d", &inputArray[i]);
	}

	lenmain=size/2;
	startIdxmain=0;
//loop that run through until 1 number is left
	while(lenmain>0)
	{
		sum1=sumArray(inputArray,startIdxmain, lenmain);
		sum2=sumArray(inputArray,(startIdxmain+lenmain),lenmain);

		if(sum1>sum2)
		{
			startIdxmain=startIdxmain;
			printf("Larger half is ");
			printArray(inputArray,startIdxmain, lenmain);
		}
//adjust start indx to the right side which is larger
		if(sum1<sum2)
		{
			startIdxmain=startIdxmain+lenmain;
			printf("Larger half is ");
			printArray(inputArray,startIdxmain, lenmain);
		
		}
		else if(sum1==sum2)
		{
			startIdxmain=startIdxmain;
			printf("The two halves are equel, picking ");
			printArray(inputArray,startIdxmain, lenmain);
		}	
		lenmain=lenmain/2;

	}		
	return 0;
}
//function to find the sum on either side
int sumArray(int array[], int startIdx, int len)
{
	int i,sum=0;
	for (i=startIdx;i<startIdx+len;i++)
	{
		sum+=array[i];
	}
	return sum;
}
//print
void printArray(int array[], int startIdx, int len)
{
	int i;
	for(i=startIdx; i<startIdx+len; i++)
	{
		printf("%d%s", array[i],i==startIdx+len-1 ? "\n" : " ");
	}
	return;
}
