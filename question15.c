#include <stdio.h>
int main(){
    int num,i;
    i=1;
    printf("please enter number  : ");
    scanf("%d",&num);
    for(i=num;i!=0;i=i-1){
    printf("%d\n",i);
    }
    return 0;
}