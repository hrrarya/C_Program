#include <stdio.h>

int main()
{
    int a=4,b=3;

    printf("Before swaping number: %d and %d\n\n",a,b);

    a= a+b;
    b= a-b;
    a= a-b;


    printf("After swaping numbers: %d and %d",a,b);

    return 0;
}
