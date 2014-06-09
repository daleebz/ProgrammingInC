#include<stdio.h>

int main()
{
	int c,input,digits, smallest, largest, sevens,a,b,mod,input1;
	printf("Nonnegative integer: ");
	scanf("%d", &input);
	digits=0;
	sevens=0;
	//input1 is for my mod case just in case input is moddifeied
	input1=input;
	mod=input1%3;
	//for the amazing, boring...later on
	if(input == 0)
	{
		//zero case
		digits=1;
		smallest=input;
		largest=input;
	}
	else{
		while(input>0)
		{
			a=input%10;
			//case one
			if(digits==0)
			{
				largest=a;
				smallest=a;
			}
			if(a==7){
				sevens++;
			}
			digits++;
			b=input/10;
			//still case one	
			if(digits==1)
			{
				if(input<10)
					a=a;
				else
					a=b%10;
				if(largest<a){
					largest=a;
				}
				if(smallest>a){
					smallest=a;
				}
				if(input==7)
					break;
				else
					if(a==7){
						sevens++;
					}
			}
			else{
				//comporator and assign small and large
				if(input/10==0)
					c=a;
				else
					c=b%10;
				if(c>a && largest < c){
					largest=c;
				}
				else if(a>c && largest <a){
					largest=a;
				}
				if(smallest>c && c<a){
					smallest=c;
				}
				else if(smallest>a && a<c)
				{
					smallest=a;
				}
				if(c==7){
					sevens++;
				}
			}
			if(input/10==0)
			{
				break;
			}
			//i dont want it adding to digits, not pretty but it works
			digits++;
			input=b/10;
		}

	}
	printf("%d digit%s, smallest is %d, largest is %d, 7 appeared %d time%s. %s!", digits, (digits==1) ? "" : "s",  smallest, largest, sevens, (sevens==1) ? "" : "s", (mod==0) ? "Boring" : (mod==1) ? "Amazing" : "Yahoo");

}

