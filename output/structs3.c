#include <stdio.h>
#include <stdlib.h>

struct calisanlar{
    char ad[50];
    char soyad[50];
    int isebaslangictarihi;
    int primsayisi;
    int maas;
    char cinsiyet[20];
};

void calisanbiligilerigir(struct calisanlar eleman){
    printf("%s %s %d %d %d %s", eleman.ad, eleman.soyad, eleman.isebaslangictarihi, eleman.primsayisi,eleman.maas,eleman.cinsiyet);
}


int main(){

    struct calisanlar calisan1;

    printf("lutfen calisan bilgilerini giriniz...\n");
    scanf("%s %s %d %d %d %s", calisan1.ad, calisan1.soyad,&calisan1.isebaslangictarihi,&calisan1.primsayisi,&calisan1.maas,calisan1.cinsiyet);
    
    //struct calisanlar *calisan1adres = &calisan1;

    printf("calisan bligileri\n");
    //printf("%s %s %d %d %d %s", calisan1.ad, calisan1.soyad,calisan1.isebaslangictarihi,calisan1.primsayisi,calisan1.maas,calisan1.cinsiyet);
    //printf("%s %s %d %d %d %s", (*calisan1adres).ad, (*calisan1adres).soyad, (*calisan1adres).isebaslangictarihi, (*calisan1adres).primsayisi, (*calisan1adres).maas, (*calisan1adres).cinsiyet);
    calisanbiligilerigir(calisan1);
    
    
    return 0;
}