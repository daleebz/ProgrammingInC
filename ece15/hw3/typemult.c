#include <stdio.h>
int main()
{
	double n1, n2, product;
	int productint,n11,n22;
	char n,y,Y,N, input1, input2;
	printf("Enter two numbers to multiply: ");
	scanf(" %lf , %lf", &n1,&n2);
	printf("Is the first number an int (y/n)? ");
	scanf(" %c", &input1);
	printf("Is the second number an int (y/n)? ");
	scanf(" %c", &input2);
//asks if its a yes in both caps or not and if the second one is a yes
	if((input1=='y' || input1=='Y') && (input2=='y' || input2=='Y'))
	{
		n11=(int) n1;
		n22=(int) n2;
		productint=n11*n22;
		printf("%d * %d = %d",n11,n22,productint);
	}
//case2! same here but a bit diff
	else if((input1=='n' || input1=='N') && (input2=='y' || input2=='Y'))
	{
		n22=(int) n2;
		product=n1*n22;
		printf("%.2lf * %d = %.2lf",n1,n22,product);
	}
//case3
	else if((input1=='y' || input1=='Y') && (input2=='n' || input2=='N'))
	{
		n11=(int) n1;
		product=n11*n2;
		printf("%d * %.2lf = %.2lf",n11,n2,product);
	}
//case4
	else if((input1=='n' || input1=='N') && (input2=='n' || input2=='N'))
	{

		product=n1*n2;
		printf("%.2lf * %.2lf = %.2lf",n1,n2,product);
	}
	else
		return 0;

}
