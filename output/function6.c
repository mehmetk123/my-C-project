#include <stdio.h>
#include <stdlib.h>

int mukemmelsayi(int sayi){
    int toplam=1;
    if(sayi==1) {
        return 0;
    }
    for(int carpan=2;carpan<=sayi/2;carpan++){
        if(sayi % carpan == 0){
            toplam +=carpan;
        }
    }
    if(toplam == sayi){
        return 1;

    }
    else {
        return 0;
    }
}


int main() {
    for(int i=0;i<1000;i++){
        if(mukemmelsayi(i) == 1){
            printf("%d mukemmel sayidir\n", i);
        }

    }

    
    
    return 0;
}