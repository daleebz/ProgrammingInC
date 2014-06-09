#include<stdio.h>

void lowercaseString(char string[]);
int stringLen(char string[]);
void swapStrings(char string1[], char string[]);
int main()
{
	int i,j,numwords,lencomp1,lencomp2,count=1;

	printf("How many words are you planning to enter? ");
	scanf("%d", &numwords);
	char mainString[numwords][50];
	//getchars

	for(i=0; i<numwords; i++)
	{
		printf("Enter word %d: ",i+1);

		{
			scanf("%s", mainString[i]);
			//make them lower case 
			lowercaseString(mainString[i]);

		}
	}

	//run through my functions
	for(i=0;i<numwords;i++)
	{
		//find the lengths
		lencomp1=stringLen(mainString[i]);
		lencomp2=stringLen(mainString[i+1]);
		if(lencomp1>lencomp2)
			//swap them		
		{
			swapStrings(mainString[i], mainString[i+1]);
			i=0;
		}
	}

	//print the results
	printf("Sorted words:\n");
	for(i=0;i<numwords;i++)
	{

		printf("%s",mainString[i]);
		printf("\n");
	}
	return 0;
}

//make everything lowercase
void lowercaseString(char string[])
{
	int j;
	{
		for(j=0; string[j]!= '\0';j++)
		{	if((string[j] >= 65) && (string[j] <= 90))
			{
				string[j]=string[j]+32;
			}
		}
	}
	return;
}
//calculate the length of each word
int stringLen(char string[])
{
	int j, length=0;
	for(j=0;string[j]!='\0';j++)
	{
		length++;
	}

	return length;
}
//swap the smaller with the bigger
void swapStrings(char string1[], char string2[])
{
	int j;
	char temp1;
	for(j=0;j<50;j++)

	{	temp1=string1[j];
		string1[j]=string2[j];
		string2[j]=temp1;
	}
	return;
}
