#include <stdio.h>
#include <stdlib.h>

int main(){

    /*int bakiye=1000,islem,miktar;

    printf("1-para cekme\n");
    printf("2-para yatirma\n");
    printf("3-bakiye sorgulama\n");
    printf("4-islem iptali\n");

    printf("lutfen yapmak istediginiz islemi seciniz...\n");
    scanf("%d",&islem);

    if(islem==1){
        printf("lutfen cekmek istediginiz miktari giriniz...\n");
        scanf("%d",&miktar);

        if(miktar>bakiye){
            printf("yeterli bakiyeniz yoktur...\n");
        }
        else{
            printf("hesabinizda kalan miktar %d",bakiye-miktar);

        }
        
    }
    else if(islem==2){
        printf("yatirmak istediginiz miktari giriniz...\n");
        scanf("%d",&miktar);
        printf("hesabinizdaki toplam para %d",bakiye+miktar);

    }
    else if(islem==3){
        printf("hesabinizdaki para %d",bakiye);
    }
    else if(islem==4){
        return 0;
        
    }*/



   int bakiye=1000,islem,miktar;

   printf("1-para cekme\n");
   printf("para yatirma\n");
   printf("3-bakiye sorgulama\n");
   printf("4-işlem iptali\n");

   printf("hangi islemi secmek istiyorsunuz...\n");
   scanf("%d",&islem);
   
   if(islem==1){
    printf("cekmek istediginiz miktari giriniz...\n");
    scanf("%d",&miktar);
    if(miktar>bakiye){
        printf("yetersiz bakiye\n");

    }
    else{
        printf("kalan bakiye %d",bakiye-miktar);
    }

   }
   else if(islem==2){
    printf("yatirmak istediginiz miktari giriniz...\n");
    scanf("%d",&miktar);
    printf("yeni bakiyeniz %d",bakiye+miktar);
   }
   else if(islem==3){
    printf("guncel bakiyeniz %d",bakiye);
   }
   else if(islem==4){
    return 0;
   }
   
   

    
 
    
    
    
    
    return 0;
}