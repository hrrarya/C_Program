#include <stdio.h>

int main()
{
    int i=3,s=1;

    while(i<=15){
        s=s*(i*i);
        i+=2;

    }
    printf("%d\n",s);
    return 0;
}
