#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int girilensayiAdeti=0,sayilar[100];
    float ortalama,toplam=0;

    printf("lutfen kac adet sayi girmek istediginizi giriniz...\n");
    scanf("%d",&girilensayiAdeti);

    while(girilensayiAdeti>100 || girilensayiAdeti<0){
        printf("lutfen 1-100 arasinda sayi giriniz...\n");
        printf("lutfen kac adet sayi girmek istediginizi giriniz...\n");
        scanf("%d",&girilensayiAdeti);

    }

    for(int i=0;i<girilensayiAdeti;i++){
        printf("lutfen %d. sayiyi giriniz\n",i+1);
        scanf("%d",&sayilar[i]);
        toplam+=sayilar[i];
    }
    ortalama= toplam/girilensayiAdeti;
    printf("sayilarin toplami %f\n",toplam);
    printf("sayilarin ortalamasi %f",ortalama);


    
    
    return 0;
}