#include <stdio.h>
int main()
{
	int i,j,temp,start_row,end_row,start_col,end_col;
	int mat_size;
	printf("Matrix size: ");
	scanf("%d", &mat_size);
	int mat[mat_size][mat_size];
	for(i=0 ; i< mat_size; i++)
	{	printf("Row %d digits: ", i+1);
		for(j=0; j<mat_size;j++)
			scanf(" %d",&mat[i][j]);

	}
//our parameters so theyre universal for any matrix size
	start_row=0;
	end_row=mat_size-1;
	start_col=0;
	end_col=mat_size-1;
	//number of rotations to perform
	for(i=0; i<(mat_size/2); i++)
	{
		temp=mat[start_row][end_col];
//store the temp in the top right corner of matrix we're working with
		for(j=end_col; j>=start_col+1; j--)
		{
			mat[start_row][j]=mat[start_row][j-1];
		}
		for(j=start_row; j<=end_row-1;j++)
		{
			mat[j][start_col]=mat[j+1][start_col];
		}
		for(j=start_col; j<=end_col-1; j++)
		{

			mat[end_row][j]=mat[end_row][j+1];
		}

		for(j=end_row;j>=start_row+1;j--)
		{
			mat[j][end_col]=mat[j-1][end_col];
		}
		mat[start_row+1][end_col]=temp;
//throw the temp back in there
//move on to the inner matrix
		start_row++;
		end_row--;
		start_col++;
		end_col--;


	}
printf("After clockwise rotation:\n");
	for(i=0; i<mat_size; i++)
	{	for(j=0;j<mat_size; j++)
		printf("%d%s", mat[i][j], j==mat_size-1? "\n" : " ");

	}
		return 0;
}
