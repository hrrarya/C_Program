#include <stdio.h>

int main()
{
    int i,n,s=0;
    printf("Please enter a number: ");
    scanf("%d",&n);

    for(i=-4;i<=n;i+=3){
        s=s+i;
        printf("%d\n",i);

    }
    printf("\n\n\n%d\n",s);
    return 0;
}
