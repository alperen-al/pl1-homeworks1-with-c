#include <stdio.h>

int main(){
    int a;
    printf("please enter a number:  ");
    scanf("%d",&a);
    if (a==0){
        printf("the number is not even or odd.");
    }
    else if (a%2==0){
        printf("the number is even. ");
    }
    else
    printf("the number is odd.");
    return 0;
}