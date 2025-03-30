#include <stdio.h>
#include <stdlib.h>


int main() {
    
    /*int sayi1, sayi2, terimsayisi;
    int toplam = 0;
    int buyuk, kucuk;
    
    
    printf("lutfen iki sayiyi giriniz...\n");
    scanf("%d %d", &sayi1, &sayi2);

    terimsayisi = abs(sayi1 - sayi2) + 1;

    if(sayi1 > sayi2) {

        buyuk = sayi1;
        kucuk = sayi2;
        
        while(terimsayisi>0) {
            printf("%d\n", sayi2);
            toplam = toplam + sayi2;
            sayi2++;
            terimsayisi--;

        }
    }
    else if(sayi2 > sayi1) {
        
        buyuk = sayi2;
        kucuk = sayi1;
        
        while(terimsayisi>0) {
            printf("%d\n", sayi1);
            toplam = toplam + sayi1;
            sayi1++;
            terimsayisi--;


        }
    }
    printf("%d den %d ye kadar olan sayilarin toplami = %d", kucuk, buyuk, toplam);*/



    int sayi1, sayi2, terimsayisi;
    int toplam = 0;
    int buyuk, kucuk;
    

    printf("lutfen iki sayi giriniz...\n");
    scanf("%d %d", &sayi1, &sayi2);

    terimsayisi = abs(sayi1-sayi2) + 1;

    if(sayi1 > sayi2) {
        while(terimsayisi>0) {
            buyuk = sayi1;
            kucuk = sayi2;

        printf("%d\n", sayi2);

        toplam = toplam+sayi2;

        sayi2++;
        terimsayisi--;
       
       
        }

        
    }
    else if(sayi2 > sayi1) {
        while(terimsayisi>0) {
            buyuk = sayi2;
            kucuk = sayi1;
            
            
            printf("%d\n", sayi1);

            toplam = toplam+sayi1;

            sayi1++;
            terimsayisi--;
        }
    }

    
    
    printf("%d den %d ye kadar olan sayilarin toplami = %d", kucuk, buyuk, toplam);



    
    

    
    
    return 0;
}