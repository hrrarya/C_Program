#include <stdio.h>

int main()
{
    int i=3,s=1;

    do{
        s=s*(i*i);
        i+=2;

    }while(i<=15);
    printf("%d\n",s);
    return 0;
}
