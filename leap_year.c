#include <stdio.h>

int main()
{
    int a=2100;

    if(a%400==0){
        printf("%d is Leap year",a);
    }else if(a%100==0){
        printf("%d is not leap year",a);
    }else if(a%4==0){
        printf("%d is leap year",a);
    }else{
        printf("%d is not leap year",a);
    }

    return 0;
}
