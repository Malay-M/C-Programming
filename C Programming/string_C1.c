#include<stdio.h>

int main()
{
	char s[10]="MALAY",s2[20]; //or s[10]={'M','A','L','A','Y','\0'}
	int i;
	printf("Enter your name ");
	gets(s); //s=1000=&s[0]
	for(i=0;s[i]!='\0';i++)
		printf("%c",s[i]);
	printf("\n%s\n",s);
	puts(s);
	printf("%d",s2);
	return 0;
}
