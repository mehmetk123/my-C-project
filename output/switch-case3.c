#include <stdio.h>
#include <stdlib.h>

int main() {

    /* int secim;
    char mevsimsecimi;
    
    printf("ay secimini yapiniz: ");
    scanf("%d", &secim);

;
    switch(secim) {
        case 1: 
        printf("%d. ay Ocak ayi", secim); 
        mevsimsecimi = 'K';
        break;
        case 2: 
        printf("%d. ay Subat ayi", secim); 
        mevsimsecimi = 'K';
        break;
        case 3: 
        printf("%d. ay Mart ayi --> Ait oldugu mevsim %s", secim, "ilkbahar"); 
        mevsimsecimi = 'I';
        break;
        case 4: 
        printf("%d. ay Nisan ayi", secim); 
        mevsimsecimi = 'I';
        break;
        case 5: 
        printf("%d. ay Mayis ayi", secim); 
        mevsimsecimi = 'I';
        break;
        case 6: 
        printf("%d. ay Haziran ayi", secim); 
        mevsimsecimi = 'Y';
        break;
        case 7: 
        printf("%d. ay Temmuz ayi", secim); 
        mevsimsecimi = 'Y';
        break;
        case 8: 
        printf("%d. ay Agustos ayi", secim); 
        mevsimsecimi = 'Y';
        break;
        case 9: 
        printf("%d. ay Eylul ayi", secim); 
        mevsimsecimi = 'S';
        break;
        case 10: 
        printf("%d. ay Ekim ayi", secim); 
        mevsimsecimi = 'S';
        break;
        case 11: 
        printf("%d. ay Kasim ayi", secim); 
        mevsimsecimi = 'K';
        break;
        case 12: 
        printf("%d. ay Aralik ayi", secim); 
        mevsimsecimi = 'K';
        break;
        
    }
    printf("\n\n");
    
    if(mevsimsecimi == 'K') {
        printf("Kis mevsimidir");

    }
    else if(mevsimsecimi == 'I') {
        printf("İlkbahar mevsimidir");

    }
    else if(mevsimsecimi == 'Y') {
        printf("Yaz mevsimidir");

    }
    else if(mevsimsecimi == 'S') {
        printf("Sonbahar mevsimidir");

    } */







   int secim;
   char mevsimsecimi;

   printf("lutfen bir ay numarasi giriniz:\n");
   scanf("%d", &secim);

   switch(secim) {
    case 1: 
    printf("%d. ay Ocaktir", secim); 
    mevsimsecimi = 'K';
    break;
    case 2: 
    printf("%d. ay subattir", secim); 
    mevsimsecimi = 'K';
    break;
    case 3: 
    printf("%d. ay marttir", secim); 
    mevsimsecimi = 'I';
    break;
    case 4: 
    printf("%d. ay nisandir", secim); 
    mevsimsecimi = 'I';
    break;
    case 5: 
    printf("%d. ay mayistir", secim); 
    mevsimsecimi = 'I';
    break;
    case 6: 
    printf("%d. ay hazirandir", secim); 
    mevsimsecimi = 'Y';
    break;
    case 7: 
    printf("%d. ay temmuzdur", secim); 
    mevsimsecimi = 'Y';
    break;
    case 8: 
    printf("%d. ay agustostur", secim); 
    mevsimsecimi ='Y';
    break;
    case 9: 
    printf("%d. ay eyluldur", secim);
    mevsimsecimi = 'S';
    break;
    case 10: 
    printf("%d. ay ekimdir", secim); 
    mevsimsecimi = 'S';
    break;
    case 11: 
    printf("%d. ay kasimdir", secim); 
    mevsimsecimi = 'S';
    break;
    case 12: 
    printf("%d. ay araliktir", secim); 
    mevsimsecimi ='K';
    break;
    default: printf("lutfen 1-12 arasinda sayi giriniz");
    

   }
   
   printf("\n\n");
   
   if(mevsimsecimi == 'K') {
    printf("kis mevsimi");

   }
   else if(mevsimsecimi == 'S') {
    printf("sonbahar mevsimi");

   }
   else if(mevsimsecimi == 'I') {
    printf("ilkbahar mevsimi");

   }
   else if(mevsimsecimi == 'Y') {
    printf("yaz mevsimi");

   }
   else {
    printf("lutfen dogru harfleri giriniz");

   }

    
    
    return 0;
}