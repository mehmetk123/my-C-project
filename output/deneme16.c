#include <stdio.h>
#include <stdlib.h>

int main(){
    int sayi,ort,toplam=0,sayiadedi;
    do{
        printf("kac sayi gireceksiniz...\n");
        scanf("%d",&sayiadedi);
        
        while(sayi>0){
            printf("lutfen bir sayi giriniz...\n");
            scanf("%d",&sayi);

            toplam=toplam+sayi;

        }
    
    }while(sayi != 0);

    ort=toplam/sayiadedi;
    printf("ortalama %d dir",ort);
    
    
    
    
    return 0;
}