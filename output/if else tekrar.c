#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int sayi;

    printf("lutfen bir sayi giriniz...\n");
    scanf("%d",&sayi);

    if(sayi>0){
        printf("%d pozitiftir",sayi);

    }else if(sayi<0){
        printf("%d sayi negatiftir",sayi);
    }
    else{
        printf("%d sayi sifirdir",sayi);
    }
    
    
    
    
    
    return 0;
}