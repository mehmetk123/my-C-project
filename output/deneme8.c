#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int gun,arabaturu,toplamfiyat;

    printf("1-ekonomikaraba...\n");
    printf("2-ortasinifaraba...\n");
    printf("3-luksaraba...\n");
    
    printf("almak istediğiniz araba...\n");
    scanf("%d",&arabaturu);
    printf("alicağiniz arabanin suresini giriniz...\n");
    scanf("%d",&gun);

    if(arabaturu==1){
        toplamfiyat=gun*150;
        
    }
    else if(arabaturu==2){
        toplamfiyat=gun*250;

    }
    else if(arabaturu==3){
        toplamfiyat=gun*400;

    }
    printf("toplam fiyat %d",toplamfiyat);

    

    
    
    
    return 0;
}