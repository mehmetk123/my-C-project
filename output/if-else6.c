#include <stdio.h>
#include <stdlib.h>

int main()
{
   int adet;
   float adetfiyati;
   
   printf("lutfen adet sayisi giriniz: ");
   scanf("%d", &adet);

   if(adet >= 400) {
    adetfiyati = 0.75;
    
   }
   else if(adet >= 300 && 400 > adet) {
    adetfiyati = 1.25;

   }
   else if(adet >= 200 && 300 > adet) {
    adetfiyati = 2;

   }
   else if(adet >= 100 && 200 > adet) {
    adetfiyati= 2.5;

   }
   else if(adet > 0 && 100 > adet) {
    adetfiyati = 3;

   }

   float toplamfiyat = adet*adetfiyati;
   int indirimlifiyat = toplamfiyat;
   float indirimtutari = toplamfiyat - indirimlifiyat;
   
   
   printf("toplam tutar: %f\nindirimli fiyat: %d\nindirim tutari: %f", toplamfiyat, indirimlifiyat, indirimtutari);

   
   
   
   
    

   
   

    


    
    
    
    
    
    
    return 0;
}

    
    
    
    
    
    
