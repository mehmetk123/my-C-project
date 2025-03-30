#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int i,sayi;

    printf("lutfen bir sayi giriniz...\n");
    scanf("%d",&sayi);

    if(sayi<=1){
        printf("%d asal sayi degildir...\n",sayi);

    }
    else{
        i=2;
        while(i < sayi){
            
            if(sayi % i == 0){
                printf("%d asal sayi degildir",sayi);
                return 0;
            }
            i++;
        }
        printf("%d asal sayidir...\n",sayi);
    }

    
    
    
    
    return 0;
}