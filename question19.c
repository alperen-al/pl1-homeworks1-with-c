#include <stdio.h>
int main(){
    int x,i,sum;
    printf("lütfen çarpım tablosunu görmek istediğiniz sayıyı giriniz: \n");
    scanf("%d",&x);
    i=1;
    while(i!=11){
        sum=x*i;
        i++;
        printf("%d\n",sum);
    }
    return 0;
}