#include <stdio.h>
#include <stdlib.h>

int main(){

   int miktar, bakiye=1000;
   int islem;
   
   printf("1-(para yatirma)");
   printf("2-(para cekme)");
   printf("Lutfen bir secim yapiniz...\n");
   scanf("%d",&islem);

   if(islem==2){
      printf("lutfen cekmek istediğiniz miktari giriniz...\n");
      scanf("%d",&miktar);

      if(miktar>bakiye){
         printf("yetersiz bakiye");

      }
      else{
         bakiye=bakiye-miktar;
         printf("yeni bakiyeniz %d",bakiye);
      }
   }


   else if(islem==1){
      printf("lutfen yatirmak istediğiniz miktari giriniz...\n");
      scanf("%d", &miktar);
      bakiye=bakiye+miktar;
      printf("yeni bakiyeniz %d", bakiye);
   }





   

   




    return 0;
}