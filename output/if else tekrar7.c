#include <stdio.h>
#include <stdlib.h>

int main(){

    int ort,vizenot,finalnot;

    printf("lutfen vize notunu giriniz...\n");
    scanf("%d",&vizenot);
    
    printf("lutfen final notunu giriniz...\n");
    scanf("%d",&finalnot);

    ort= vizenot*0.4+finalnot*0.6;

    if(ort>=50){
        printf("tebrikler gectiniz...\n");

    }
    else if(finalnot<50 || ort<50){
        printf("maalesef kaldiniz...\n");
    }



    
    
    
    
    return 0;
}