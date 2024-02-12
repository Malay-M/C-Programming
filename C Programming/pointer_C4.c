#include<stdio.h>

void input(int *p);
void display(int *p);
void sort(int *p);

void main()
{
	int a[5];
	input(a);
	display(a);
	printf("\n");
	sort(a);
	display(a);
}

void input(int *p)
{
	int i;
	for(i=0;i<5;i++)
	  scanf("%d",p+i);
}

void display(int *p)
{
	int i;
	for(i=0;i<5;i++)
	  printf("%d ",*(p+i));
}

void sort(int *p)
{
	int round,t,i;
	for(round=0;round<5;round++)
	{
		for(i=0;i<4;i++)
		{
			if(*(p+i)>*(p+i+1))
			{
				t=*(p+i);
				*(p+i)=*(p+i+1);
				*(p+i+1)=t;
			}
		}
	}
}
