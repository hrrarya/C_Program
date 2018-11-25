#include <stdio.h>
#include <math.h>

int main()
{
    int a,i,s=0;
    printf("Enter a number: ");
    scanf("%d",&a);

    for(i=2;i<=a;i+=2){
        s =s+pow(i,3);
        printf("%d\n",s);
    }
    return 0;
}
