#include <stdio.h>

int main(){
    float a;
    printf("please enter the fahrenheit  :   ");
    scanf("%f",&a);
    a=(a-32)/(1.8);
    printf("celcius is : %f",a);

    return 0;
}