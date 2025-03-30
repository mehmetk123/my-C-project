#include <stdio.h>
#include <stdlib.h>

void iscilerilistele(char isimlistesi[][30], int boyut) { 
    for(int i=0;i<boyut;i++) {
        printf("%s\n", isimlistesi[i]);
    }
}

int main() {

    char isimlistesi[5][30] = {"ali", "mehmet", "ahmet", "kerem", "kenan"};
    iscilerilistele(isimlistesi, 5);
    
    
    
    return 0;
}



