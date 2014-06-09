#include <stdio.h>
int main()
{
	int board_size,kr,kc,kr1,kc1,qr,qc,qc1,qr1,rr,rc,rc1,rr1;
	printf("Board size: ");
	scanf("%d", &board_size);
	printf("King row and column: ");
	scanf("%d %d",&kr, &kc);
	printf("Queen row and column: ");
	scanf("%d %d",&qr, &qc);
	printf("Rook row and column: ");
	scanf("%d %d",&rr, &rc);
	int i, j;
//to fit my wonky board
	kr1=kr*2-1;
	kc1=kc*2-1;
	qr1=qr*2-1;
	qc1=qc*2-1;
	rc1=rc*2-1;
	rr1=rr*2-1;

	for (i=0; i<(board_size*2+1); i++) {
		//j=rows accross
		//i=colunms down	
		if(i!=0)
			printf("\n");	
		for (j=0; j<(board_size*2+1); j++)
		{	
			if(i%2==0)//if its an even row			
			{
				if(j%2==0)//if its an even coll
				{	printf("+");

				}
				else//odd col
				{	printf("-");

				}
			}else//if its an odd row
				if(j%2==0)//if its an even col
					printf("|");			
				else if	(i==kr1 && j==kc1)//put king down
					printf("K");
				else if(i==qr1 && j==qc1)//queen
					printf("%s",(kr1-2<=qr1&&kr1+2>=qr1)&&(kc1+2>=qc1&&kc1-2<=qc1)?"q": "Q" );
				else if(i==rr1 && j==rc1)//rook
					printf("%s",(kr1-2<=rr1&&kr1+2>=rr1)&&(kc1+2>=rc1&&kc1-2<=rc1)?"r": "R" );
				

			//code for input on *
				else if(((j+1)/2)%2==1&&((i+1)/2)%2==1)
					printf("*");
				else if(((j+1)/2)%2==0&&((i+1)/2)%2==0)
				{	
					printf("*");
				}
				else 
					printf(" ");


		}
	}
	return 0;
}
