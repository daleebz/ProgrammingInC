#include<stdio.h>
int main()
{

	int scanint;
	printf("Course: ");
	scanf("%*[ECE- \t\n]%d", &scanint);
//as seen in lecture...ignores the ece part
	switch(scanint)
	{
//worked my way down and built up
		case 15:
			printf("Prereqs: Anyone can take that!\n");
			break;
		case 111:
			printf("Prereqs: ECE-15\n");
			break;
		case 141:
			printf("Prereqs: ECE-111 <-- ECE-15\n");
			break;
		case 165:
			printf("Prereqs: ECE-141 <-- ECE-111 <-- ECE-15\n");
			break;
		case 153:
			printf("Prereqs: Anyone can take that!\n");
			break;
		case 155:
			printf("Prereqs: ECE-153\n");
			break;
		case 158:
			printf("Prereqs: ECE-155 <-- ECE-153\n");
			break;
		case 171:
			printf("Prereqs: Anyone can take that!\n");
			break;
		case 178:
			printf("Prereqs: ECE-171\n");
			break;

	}
	return 0;
}
