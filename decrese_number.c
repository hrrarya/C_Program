#include <stdio.h>

int main()
{
    int i,s=0;

    for(i=60;i>=5;i=i-5){
        s=s+i;
    }
    printf("%d",s);
    return 0;
}
