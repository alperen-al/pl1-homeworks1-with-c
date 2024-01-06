#include <stdio.h>
int main(){
    int a , b , n1, n2, n3 , x,y;
    int sonuc;
    a=1;
    b=1;
    x=1;
    while(a==1){
        while (b==1){
            printf("lütfen operasyonunuzu seçin : \n");
            printf("toplam = 1, çıkartma = 2 , bölme = 3 , çarpma = 4 , üs alma 5 , faktöriyel 6 : \n");
            scanf("%d",&n1);
            if (n1==1){
                printf("lütfen 1. ve 2. sayıyı giriniz\n");
                scanf("%d",&n2);
                scanf("%d",&n3);
                sonuc=n2+n3;
                printf("toplamınız = %d\n",sonuc);
                b=0;
            }
            else if (n1==2){
                printf("lütfen 1. ve 2. sayıyı giriniz\n");
                scanf("%d",&n2);
                scanf("%d",&n3);
                if(n2>n3){
                    sonuc=n2-n3;
                }
                else{
                    sonuc=n3-n2;
                }
                printf("sonucunuz = %d\n",sonuc);
                b=0;

            }
            else if (n1==3){
                printf("lütfen 1. ve 2. sayıyı giriniz 0 dışında \n");
                scanf("%d",&n2);
                scanf("%d",&n3);
                if(n2==0||n3==0){
                    printf("yanlış değer girdiniz tekrar giriniz \n");
                    break;
                }
                else {
                    if(n2>n3){
                        sonuc=n2/n3;
                    }
                    else{
                        sonuc=n3/n2;
                    }
                    printf("sonucunuz = %d\n",sonuc);
                    b=0;
                }
                
            }
            else if (n1==4){
                printf("lütfen 1. ve 2. sayıyı giriniz\n");
                scanf("%d",&n2);
                scanf("%d",&n3);
                sonuc=n2*n3;
                printf("sonucunuz =  %d\n",sonuc);
                b=0;
            }
            else if (n1==5){
                printf("lütfen önce tabanı sonra üssü giriniz : \n");
                scanf("%d",&n2);
                scanf("%d",&n3);
                sonuc=1;
                while(n3!=0){
                    sonuc=sonuc*n2;
                    n3--;
                }
                printf("sonucunuz = %d\n",sonuc);
                b=0;
            }
            else if(n1==6){
                printf("lütfen sayıyı giriniz:  \n");
                scanf("%d",&n2);
                sonuc=1;
                while (n2!=1){
                    sonuc=sonuc*n2;
                    n2=n2-1;
                }
                printf("sonucunuz = %d\n",sonuc);
                b=0;
            }

            else{
                printf("bu değerler dışında yanlış bir değer girdiniz tekrar değer giriniz \n");
                b=1;
            }
            
        }
        printf("tekrar denemek ister misiniz; evet = 1 hayır için rastgele bir sayıya basın \n ");
        scanf("%d",&y);
        if (y==1){
            a=1;
            b=1;
        }
        else{
            printf("görüşürüz dallama");
            a=0;
        }
    }
    return 0;
}