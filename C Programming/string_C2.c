//strlen()=string length
//strrev()=string revers
//strlwr()=all string characters goes to lower
//strupr()=all string characters goes to upper
//strcpy()=string copy,  strcpy(s,"Malay")
//strcmp()=string compare, strcmp("Malay","Moloy")
//strcat()=string concatenation, strcat(s,"Students")
#include<stdio.h>

int main()
{
	char s[3][10];
	int i;
	printf("Enter three strings");
	for(i=0;i<3;i++)
	  gets(&s[i][0]); //gets(s[i])
	for(i=0;i<3;i++)
	{
		printf("%s\n",&s[i]);
	}
	return 0;
}
