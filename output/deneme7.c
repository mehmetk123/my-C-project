#include <stdio.h>
#include <string.h>

int main(){
    int yil,maas,artismiktari,yenimaas;
    char iscipozisyonu[25];

    printf("kac yildir calisiyorsunuz...\n");
    scanf("%d",&yil);
    printf("hangi pozisyonda calisiyorsunuz...\n");
    scanf("%s",iscipozisyonu);

    if(strcmp(iscipozisyonu, "personel")==0){
        maas=5000;
    
    }
    else if(strcmp(iscipozisyonu, "uzman")==0){
        maas=7000;
    }
    else if(strcmp(iscipozisyonu, "yönetici")==0){
        maas=10000;

    }

    if(yil>0 && yil<=2){
        printf("artis yok");

    }
    else if(yil>=3 && yil<=5){
        artismiktari=maas*0.1;
        //printf("artismiktari %d",artismiktari);

    }
    else if(yil>=6 && yil<=10){
        artismiktari=maas*0.2;
        //printf("artismiktari %d",artismiktari);

    }
    else if(yil>=11){
        artismiktari=maas*0.3;
        //printf("artismiktari %d",artismiktari);

    }
    printf("artismiktari %d",artismiktari);
    yenimaas=artismiktari+maas;
    printf("yeni maas %d",yenimaas);
    
    
    
    
    return 0;
}