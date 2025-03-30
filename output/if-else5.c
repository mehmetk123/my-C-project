#include <stdio.h>
#include <stdlib.h>

int main()
{
   char cinsiyet;
   int boy;
   printf("cinsiyet karakterini giriniz E/K/e/k: ");
   scanf("%c", &cinsiyet);

   printf("cm cinsinden boyu giriniz: ");
   scanf("%d", &boy);

   if((cinsiyet == 'E' || cinsiyet == 'e') && boy > 170) { 
    printf("tebrikler mulakati gectiniz");

   }
   else if((cinsiyet == 'K' || cinsiyet == 'k') && boy >160) {
    printf("tebrikler mulakati gectiniz: ");

   }  
   else{
    printf("uzgunuz mulakati gecemediniz");

   }

    
    
    
    return 0;
}