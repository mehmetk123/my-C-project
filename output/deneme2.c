#include <stdio.h>
#include <stdlib.h>

int main(){

    int aracinturu, aracinsuresi, toplamfiyat;

    printf("1-Ekonomikarac(150tl)");
    printf("2-Ortasinifarac(250tl)");
    printf("3-luksarac(400tl)");

    printf("secmek istediğiniz aracin turu nedir");
    scanf("%d",&aracinturu);
    printf("secmek istedğiniz aracin kiralik gün sayisini giriniz...\n");
    scanf("%d",&aracinsuresi);

    if(aracinturu==1){
        toplamfiyat=aracinsuresi*150;
        printf("toplam fiyat %d",toplamfiyat);
        
    }
    else if(aracinturu=2){
        toplamfiyat=aracinsuresi*250;
        printf("toplam fiyat %d",toplamfiyat);

    }
    else if(aracinturu==3){
        toplamfiyat==aracinsuresi*400;
        printf("toplam fiyat %d",toplamfiyat);


    }
    
 
    
    
    
    
    
    return 0;
}