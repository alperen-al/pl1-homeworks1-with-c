#include <stdio.h>
int main (){
    int a,i=1;
    double sum;
    
    while (i<10){
        printf("lütfen değerinizi giriniz ,");
        scanf("%d",&a);
        sum=sum*a*i;
        i++;


    }
    printf("%lf",sum);
    return 0;
    
    

}