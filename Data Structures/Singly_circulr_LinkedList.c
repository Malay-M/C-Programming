#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node *head;

void beginsert ();
void lastinsert ();
void randominsert();
void begin_delete();
void last_delete();
void random_delete();
void display();
void search();

void main ()
{
	int choice=0;
	while(choice!=9)
	{
		printf("\n******Main Menu******");
		printf("\n=====================");
		printf("\n1.Insert in begining\n2.Insert at last\n3.Insert at any random location\n4.Delete from Beginning\n5.Delete from last\n6.Delete node after specified location\n7.Search for an element\n8.Show\n9.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:  beginsert();
					 break;
			case 2:  lastinsert();
					 break;
			case 3:  randominsert();
					 break;
			case 4:  begin_delete();
					 break;
			case 5:  last_delete();
					 break;
			case 6:  random_delete();
					 break;
			case 7:  search();
					 break;
			case 8:  display();
					 break;
			case 9:  exit(0);
					 break;
			default: printf("Please enter valid choice..");
		}
	}
}


void beginsert()
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
		printf("\nEnter the node data:");
		scanf("%d",&item);
		ptr -> data = item;
		if(head == NULL)
		{
			head = ptr;
			ptr -> next = head;
	 	}
		else
		{
			temp = head;
			while(temp->next != head)
			temp = temp->next;
			ptr->next = head;
			temp -> next = ptr;
			head = ptr;
		}
		printf("\nnode inserted\n");
	}
}

void lastinsert()
{
	struct node *ptr,*temp;
	int item;
	ptr = (struct node *)malloc(sizeof(struct node));
	if(ptr == NULL)
	{
		printf("\nOVERFLOW\n");
	}
	else
	{
		printf("\nEnter Data:");
		scanf("%d",&item);
		ptr->data = item;
		if(head == NULL)
		{
			head = ptr;
			ptr -> next = head;
		}
		else
		{
			temp = head;
			while(temp -> next != head)
			{
				temp = temp -> next;
			}
			temp -> next = ptr;
			ptr -> next = head;
		}
		printf("\nnode inserted\n");
	}
}

void begin_delete()
{
	struct node *ptr;
	if(head == NULL)
	{
		printf("\nUNDERFLOW");
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
		while(ptr -> next != head)
		{
			ptr = ptr -> next;
		}
		ptr->next = head->next;
		free(head);
		head = ptr->next;
		printf("\nnode deleted\n");
	}
}

void last_delete()
{
	struct node *ptr, *preptr;
	if(head==NULL)
	{
		printf("\nUNDERFLOW");
	}
	else if(head ->next == head)
	{
		head = NULL;
		free(head);
		printf("\nnode deleted\n");
	}
	else
	{
	ptr = head;
	while(ptr ->next != head)
	{
		preptr=ptr;
		ptr = ptr->next;
	}
	preptr->next = ptr -> next;
	free(ptr);
	printf("\nnode deleted\n");
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

void randominsert()
{
	int i,loc,item;
	struct node *ptr, *temp;
	ptr = (struct node *) malloc (sizeof(struct node));
	if(ptr == NULL)
	{
		printf("\nOVERFLOW");
	}
	else
	{
		printf("\nEnter element value:");
		scanf("%d",&item);
		ptr->data = item;
		printf("\nEnter the location after which you want to insert ");
		scanf("\n%d",&loc);
		temp=head;
		for(i=0;i<loc;i++)
		{
			temp = temp->next;
			if(temp == NULL)
			{
				printf("\ncan't insert\n");
				return;
			}
		}
		ptr ->next = temp ->next;
		temp ->next = ptr;
		printf("\nNode inserted");
	}
}

void random_delete()
{
	struct node *ptr,*ptr1;
	int loc,i;
	printf("\n Enter the location of the node after which you want to perform deletion \n");
	scanf("%d",&loc);
	ptr=head;
	for(i=0;i<loc;i++)
	{
		ptr1 = ptr;
		ptr = ptr->next;
	}
	ptr1 ->next = ptr ->next;
	free(ptr);
	printf("\nDeleted node %d ",loc+1);
}
