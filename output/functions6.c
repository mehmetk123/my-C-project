#include <stdio.h>
#include <stdlib.h>

int ortalamahesaplama(int ortalama) {
    if(ortalama >= 90){
        return 4;
    }
    else if(ortalama >= 80){
        return 3;
    }
    else if(ortalama >= 70){
        return 2;
    }
    else if(ortalama >= 60){
        return 1;
    }
    else {
        return 0;
    }
    
}

int main() {
    srand(time(0));
    
    for(int i=1;i<6;i++){
        int ortalama = 100 - (i*10) + rand() % 10;
        printf("%d. ogrencinin ortalamasi %d\n", i, ortalama);
        printf("%d ortalamali ogrencinin 4 notluk sistemdeki notu %d dir.\n", ortalama, ortalamahesaplama(ortalama));
    }
    
    
    
    return 0;
}