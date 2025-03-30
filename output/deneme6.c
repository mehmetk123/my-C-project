#include <stdio.h>
#include <string.h>

int main(){
    
    int yas;
    char evlilikdurumu[15];

    printf("lutfen yasinizi giriniz...\n");
    scanf("%d",&yas);
    printf("lutfen evlilik durumunuzu belirtiniz...[Evet/Hayir]\n");
    scanf("%s",evlilikdurumu);

    if(yas<0){
        printf("lutfen dogru deger giriniz...\n");
    }
    else if(strcmp(evlilikdurumu, "evet") != 0 && strcmp(evlilikdurumu, "hayir") !=0){
        printf("lutfeb dogru karakterleri giriniz...\n");
    }
    

    if(yas>=18 && strcmp(evlilikdurumu, "evet")==0){
        printf("hosgeldiniz iceri girebilirsiniz");

    }
    else if(yas>=18 && strcmp(evlilikdurumu, "hayir")==0){
        printf("evli olmadiginiz icin giremezsiniz");

    }
    else{
        printf("18 yasindan kucukler giremez");
    }
    
    
    
    
    return 0;
}

