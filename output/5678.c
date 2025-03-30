#include <stdio.h>
#include <stdlib.h>

void isimleriListele(char isciListesi[][30], int boyut){
    for(int i=0;i<boyut;i++){
        printf("%s\n",isciListesi[i]);
    }
}

int main(){

    char isciListesi[5][30]={"ali","mehmet","kenan","yavuz","ahmet"};
    isimleriListele(isciListesi,5);
    
    
    
    return 0;
}