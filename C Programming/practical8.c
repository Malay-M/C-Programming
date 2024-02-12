#include<stdio.h>  
  
#define SWAP(x,y,temp) temp=x;x=y;y=temp;  
  
int main()  
{  
    int a,b,temp;  
    printf("Enter two integer numbers\n");  
    scanf("%d%d",&a,&b);  
    printf("Before swapping: num1 = %d and num2 = %d\n",a,b);  
    SWAP(a, b, temp);  
    printf("After swapping: num1 = %d and num2 = %d\n",a,b);  
    return 0;  
}  
