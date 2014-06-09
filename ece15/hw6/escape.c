#include <stdio.h>
int main()
{
	int i,j,c=0,iter;
	char maze[5][5];
	printf("5x5 layout:\n");
	for(i=0;i<5;i++)
	{	for(j=0;j<5;j++)
		{scanf("%c%*['\n'\t\n]",&maze[i][j]);	}
}

	for(iter=1;iter<=5;iter++)
		//every period become an S and this program runs through 5 different iterations
	{
		for(i=0;i<5;i++)
		{	for(j=0;j<5;j++)
			{	if('S'==maze[i][j])
				{
					if(maze[i+1][j]=='.')
					{		maze[i+1][j]='S';
					}	if(maze[i-1][j]=='.')
					{		maze[i-1][j]='S';
					}	if(maze[i][j+1]=='.')
					{		maze[i][j+1]='S';
					}	if(maze[i][j-1]=='.')
					{		maze[i][j-1]='S';
					}	}
			}	}}

			//check where the Student could be and if he could exit, if yes add to c
			for(i=0;i<5;i++)
			{
				if ((maze[i][0]=='S')||(maze[i][4]=='S'))
				{	++c;
				}
			}

			for(j=0;j<5;j++)
			{	if ((maze[0][j]=='S')||(maze[4][j]=='S'))
				{++c;;}


				//if c is true then it increments and will print escape 
			}

			if(c>0)
				printf("Escape!\n");
			else
				printf("Sorry.\n");
			return 0;
}

