#include <stdio.h>
//Draw a flow chart to count number of digits in a number.
int main(){
    double x ;
    int i=1 ;
    int a;
    printf("lütfen basamak sayısını bulmak istediğiniz sayıyı giriniz   : \n");
    scanf("%lf",&x);
    while(x>10){
        x=x/10;
        i++;
    }
    printf("sayınızın basamak sayısı = %d\n",i);
    return 0;
}