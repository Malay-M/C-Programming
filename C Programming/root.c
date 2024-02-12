#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,p;
	printf("Enter a base:");
	scanf("%d",&a);
	printf("Enter a power:");
	scanf("%d",&b);
	p=pow(a,b);
	printf("%d",p);
	return 0;
}
