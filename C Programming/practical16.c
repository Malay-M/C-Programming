#include<stdio.h>
#include<string.h>

int main()
{
	int str1[50],str2[50],ch,i,j,len;
	printf("\n*****MENU*****\n");
	printf("1. Show address of each character\n");
	printf("2. Concatenate two string without using strcat function\n");
	printf("3. Concatenate two string using strcat function\n");
	printf("4. Compare two strings\n");
	printf("5. Calculate length of the string using pointer\n");
	printf("6. Convert all lowercase characters to uppercase\n");
	printf("7. Convert all uppercase characters to lowercase\n");
	printf("8. Calculate number of vowels\n");
	printf("9. Reverse the string\n");
	printf("Enter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 2: printf("Enter 1st string:");
				scanf("%s",str1);
				printf("Enter 2nd string:");
				scanf("%s",str2);
				while(str1[i]!='\0')
 				 i++;
 				while(str2[j]!='\0')
 				 {
   					 str1[i]=str2[j];
   					 j++;
    				i++;
  				}
  				str1[i]='\0';
  				printf("\nConcatenated String is %s",str1);
  				break;
	}
	
	return 0;
}
