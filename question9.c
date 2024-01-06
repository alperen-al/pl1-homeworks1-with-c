#include <stdio.h>
//Write an algorithm and draw a flowchart to print all numbers between LOW and HIGH that are divisible by NUMBER.
int main(){
    int max,min,number,a;
    a=1;
    while(a==1)
    {
        printf("please enter min number  : \n");
        scanf("%d",&min);
        printf("please enter max number  : \n");
        scanf("%d",&max);
        printf("the numbers will divsied by  : \n");
        scanf("%d",&number);
      if(min<max && number!=0 ){
        a=0;
        while(min!=max+1){
            if(min%number==0){
                printf("%d\n",min);
            }
            min=min+1;
        }
      }
      else {
      printf("bro you entered wrong numbers please enter new numbers  ,   ");
      }
    }
    return 0;
}