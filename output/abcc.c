#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int sayi=0;
    int i=1;
    int toplam=0;
    printf("lutfen kaca kadar bastirmak istediginizi giriniz...\n");
    scanf("%d",&sayi); 
    
    while(sayi>0){

        
        printf("%d\n",i);
        toplam=+i;
        i++;
        sayi--;

    }
    printf("toplam %d",toplam);
    
    
    
    return 0;
}