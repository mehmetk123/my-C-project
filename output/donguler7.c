#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int sayi1, sayi2;
    int buyuk, kucuk;
    int kalan;
    int orjinalbuyuk, orjinalkucuk;

    do{
    printf("lutfen iki sayi giriniz...\n");
    scanf("%d %d", &sayi1, &sayi2);

    }while(sayi1 <= 0 || sayi2 <= 0);

    if(sayi1 > sayi2) {
        buyuk = sayi1;
        kucuk = sayi2;
        orjinalbuyuk = sayi1;
        orjinalkucuk = sayi2;
        
    }
    else {
        buyuk = sayi2;
        kucuk = sayi1;
        orjinalbuyuk = sayi2;
        orjinalkucuk = sayi1;
    }
    kalan = buyuk % kucuk;

    while(kalan != 0) {
        if(kucuk > kalan) {
            buyuk = kucuk;
            kucuk = kalan;

        }
        else {
            buyuk = kalan;
            kucuk = kucuk;
        }
    
        kalan = buyuk % kucuk;
    }

   printf("%d ve %d nin ebobu %d dir", orjinalkucuk, orjinalbuyuk, kucuk);



    
    
    
    
    return 0;
}