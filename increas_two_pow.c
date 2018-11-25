#include <stdio.h>
#include <math.h>
int main()
{
    int i,s=0;

    for(i=2;i<=100;i=i+2){
        s =s+ pow(i,3);
        printf("%d\n",s);
    }
    return 0;
}
