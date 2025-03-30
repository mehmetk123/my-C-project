#include <stdio.h>
#include <stdlib.h>

int main(){

    /*int i,toplam=0;

    while(i != 0){
        printf("lutfen istediginiz sayiyi giriniz...\n");
        scanf("%d",&i);
        if(i != 0){
            toplam = toplam + i;
            printf("toplam %d",toplam);
        }
    }
    printf("son toplam %d", toplam);

    int i=1;
    while(i<11){
    printf("1 x %d = %d\t",i,1*i);
    printf("2 x %d = %d\t",i,2*i);
    printf("3 x %d = %d\t",i,3*i);
    printf("4 x %d = %d\t",i,4*i);
    printf("5 x %d = %d\t",i,5*i);
    printf("6 x %d = %d\t",i,6*i);
    printf("7 x %d = %d\t",i,7*i);
    printf("8 x %d = %d\t",i,8*i);
    printf("9 x %d = %d\t",i,9*i);
    printf("10 x %d = %d\t",i,10*i);

    i++;
    
    }

   int i=1,sayi=0,toplam=0;

   printf("en son bastirmak istediginiz sayiyi giriniz...\n");
   scanf("%d",&sayi);

   while(sayi>0){
    printf("%d\n",i);
    toplam+=i;
    i++;
    sayi--;
   }
   printf("toplam %d",toplam);

   int sayi=0,faktoriyel=1;
   printf("faktoriyelini almak isrdiginiz sayiyi giriniz...\n");
   scanf("%d",&sayi);

   if(sayi==0){
    faktoriyel=faktoriyel+0;

   }
   else{
    while(sayi>0){
    printf("%d\n",sayi);
    faktoriyel=faktoriyel*sayi;
    sayi--;
   
   }
   
   }
   printf("faktoriyel %d",faktoriyel);

   int sayi,buyuk=0;
   char devam;

   do{
    printf("lutfen bir sayi giriniz...\n");
    scanf("%d",&sayi);

    if(sayi>buyuk){
        buyuk=sayi;
        printf("yeni buyuk sayimiz %d\n",buyuk);
        
    }
    else{
        printf("buyuk sayimiz hala %d\n",buyuk);
    }
    printf("devam etmek istiyor musunuz...\n");
    scanf(" %c",&devam);

   }while(devam == 'E' || devam == 'e');


   int sayi;
   int sdt=0;
   int basamaksayisi=0;
    printf("lutfen bir sayi giriniz...\n");
    scanf("%d",&sayi);
    int orjinalsayi = sayi;

   do{
    
    sdt=sdt+sayi % 10;
    basamaksayisi++;

    sayi = sayi/10;

   }while(sayi>0);

   printf("%d sayisinin sdt %d basamak sayisi %d dir ",orjinalsayi,sdt,basamaksayisi);*/


   int sayi1,sayi2,buyuk,kucuk,kalan;

   do{
    printf("lutfen iki sayi giriniz...\n");
    scanf("%d",&sayi1);
    scanf("%d",&sayi2);

   }while(sayi1<=0 || sayi2<=0);

   if(sayi1>sayi2){
    buyuk=sayi1;
    kucuk=sayi2;
   }
   else{
    kucuk=sayi1;
    buyuk=sayi2;
   }

   kalan = buyuk % kucuk;
   while(kalan != 0){
    if(kalan>kucuk){
        buyuk=kalan;
    }
    else{
        buyuk=kucuk;
        kucuk=kalan;
        kalan = buyuk % kucuk;
    }

   }
   

   printf("ebob(%d,%d)= %d",sayi1,sayi2,kucuk);

   





    
    







    return 0;
}