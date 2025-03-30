#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int urunsayisi, toplamtutar=0, indirimlifiyat=0, urunfiyati;

    printf("urun sayisini giriniz...\n");
    scanf("%d",&urunsayisi);
    printf("urunun fiyatini giriniz...\n");
    scanf("%d",&urunfiyati);
    toplamtutar=urunfiyati*urunsayisi;

    if(urunsayisi>5 && toplamtutar>1000){
        indirimlifiyat=toplamtutar-(toplamtutar*0.2);
        printf("indirimli fiyat %d", indirimlifiyat);
        
    }
    else if(urunsayisi>5 && toplamtutar>500 || toplamtutar<1000){
        indirimlifiyat=toplamtutar-(toplamtutar*0.1);
        printf("indirimli fiyat %d", indirimlifiyat);

    }
    else if(urunsayisi<5 && toplamtutar<500){
        printf("indirim yok");

    }
    else{
        indirimlifiyat=toplamtutar-toplamtutar*0.05;
        printf("indirimli fiyat %d", indirimlifiyat);
    }
    
    
    
    return 0;
}