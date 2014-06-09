#include <stdio.h> 
int main ()
{
	char hotcheck[50];
	int i,j=0,k=0,z=0;
//counters
	printf("Word: ");
	scanf("%s", hotcheck);
//run through array
	for(i=0; i<50; i++)
	{	if(hotcheck[i]=='h')
		{
			++i;
//go to the next element in the array
			++j;
//j=counter, h=true
		}
		if(j>0)
		{
			if(hotcheck[i]=='o')
			{

				++i;
//go to the next letter
				++k;
//k=counter, o=true look for t
			}
		}
		if(k>0)
		{
			if(hotcheck[i]=='t')
			{
				printf("Hot");
				++z;
				break;}}
	} if(z==0)
	printf("Not");
	return 0;
}
