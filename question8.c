#include <stdio.h>
int main(){
    int a , b , sum;
    printf("please enter first number :  ");
    scanf("%d",&a);
    printf("please enter second number :   ");
    scanf("%d",&b);
    sum = a+b ;
    printf("summarize is : %d\n",sum);
    if (a>b) {
        while (b!=a){
        b=b+1;
        sum=sum+b ;
        printf("summarize is ;%d\n",sum);
        }
    }
    if (b>a){
        while(a!=b){
        a=a+1;
        sum=sum+a;
        printf("summarize is : %d\n",sum);
        }
    }
    return 0; 
}