#include<stdio.h>
#include<stdlib.h>

struct node
{
	struct node *prev;
	struct node *next;
	int data;
};
struct node *head;

void insertion_beginning();
void insertion_last();
void insertion_specified();
void deletion_beginning();
void deletion_last();
void deletion_specified();
void display();
void search();

void main ()
{
	int choice =0;
	while(choice != 9)
	{
		printf("\n*********Main Menu*********\n");
		printf("===========================\n");
		printf("1.Insert in begining\n2.Insert at last\n3.Insert at any random location\n4.Delete from Beginning\n5.Delete from last\n6.Delete the node after the given data\n7.Search\n8.Show\n9.Exit\n");
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: insertion_beginning();
					break;
			case 2: insertion_last();
					break;
			case 3: insertion_specified();
					break;
			case 4: deletion_beginning();
					break;
			case 5: deletion_last();
					break;
			case 6:	deletion_specified();
					break;
			case 7: search();
					break;
			case 8: display();
					break;
			case 9: exit(0);
					break;
			default: printf("Please enter valid choice..");
		}
	}
}

void insertion_beginning()
{
	struct node *ptr,*temp;
	int item;
	ptr = (struct node *)malloc(sizeof(struct node));
	if(ptr == NULL)
	{
		printf("\nOVERFLOW");
	}
	else
	{
		printf("\nEnter Item value:");
		scanf("%d",&item);
		ptr->data=item;
		if(head==NULL)
		{
			head = ptr;
			ptr -> next = head;
			ptr -> prev = head;
		}
		else
		{
			temp = head;
			while(temp -> next != head)
			{
				temp = temp -> next;
			}
			temp -> next = ptr;
			ptr -> prev = temp;
			head -> prev = ptr;
			ptr -> next = head;
			head = ptr;
		}
		printf("\nNode inserted\n");
	}
}

void insertion_last()
{
	struct node *ptr,*temp;
	int item;
	ptr = (struct node *) malloc(sizeof(struct node));
	if(ptr == NULL)
	{
		printf("\nOVERFLOW");
	}
	else
	{
		printf("\nEnter value:");
		scanf("%d",&item);
		ptr->data=item;
		if(head == NULL)
		{
			head = ptr;
			ptr -> next = head;
			ptr -> prev = head;
		}
		else
		{
			temp = head;
			while(temp->next !=head)
			{
				temp = temp->next;
			}
			temp->next = ptr;
			ptr ->prev=temp;
			head -> prev = ptr;
			ptr -> next = head;
		}
	}
	printf("\nnode inserted\n");
}

void deletion_beginning()
{
	struct node *temp;
	if(head == NULL)
	{
		printf("\n UNDERFLOW");
	}
	else if(head->next == head)
	{
		head = NULL;
		free(head);
		printf("\nnode deleted\n");
	}
	else
	{
		temp = head;
		while(temp -> next != head)
		{
			temp = temp -> next;
		}
		temp -> next = head -> next;
		head -> next -> prev = temp;
		free(head);
		head = temp -> next;
	}
}

void deletion_last()
{
	struct node *ptr;
	if(head == NULL)
	{
		printf("\n UNDERFLOW");
	}
	else if(head->next == head)
	{
		head = NULL;
		free(head);
		printf("\nnode deleted\n");
	}
	else
	{
		ptr = head;
		if(ptr->next != head)
		{
			ptr = ptr -> next;
		}
		ptr -> prev -> next = head;
		head -> prev = ptr -> prev;
		free(ptr);
		printf("\nnode deleted\n");
	}
}

void display()
{
	struct node *ptr;
	ptr=head;
	if(head == NULL)
	{
		printf("\nnothing to print");
	}
	else
	{
		printf("\n printing values ... \n");
		while(ptr -> next != head)
		{
			printf("%d\n", ptr -> data);
			ptr = ptr -> next;
		}
		printf("%d\n", ptr -> data);
	}
}

void search()
{
	struct node *ptr;
	int item,i=0,flag=1;
	ptr = head;
	if(ptr == NULL)
	{
		printf("\nEmpty List\n");
	}
	else
	{
		printf("\nEnter item which you want to search?\n");
		scanf("%d",&item);
		if(head ->data == item)
		{
			printf("item found at location %d",i+1);
			flag=0;
		}
		else
		{
			while (ptr->next != head)
			{
				if(ptr->data == item)
				{
					printf("item found at location %d ",i+1);
					flag=0;
					break;
				}
				else
				{
					flag=1;
				}
				i++;
				ptr = ptr -> next;
			}
		}
		if(flag != 0)
		{
			printf("Item not found\n");
		}
	}
}

void insertion_specified()
{
	struct node *ptr,*temp;
	int item,loc,i;
	ptr = (struct node *)malloc(sizeof(struct node));
	if(ptr == NULL)
	{
		printf("\n OVERFLOW");
	}
	else
	{
		temp=head;
		printf("Enter the location:");
		scanf("%d",&loc);
		for(i=0;i<loc;i++)
		{
			temp = temp->next;
			if(temp == NULL)
			{
				printf("\n There are less than %d elements", loc);
				return;
			}
		}
		printf("Enter value:");
		scanf("%d",&item);
		ptr->data = item;
		ptr->next = temp->next;
		ptr -> prev = temp;
		temp->next = ptr;
		temp->next->prev=ptr;
		printf("\nnode inserted\n");
	}
}

void deletion_specified()
{
	struct node *ptr, *temp;
	int val;
	printf("\n Enter the data after which the node is to be deleted : ");
	scanf("%d", &val);
	ptr = head;
	while(ptr -> data != val)
	{
		ptr = ptr -> next;
	}
	if(ptr -> next == NULL)
	{
		printf("\nCan't delete\n");
	}
	else if(ptr -> next -> next == NULL)
	{
		ptr ->next = NULL;
	}
	else
	{
		temp = ptr -> next;
		ptr -> next = temp -> next;
		temp -> next -> prev = ptr;
		free(temp);
		printf("\nnode deleted\n");
	}
}
