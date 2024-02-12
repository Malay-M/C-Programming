#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	if(a%7==0)
	 printf("%d is buzz numbre",a);
	else if(a%10==7) 
	 printf("%d is buzz numbre",a);
	else if(a==0) 
	 printf("%d is not a buzz number",a);
	else 
	 printf("%d is not a buzz number",a); 
	return 0; 

}
