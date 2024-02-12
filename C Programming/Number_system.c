#include<stdio.h>
#include<math.h>

void binary(int);
void octal(int);
void hexadecimal(int);
int main()
{
	int ch,n;
	printf("Enter the number you want to convart:");
	scanf("%d",&n);
	printf("*******Menu*******");
	printf("\n1. Binary\n2. Octal\n3. Hexadecimal\n");
	printf("Enter your choice:");
	scanf("%d",ch);
	switch(ch)
	{
		case 1:  binary(n);
				 break;
		case 2:  octal(n);
				 break;
		case 3:  hexadecimal(n);
				 break;
		default: printf("Enter valid choice");
	}
	return 0;
}

void binary(int n)
{
	int i=1,a,b;
	if(n!=0)
	{
		a=n%2;
		a=a-1;
		i++;
	}
	printf("\n%d",b);
}

void octal(int n)
{
	
}

void hexadecimal(int n)
{
	
}
