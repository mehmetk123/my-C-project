#include <stdio.h>
#include <stdlib.h>

int main() {
    
    /*int sayi;
    int faktoriyel = 1;

    printf("faktoriyelini almak istediginiz sayiyi giriniz...\n");
    scanf("%d", &sayi);

    if(sayi == 0) {
        printf("sayi! = 1");

    }
    else
        while(sayi>0) {
         
         faktoriyel = faktoriyel*sayi;
         sayi--;
        

    }*/



   /*int sayi;
   int faktoriyel = 1;
   //int orjinalsayi = sayi;
   
   printf("lutfen fatoriyelini almak istediginiz sayiyi sayiyi giriniz...\n");
   scanf("%d", &sayi);
   //int orjinalsayi = sayi;
   
   while(sayi>=0) {
    if(sayi == 0) {
        faktoriyel = faktoriyel*1;
    
    }
    else {
        //printf("%d", sayi);

        faktoriyel = faktoriyel*sayi;

       
    }
    sayi--;
    
   
   }
   printf("%d nin faktoriyeli %d", sayi, faktoriyel);*/


   int sayi, faktoriyel = 1;

   printf("lutfen bir sayi giriniz...\n");
   scanf("%d", &sayi);

   int orjinalsayi = sayi;


   while(sayi>0) {

    faktoriyel = faktoriyel*sayi;
    sayi--;

   }
   printf("%d nin faktoriyeli %d", orjinalsayi, faktoriyel);
   
   

 
   
   



   
 
    
    
    
    
    
    
    
    return 0;
}