//Design an algorithm to convert a decimal number, n, to binary format?
#include <stdio.h>
int main(){
    float a,b;
    int n,i;
    i=1;
    printf("bir sayı giriniz ;  ");
    scanf("%f",&n);
    while((n%i)==0){
        i=i*10;
    }
    a=n*10*i;
    b=i*10;
    printf("sayınız : %f", (a)/(b));
    return 0;
}