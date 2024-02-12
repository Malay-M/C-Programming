#include<stdio.h>

int main()
{
	int n,q;
	printf("1.Mango Juice\n 2.Pine Apple\n 3.Coconut Water\n 4.Other\nEnter a choice:");
	scanf("%d",&n);
	switch(n)
	{
		case 1: printf("Mango Juice--- 60/-\nEnter your Quantity:");
		        scanf("%d",&q);
		        printf("Item: Mango Juice\nQty: %d\nAmount: %d",q,q*60);
		        break;
		
		case 2: printf("Pine Apple--- 100/-\nEnter your Quantity:");
		        scanf("%d",&q);
		        printf("Item: Pine Apple\nQty: %d\nAmount: %d",q,q*100);        
		        break;
		
		case 3: printf("Coconut Water--- 40/-\nEnter your Quantity:");
		        scanf("%d",&q);
		        printf("Item: Mango Juice\nQty: %d\nAmount: %d",q,q*40);
		        break;
		        
		case 4: printf("!!!SORRY!!!\nFruits are not available.");
		        break;
		        
		default: printf("Please Enter correct choice");
		         break;
	}
	return 0;
}



