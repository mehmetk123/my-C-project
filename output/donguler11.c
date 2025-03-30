#include <stdio.h>
#include <stdlib.h>

int main() {
    
    /*int i, j;

    for(i=0;i<=6;i++) {
        for(j=0;j<=i;j++) {
            printf("*");

        }
        printf("\n");
    }*/

   int biletsayisi = 100;
   char devam;
   int alinanbiletsayisi;

   do{
    printf("bilet almak istiyor musunuz...\n");
    scanf(" %c", &devam);
    
    if(devam == 'E' || devam == 'e') {
        printf("kac tane bilet istiyorsunuz...\n");
        scanf("%d", &alinanbiletsayisi);
        
        biletsayisi = biletsayisi - alinanbiletsayisi;

        printf("alinan bilet sayisi %d\n", alinanbiletsayisi);
        printf("kalan bilet sayisi %d\n", 100-alinanbiletsayisi);

    }
    else {
        printf("kullanici bilet almak istemiyor");
    }
   
   }while(biletsayisi>0);

 

   return 0;
} 