#include <stdio.h>
#include <math.h>

int main()
{
    int a,i=2,s=0;
    printf("Enter a number: ");
    scanf("%d",&a);

    while(i<=a){
        s = s+ pow(i,3);
        i+=2;
        printf("%d\n",s);
    }

    return 0;
}
