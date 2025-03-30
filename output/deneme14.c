#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int sayi,i;

    do{
        printf("lutfen bir sayi giriniz....\n");
        scanf("%d",&sayi);
        if(sayi==1){
            printf("asal degildir...\n");
        }
        else{
            i=2;
            while(i<sayi){
                if(sayi % i == 0){
                    printf("%d asal degildir...\n",sayi);
                    return 0;

                }
                i++;
            }
            printf("%d asal sayidir...\n",sayi);
        }


        }while(sayi != 0);


    
    
    
    return 0;
}