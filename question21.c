#include <stdio.h>
//Draw a flow chart to find first and last digit of a number.
int main (){
    int x , a ;
    printf("lütfen sayınızı giriniz\n");
    scanf("%d",&x);
    a=x%10;
    while(x>10){
        x=x/10;

    }
    printf("girdiğiniz sayının son rakamı  = %d\n",a);
    printf("girdiğiniz sayının ilk takamı  = %d\n",x);
    return 0;
}