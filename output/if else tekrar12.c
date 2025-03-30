#include <stdio.h>
#include <stdlib.h>

int main(){
   
   /*int gun,arabaTuru,arabaFiyati,toplamFiyat;

   printf("1-ekonomikAraba\n");
   printf("2-ortaSinifAraba\n");
   printf("3-lüksAraba\n");

   printf("hangi arabayi kiralamak istiyorsunuz...\n");
   scanf("%d",&arabaTuru);

   printf("kiralik gun sayisini giriniz...\n");
   scanf("%d",&gun);

   if(arabaTuru==1){
    arabaFiyati=150;

   }
   else if(arabaTuru==2){
    arabaFiyati=250;

   }
   else if(arabaTuru==3){
    arabaFiyati=400;

   }
   toplamFiyat=arabaFiyati*gun;
   printf("toplam fiyat %d",toplamFiyat);*/



   int gun,arabaTuru,arabaFiyati,toplamFiyat;

   printf("1-ekonomik araba");
   printf("2-ortasinifaraba");
   printf("3-luks araba");

   printf("hangi marka arabayi kiralamak istiyorsunuz...\n");
   scanf("%d",&arabaTuru);
   printf("kac gunlugune kiralamak istiyorsunuz...\n");
   scanf("%d",&gun);

   if(arabaTuru==1){
    arabaFiyati=150;
    
    }
    else if(arabaTuru==2){
        arabaFiyati=250;
    }
    else if(arabaTuru==3){
        arabaFiyati=400;
    }
    toplamFiyat=arabaFiyati*gun;
    printf("toplam fiyat %d",toplamFiyat);
    








   
   
   
   
   
   
   
   
    return 0;

}