#include <stdio.h>
int main(){
    int num1,num2,num3;
    printf("please enter three number :  ");
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);
    if(num1>num2 && num1>num3){
        printf("the biggest number is : %d",num1);
    }
    if(num2>num1&&num2>num3){
        printf("the biggest number is : %d",num2);
    }
    if(num3>num1&&num3>num2){
        printf("the biggest number is : %d",num3);
    }
        
    return 0;
}