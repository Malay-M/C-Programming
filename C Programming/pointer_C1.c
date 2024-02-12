/*Basic of pointers*/
// Pointer is a variable that contains address of another variable
#include<stdio.h>

int main()
{
	int x=5,*j;
	j=&x;
	printf("%d %u\n",x,j);
	printf("%d %u\n",*j,&x);  //& is known as address of operator
	printf("%u",*&j);  //* is indirection operator
	return 0;
}
/*
 %d -32768 to 32767
 %u 0 to 65535
 when we print address we should use %u
 j is not an ordinary variable,it is a variable 
 which contains the address of another variable
 
 pointer takes 2 bytes storage
*/
