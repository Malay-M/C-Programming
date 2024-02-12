#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	if(a>90)
	 printf("Grade is A+");
	else if(a>80)
	 printf("Grade is A"); 
	else if(a>70)
	 printf("Grade is B+"); 
	else if(a>=60) 
	 printf("Grade is B");
	else
	printf("Student failed in exam");  
	
	return 0;
}
