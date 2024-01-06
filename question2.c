#include <stdio.h>

int main(){
    float a;
    printf("please enter radius:");
    scanf("%f",&a);
    a=(a*a)*3.14;
    printf("area of the circle is =  %f",a);

    return 0;
}