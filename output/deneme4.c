#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int bakiye=1000, miktar,islem;
    

    printf("1-(para cekme)");
    printf("2-(para yatirma)");
    printf("3-(hesap sorgulama)");
    printf("4-(islem iptali)...");

    printf("lutfen yapmak istediğiniz islemi seciniz...\n");
    scanf("%d",&islem);

    if(islem==1){
        printf("cekmek istediginiz miktari giriniz...\n");
        scanf("%d", &miktar);
        if(miktar>bakiye){
            printf("yeterli bakiyeniz yoktur");
        }
        else{
            bakiye=bakiye-miktar;
            printf("yeni bakiyeniz %d",bakiye);
        }


    }
    else if(islem==2){
        printf("yatirmak istediginiz miktari giriniz...\n");
        scanf("%d",&miktar);
        bakiye=bakiye+miktar;
        printf("yeni bakiyeniz %d", bakiye);
    }
    else if(islem==3){
        printf("mevcut bakiyeniz %d",bakiye);

    }
    else if(islem==4){
        printf("isleminiz iptal edilmistir, kartinizi aliniz...");
    }
    
    
    
    
    return 0;
}