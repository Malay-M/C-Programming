#include<stdio.h>
struct Distance
{
	int km;
	float m;
}d1,d2,sumOfDistances;

int main()
{
	printf("Enter information for 1st distance\n");
	printf("Enter kilometer:");
	scanf("%d",&d1.km);
	printf("Enter meter:");
	scanf("%d",&d1.m);
	printf("\nEnter information for 2st distance\n");
	printf("Enter kilometer:");
	scanf("%d",&d2.km);
	printf("Enter meter:");
	scanf("%d",&d2.m);
	sumOfDistances.km=d1.km+d2.km;
	sumOfDistances.m=d1.m+d2.m;
	if(sumOfDistances.m>1000.0)
	{
		sumOfDistances.m=sumOfDistances.m-1000.0;
		sumOfDistances.km++;
	}
	printf("\nSum of distances= %d\'-%.1f\"",sumOfDistances.km,sumOfDistances.m);
	return 0;
}
