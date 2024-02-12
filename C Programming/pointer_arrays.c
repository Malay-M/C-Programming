#include<stdio.h>
#include<stdlib.h>

void print_array(int *a,int n)
{
    int i;
    //a[i]->*(a+i)
    for(i=0;i<n;i++)
    {
        printf("%d->%d\n",a[i],a+i);
    }
}

int main()
{
    /*
    int a=10;
    int *ptr=&a;

    char ch='a';
    char *chptr=&ch;

    printf("%ld\n",ptr); //integer take 4 byte storage
    ptr++;
    printf("%ld\n",ptr);

    printf("%ld\n",chptr); //char take 1 byte storage
    chptr++;
    printf("%ld\n",chptr);
    */

   int *arr;
   int n=5,i;
   arr=(int *)malloc(sizeof(int)*n);  
   //malloc return void type  array , (int *) is to type cast the void to integer type pointer

    for(i=0;i<n;i++)
    {
        int num;
        printf("Enter the elements:\n");
        scanf("%d",&num);
        *(arr+i)=num; //same as arr=arr+i
    }
    printf("Entered elements:\n");
    for(i=0;i<n;i++)
    {
        printf("%d->%d\n",arr[i],arr+i);
    }
    print_array(arr,n);
    free(arr);
}