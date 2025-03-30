#include <stdio.h>
#include <stdlib.h>

int main(){
    
   /* int sayi=1;

    while(sayi<=100){
        if(sayi % 2 == 0){
            printf("%d\n",sayi);
            
        }
        sayi++;
    }*/

   int sayi,i=1,toplam=0;

   printf("lutfen bir sayi giriniz...\n");
   scanf("%d",&sayi);

   while(i<=sayi){
    toplam=i+toplam;
    i++;

   }
   printf("sayilarin toplami %d",toplam);
    
    
    
    
    return 0;
}