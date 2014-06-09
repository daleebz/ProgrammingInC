#include <stdio.h>


int main()
{

int GB; // Variable indicating memory size
	printf("Welcome to Apple.con, home of the amazing 5S.");
	printf("How much memory would you like (16, 32, or 64)? ");
	scanf("%d", &GB);
	printf("Your phone costs merely $%d.", 649+GB/32*100);

return 0;
}
