//7.Design an algorithm with a natural number, n, as its input which calculates the following formula and writes the result in the standard output: S = ½ + ¼ + … +1/n.
#include <stdio.h>
int main(){
    
    float sum , i , n;
    sum=0;
    printf("lütfen kaç kez olmasını istiyorsanız o sayıyı giriniz ;  ");
    scanf("%f",&n);
    for(i=1;i!=n+1;i=i+1){
        sum=sum+1/(2*i);
    }
    printf("toplamınız =  %f",sum);
    return 0;
}