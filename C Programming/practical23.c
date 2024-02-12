#include <stdio.h> 
void reverseArray(int * array,int length)
{
	int i;
    for(i=(length-1);i>=0;i--)
	{ 
        printf("%d ",*(array+i)); 
    } 
} 
int main() 
{ 
    int n,arr[50],i,length;
    printf("Enter number of array elements:");
    scanf("%d",&n);
    printf("Enter array elements:");
    for(i=0;i<n;i++)
    {
    	scanf("%d",&arr[i]);
	}
	length=n;
    reverseArray
	(arr,length); 
    return 0; 
} 
