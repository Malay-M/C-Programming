#include <stdio.h> 
 
void sort(int *arr,int length) 
{ 
    int i,j,temp; 
    for(i=0;i<length;i++)
	{ 
        for(j=i+1;j<length;j++) 
		{ 
            if(arr[i]>arr[j]) 
			{ 
                temp=arr[i]; 
                arr[i]=arr[j]; 
                arr[j]=temp; 
            } 
        } 
    } 
} 
 
void print(int *arr,int length) 
{
    int i;  
    printf("Ascending Order\n"); 
    for(i=0;i<length;i++) 
	{ 
        printf("%d ",*(arr + i)); 
    } 
    printf("\nDescending Order\n"); 
    for(i=length-1;i>=0;i--) 
	{ 
        printf("%d ",*(arr + i)); 
    } 
}
 
int main() 
{ 
    int numbers[10],i; 
    int length=*(&numbers+1)-numbers;
    printf("Enter 10 array elements:");
    for(i=0;i<length;i++) 
	{  
        scanf("%d",&numbers[i]); 
    } 
    sort(numbers,length);     
    print(numbers,length);
    return 0; 
} 
