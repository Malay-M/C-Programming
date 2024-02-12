#include<stdio.h>
#include<stdlib.h>
#define size 5

int deque[size];
int f=-1,r=-1,x;

void enqueue_front()
{
	printf("Enter the element:");
	scanf("%d",&x);
	if((f==0&&r==size-1)||(f=r+1))
	{
		printf("deque is full");
	}
	else if((f==-1)&&(r==-1))
	{
		f=r=0;
		deque[f]=x;
	}
	else if(f==0)
	{
		f=size-1;
		deque[f]=x;
	}
	else
	{
		f=f-1;
		deque[f]=x;
	}
}

void enqueue_rear()
{
	printf("Enter the value:");
	scanf("%d",&x);
	if((f==0&&r==size-1)||(f=r+1))
	{
		printf("deque is full");
	}
	else if((f==-1)&&(r==-1))
	{
		r=0;
		deque[r]=x;
	}
	else if(r==size-1)
	{
		r=0;
		deque[r]=x;
	}
	else
	{
		r++;
		deque[r]=x;
	}
}

void display()
{
	int i=f;
	if(f==-1&&r==-1)
	{
		printf("\nDeque empty");
	}
	else
	{
		printf("\nElementes in a deque: ");
		while(i<=r)
		{
			printf("%d ",deque[i]);
			i=(i+1)%size;
		}
		printf("%d",deque[r]);
	}
}

void getfront()
{
	if((f==-1)&&(r==-1))
	{
		printf("Deque is empty");
	}
	else
	{
		printf("\nThe value of the front is: %d",deque[f]);
	}
}

void getrear()
{
	if((r==-1)&&(r==-1))
	{
		printf("Deque is empty");
	}
	else
	{
		printf("\nThe value of the rear is: %d",deque[r]);
	}
}

void dequeue_front()
{
	if((f==-1)&&(r==-1))
	{
		printf("Deque is empty");
	}
	else if(f==r)
	{
		printf("\nThe deleted element is %d",deque[f]);
		f=-1;
		r=-1;
	}
	else if(f==(size-1))
	{
		printf("\nThe deleted element is %d",deque[f]);
		f=0;
	}
	else
	{
		printf("\nThe deleted element is %d",deque[f]);
	}
}

void dequeue_rear()
{
	if((f==-1)&&(r==-1))
	{
		printf("Deque is empty");
	}
	else if(f==r)
	{
		printf("\nThe deleted element is %d",deque[r]);
		r=size-1;
	}
	else if(r==0)
	{
		printf("\nThe deleted element is %d",deque[r]);
		r=size-1;
	}
	else
	{
		printf("\nThe deleted element is %d",deque[r]);
		r=r-1;
	}
}

int main()
{
	int ch,a;
	while(ch!=8)
	{
		printf("\n*****Menu*****\n");
		printf("--------------\n");
		printf("1. Enqueue at front\n2. Enqueue at rear\n3. Getfront\n4. Getrear\n5. Dequeue at front\n6. Dequeue at rear\n7. Display\n8. Exit\n");
		printf("Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:  enqueue_front();
				 	 break;
			case 2:	 enqueue_rear();
				 	 break;
			case 3:  getfront();
					 break;
			case 4:  getrear();
					 break;
			case 5:  dequeue_front();
					 break;
			case 6:  dequeue_rear();
				 	 break;
			case 7:  display();
					 break;
			case 8:  exit(0);
					 break;
			default: printf("Enter valid choice");
		}
	}
	return 0;
	
}
