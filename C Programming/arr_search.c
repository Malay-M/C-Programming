#include<stdio.h>
int main()
{
    int arr[50],i,n,a,count=0;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter array elements:");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array elements are \n");
    for ( i = 0; i < n; i++)
    {
        printf("\n%d",arr[i]);
    }
    printf("\nEnter the element you want to search:");
    scanf("%d",&a);
    for ( i = 0; i < n; i++)
    {
        if (arr[i]==a)
        {
            count=1;
            break;
        }
        
    }
        if(count==1)
        printf("element  found");
        else
        printf("element not found");
    
    
    return 0;
}
