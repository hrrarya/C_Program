#include <stdio.h>

int main()
{
    int i,s=0;
    for(i=1;i<=10;i++){
        s = s+i*(i+2)*(i+2);
        printf("%d\n",s);
    }

    return 0;
}
