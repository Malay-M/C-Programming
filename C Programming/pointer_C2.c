/*Extened concept of pointers*/
#include<stdio.h>

void main()
{
	int x=5,*p,**q,***r;
	p=&x;  //p stores address of x
	q=&p;  //q stores address of p		
	r=&q;  //r stores address of q
	**q=7; // **q is pointed to x and store 7	
}

/*Pointer's arithmetic*/
//We cannot add,multiply or divide two addresses
//we can add or subtract integer to/from an address 
//pointer+n=pointer+sizeof(type of pointer)*n
//pointer1-pointer2=literal subtraction/sizeof(type of pointer)
int main()
{
	int a,b;
	int *p,*q;
	p=&a;
	q=&b;
	p-q;
	p+1;  //print the address of next bit
	return 0;
}
