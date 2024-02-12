#include<stdio.h>

int main()
{
	int arr[50],num,i,j,n,sum=0,max=0,min;
	float avg;
	printf("Enter number of elements:");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	do
	{
	printf("\n*****Menu*****\n1.Print the even-values\n2.Print the odd-values\n3.Print the sum and average\n4.Print the maximum and minimum\n5.Remove the duplicates\n6.Print the array in reverse order\n7.Re-enter array\n8.Quit\nEnter your choice:");
	scanf("%d",&num);
	switch(num)
	{
		case 1: printf("Even elements are:\n");
				for(i=0;i<n;i++)
				{
					if(arr[i]%2==0)
					  printf("%d\n",arr[i]);
				}
				break;
		case 2: printf("Odd elements are:\n");
				for(i=0;i<n;i++)
				{
					if(arr[i]%2!=0)
					  printf("%d\n",arr[i]);
				}
				break;
		case 3: for(i=0;i<n;i++)
				{
					sum=sum+arr[i];
				}
				avg=sum/n;
				printf("Sum = %d\nAverage = %.2f",sum,avg);
				break;
		case 4: for(i=0;i<n;i++)
				{
					if(arr[i]>max)
					  max=arr[i];
				}
				printf("Maximum = %d\n",max);
				min=arr[0];
				for(i=1;i<n;i++)
				{
					if(arr[i]<min)
					  min=arr[i];
				}
				printf("Minimum = %d",min);
				break;
		case 5: printf("After removing duplicate:\n");
				for(i=0;i<n;i++)
				{
					if(arr[i]!=arr[i+1])
					  printf("%d\n",arr[i]);				
				}
				break;
		case 6: printf("Reverse order:\n");
				for(i=n-1;i>=0;i--)
				  printf("%d\n",arr[i]);
				break;
		case 7: printf("Enter number of elements:");
				scanf("%d",&n);
				printf("Enter new array elements:\n");
				for(i=0;i<n;i++)		
				{
					scanf("%d",&arr[i]);
				}
		case 8: break;		
		default: printf("Enter a valid choice.");			
		}		
	}while(num!=8);	
	return 0;
}


