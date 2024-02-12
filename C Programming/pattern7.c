/*
1
22
333
4444
*/

#include<stdio.h>

int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            if(j<=i)
              printf("%d",i);
            else
              printf(" ");
        }
        printf("\n");
    }
    return 0;
}
