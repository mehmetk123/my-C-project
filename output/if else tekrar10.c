#include <stdio.h>
#include <stdlib.h>

int main(){

    /*int yil;
    char iscipozisyonu[20];
    float artismiktari,maas;

    printf("Kac yildir calisiyorsunuz...\n");
    scanf("%d",&yil);

    getchar();

    printf("hangi pozisyonda çalistiğinizi belirtir misiniz...\n");
    scanf("%s", iscipozisyonu);
   

    if(strcmp(iscipozisyonu, "personel")==0){
        maas= 5000;
    }
    else if(strcmp(iscipozisyonu, "uzman")==0){
        maas=7000;
    }
    else if(strcmp(iscipozisyonu, "yönetici")==0){
        maas=10000;
    }
    
    
    if(yil>=0 && yil<=2){
        printf("artis yok");
        
    }
    else if(yil>=3 && yil<=5){
        artismiktari= maas*0.1;
        printf("%f",artismiktari);
        printf("yeni maas %f", maas+artismiktari);
    }
    else if(yil>=6 && yil<=10){
        artismiktari=maas*0.2;
        printf("artis miktari %f",artismiktari);
        printf("yeni maas %f",maas+artismiktari);

    }
    else if(yil>=11){
        artismiktari=maas*0.3;
        printf("artis miktari %f",artismiktari);
        printf("yeni maas %f",maas+artismiktari);
    }*/




   int yil,isciPozisyonu,maas,maasArtisi,yenimaas;

   printf("1-personel\n");
   printf("2-uzman\n");
   printf("3-profesyonel\n");
   
   printf("hangi pozisyonda calisiyorsunuz...\n");
   scanf("%d",&isciPozisyonu);
   printf("kac yildir calisiyorsunuz...\n");
   scanf("%d",&yil);

   if(isciPozisyonu==1){
    maas=5000;

   }
   else if(isciPozisyonu==2){
    maas=7000;
   }
   else if(isciPozisyonu==3){
    maas=10000;

   }

   if(yil>=0 && yil<=2){
    printf("maas artisi yok\n");
   }
   else if(yil>=3 && yil<=5){
    maasArtisi=maas*0.1;
    printf("maas artisi %d",maasArtisi);
    yenimaas=maas+maasArtisi;
    printf("yeni maas %d",yenimaas);
   }
   else if(yil>=6 && yil<=10){
    maasArtisi=maas*0.2;
    printf("maas artisi %d",maasArtisi);
    yenimaas=maas+maasArtisi;
    printf("yeni maas %d",yenimaas);

   }
   else if(yil>=11){
    maasArtisi=maas*0.3;
    printf("maas artisi %d",maasArtisi);
    yenimaas=maas+maasArtisi;
    printf("yeni maas %d",yenimaas);
    }









    
    
    
    
    return 0;
}