#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    int dogrusayi,tahminisayi;

    srand(time(NULL));

    dogrusayi= rand()%10+1;

    printf("lutfen 1 ve 10 arasinda bir sayi tahmin ediniz...\n");
    scanf("%d",&tahminisayi);

    if(tahminisayi==dogrusayi){
        printf("tebrikler dogru sayi");

    }
    else{
        printf("maalesef dogru sayi degil. Dogru sayi: %d", dogrusayi);
    }


    
    
    
    
    return 0;
}