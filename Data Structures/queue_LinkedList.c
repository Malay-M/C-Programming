/*Perform queue operation using Linked list implementation*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node *front;
struct node *rear;
void insert();
void delete();
void display();

void main()
{
	int choice;
	while(choice!=4)
	{
		printf("\n******Main Menu******\n");
		printf("---------------------\n");
		printf("1.Insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:  insert();
					 break;
			case 2:  delete();
					 break;
			case 3:  display();
					 break;
			case 4:  exit(0);
					 break;
			default: printf("\nEnter valid choice\n");
		}
	}
}

void insert()
{
	struct node *ptr;
	int item;
	ptr=(struct node *)malloc(sizeof(struct node));
	if(ptr==NULL)
	{
		printf("\nOVERFLOW\n");
	}
	else
	{
		printf("Enter the value:");
		scanf("%d",&item);
		ptr->data=item;
		if(front==NULL)
		{
			front=ptr;
			rear=ptr;
			front->next=NULL;
			rear->next=NULL;
		}
		else
		{
			rear->next=ptr;
			rear=ptr;
			rear->next=NULL;
		}
	}
}

void delete()
{
	struct node *ptr;
	if(front==NULL)
	{
		printf("\nUNDERFLOW\n");
	}
	else
	{
		ptr=front;
		front=front->next;
		free(ptr);
		printf("\nValue deleted");
	}
}

void display()
{
	struct node *ptr;
	ptr=front;
	if(front==NULL)
	{
		printf("\nEmpty queue\n");
	}
	else
	{
		printf("\nPrinting value....\n");
		while(ptr!=NULL)
		{
			printf("\n%d\n",ptr->data);
			ptr=ptr->next;
		}
	}
}
