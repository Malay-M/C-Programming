#include<stdio.h>

// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int &x[5]=1008;
    printf("%p",x);
    printf("\n%p",&x[2]);
    printf("\n%p",&x[0]);
    
    return 0;
}


