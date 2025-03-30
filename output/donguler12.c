#include<stdio.h>
#include<stdlib.h>

int main() {
    
    int biletsayisi;
    char devam;

     printf("bilet almak istiyor musnuz...\n");
     scanf(" %c", &devam);
    do {
    
    //printf("bilet almak istiyor musnuz...\n");
    //scanf(" %c", &devam);

    if(devam == 'E' || devam == 'e') {
        biletsayisi--;
        printf("alinan bilet sayisi %d\nkalan bilet sayisi %d", 100-biletsayisi, biletsayisi);

    }
    else{
        printf("kullanici bilet istemiyor");

    }
    
    
    }while(biletsayisi>0);
    
    
    
    
    
    return 0;
}