#include <stdio.h>

int main()
{
    char name[20];

    printf("Hello there , what is your name?\n");

    fgets(name,20,stdin);
    printf("I am %s",name);
    return 0;
}
