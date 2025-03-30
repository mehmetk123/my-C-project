#include <stdio.h>
#include <stdlib.h>

int AsalMiDegilMi(int sayi) {
    for(int carpan=2;carpan<sayi/2;carpan++) {
        if(sayi % carpan == 0) {
            return 0;
        }
        
        
        
    }
    return 1;

}

int main() {
    for(int i=0;i<1000;i++) {
        if(AsalMiDegilMi(i) ==1){
            printf("%d asaldir\n", i);

        }
    }
    
    
    /*int sayi;
    printf("lutfen bir sayi giriniz...\n");
    scanf("%d", &sayi);

    if(AsalMiDegilMi(sayi) == 1) {
        printf("%d asaldir", sayi);

    }
    else {
        printf("%d asal degildir", sayi);
    }*/
    
    
    
    
    return 0;
}