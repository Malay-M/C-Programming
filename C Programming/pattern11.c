/*
   *
  * *
 * * *
* * * *
*/

#include<stdio.h>  

int main()
{
	int i,j,k=1;
	for(i=1;i<=4;i++)
	{
	  for(j=1;j<=7;j++)
	  	{
			if(j>=5-i&&j<=i+3&&k)
			{
				printf("*");
				k=0;
			} 
			else
			{
				printf(" ");
				k=1;
			}	
	  	}
	  printf("\n")	 	;
	}
	return 0;
}
