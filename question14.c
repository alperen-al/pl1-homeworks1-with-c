#include <stdio.h>
int main(){
    double n,b;
    b=1;
    printf("please enter the number\n");
    scanf("%lf",&n);
    while (n!=1){
    b=b*n;
    n=n-1;
    }
    printf("the factorial is : %lf\n",b);
    return 0;
}