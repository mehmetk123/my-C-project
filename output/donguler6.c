#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int sayi;
    int basamaksayisi = 0;
    int sdt = 0;
    int orjinalsayi;
    char devam = 'E';
    
    while(devam == 'E' || devam == 'e') {
    if(sayi > 0) {
    printf("lutfen bir sayi giriniz...\n");
    scanf("%d", &sayi);
    orjinalsayi = sayi;
   
    do{
        sdt += sayi % 10;
        basamaksayisi++;

        sayi = sayi / 10;

    }while(sayi>0);

    printf("%d %d basamaklidir ve sayi degerleri toplami %d\n", orjinalsayi, basamaksayisi, sdt);
    basamaksayisi = 0;
    sdt = 0;
    
    printf("devam etmek istiyor musunuz...\n");
    scanf(" %c", &devam);
 
  
  
    }
    else {
        printf("lutfen pozitif bir sayi giriniz...\n");
    }

    
    }
    
    

    
    return 0;
}