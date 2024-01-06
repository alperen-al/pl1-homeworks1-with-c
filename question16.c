#include <stdio.h>
//.Design an algorithm which generates even numbers between 1000 and 2000 and then prints them in the standard output. It should also print total sum
int main(){
    int sum , i ;
    sum=0;
    for(i=1000;i!=2001;i=i+1){
        if(i%2==0){
            printf("%d\n",i);
            sum=sum+i;
        }
    }
    printf("total sum is  %d\n",sum);
    return 0;
}