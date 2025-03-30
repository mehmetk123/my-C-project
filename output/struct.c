#include <stdio.h>
#include <stdlib.h>

struct araba {
    int modeli;
    int km;
    int muayenetarihi;
    char yakitturu[10];
    char takas[4];


}musteri1;


int main(){
    musteri1.modeli=2015;
    musteri1.km=193.000;
    musteri1.muayenetarihi=2025;
    strcpy(musteri1.yakitturu, "dizel");
    strcpy(musteri1.takas, "yok");

    printf("%d %d %d %s %s", musteri1.modeli, musteri1.km, musteri1.muayenetarihi, musteri1.yakitturu, musteri1.takas);
    
    
    
    
    return 0;
}