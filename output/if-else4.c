#include <stdio.h>
#include <stdlib.h>

int main()
{
   char cinsiyet;

   printf("cinsiyet karakterini giriniz E/K/e/k: ");
   scanf("%c",&cinsiyet);

   if(cinsiyet == 'E' || cinsiyet == 'e') {
    printf("cinsiyetiniz erkektir");

   }
   else if(cinsiyet == 'K' || cinsiyet == 'k') {
    printf("cinsiyetiniz kadindir");

   }
   else {
    printf("lutfen sadece E veya K harflerini giriniz");
    
   }
   
   
   
   
   
   
    return 0;
}