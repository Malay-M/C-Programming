#include<stdio.h>

int arr[50],n,top=-1,ch;
void push();
void pop();
void show();

int main()
{
	printf("Enter number of elements you want to enter:");
	scanf("%d",&n);
	while(ch!=4)
	{
	printf("1.PUSH\n2.POP\n3.SHOW\n4.Exit");
	printf("Enter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: push();
				break;
		case 2: pop();
				break;
		case 3: show();
				break;
		default: printf("Enter valid number");
	}
	}
	return 0;
}

void push()
{
	int val;
	printf("Enter the value:");
	scanf("%d",&val);
	if(top==top-1)
	{
		printf("Stack overflow");
	}
	else
	{
		top++;
		arr[top]=val;
	}
}

void pop()
{
	if(top==-1)
	{
		printf("Stack underflow");
	}
	else
	{
		printf("Deleted item is %d",arr[top]);
		top--;
	}
}

void show()
{
	int i;
	printf("Elements in the stack:");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}
