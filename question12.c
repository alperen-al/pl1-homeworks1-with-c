#include <stdio.h>
int main(){
    int min, max , step , i;
    printf("please enter min , max numbers and steps :  \n");
    scanf("%d",&min);
    scanf("%d",&max);
    scanf("%d",&step);
    for(i=min;i<=max;i=i+step){
        printf("%d\n",i);
    }
    return 0;

}