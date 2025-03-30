#include <stdio.h>
#include <string.h>

int main(){
    int yas;
    char evlilikdurumu[10];

    printf("lutfen yasinizi giriniz...\n");
    scanf("%d",&yas);

    printf("medeni durumunuz nedir");
    scanf("%s",evlilikdurumu);
        
        
    if(yas<0){
        printf("lutfen biligileri doğru giriniz...");
    }
    if(strcmp(evlilikdurumu, "evet") !=0 && strcmp(evlilikdurumu, "hayir") !=0){
        printf("evlilik bilgilerini dogru giriniz...");
    }

    if(yas>=18){

        if(strcmp(evlilikdurumu, "evet")==0){
            printf("giris yapabilir");

        }
        else if(strcmp(evlilikdurumu, "hayir")==0){
            printf("giriş yapamaz, evli degil");
        }
        

    }
    else{
        printf("giris yapamaz");

    }

    

    return 0;
}