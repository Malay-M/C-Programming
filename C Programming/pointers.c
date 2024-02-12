#include<stdio.h>

int division(int a,int b,int *ptrc)
{
    if(b==0)
    {
        return 0;
    }
    else
    {
        *ptrc=a/b;
        return 1;
    }
}

int main()
{
    /*
    int a=10; //declaration & initilization
    int *ptra; //declaration of pointer of a
    ptra=&a;

    printf("%d\n",ptra);
    printf("%x\n",ptra); //%x is for hexadecimal 
    printf("%d\n",*ptra); //to find the value that store at that location
    printf("%d\n",&ptra);
    */

   int a,b,c;
   a=10;
   b=5;
   int status=division(a,b,&c);

   if(status==0)
   {
        printf("Division not possible");
   }
   else
   {
        printf("%d/%d=%d\n",a,b,c);
   }
   
}           