#include <stdio.h>
#include <math.h>

int main()
{
    int a,i,s=0;

    printf("Please enter a number: ");
    scanf("%d",&a);

    do{
        s =s+pow(i,3);
        i+=2;
        printf("%d\n",s);
    }while(i<=a);


}
