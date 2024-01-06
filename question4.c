#include <stdio.h>

int main(){
    int a;
    printf("please enter temperature:  ");
    scanf("%d",&a);
    if (a<0){
    printf("below the feezing point.");
    }
    else if(a>0){
    printf("above the freezing point");
    }
    else
    printf("not below or above the freezing point");

    return 0;
}