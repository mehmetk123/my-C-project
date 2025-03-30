#include <stdio.h>
#include <stdlib.h>

int dizininuzunlugunubul(char *dizininadresi){
    int dizininuzunlugu = 0;
    for(int i=0;i<dizininadresi[i] != '\0'; i++){
        dizininuzunlugu++;
    }
    printf("dizinin uzunlugu %d", dizininuzunlugu);
    

}

int main(){
    char dizi[] = "Galatasaray";
    dizininuzunlugunubul(&dizi);
    
    
    
    
    return 0;
}

