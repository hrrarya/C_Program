#include <stdio.h>

int main()
{
    int a,b,temp;
    a=2;
    b=3;
    printf("Before swaping number: %d and %d",a,b);
    temp =a;
    a=b;
    b=temp;
    printf("After swaping the number: %d and %d",a,b);

    return 0;
}
