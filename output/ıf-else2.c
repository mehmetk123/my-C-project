#include <stdio.h>
#include <stdlib.h>

// 80 üstü çok iyi
// 60-80 iyi
// 40-60 orta 
// 20-40 kötü
// 0-20 çok kötü

int main() 
{
    int puan;
    
    printf("Puaninizi giriniz: ");
    scanf("%d",&puan);

    if(puan >= 80) {
        printf("Puanin çok iyi");

    }
    else if(puan >= 60 && puan < 80) {
        printf("Puanin iyi");
    
    }
    else if (puan >= 40 && puan < 60) {
        printf("Puanin orta");

    }
    else if(puan >= 20 && puan < 40){
        printf("Puanin kotu");

    }
    else {
        printf("Puanin cok kotu");
    }




    
    
    
    
    
    return 0;

}