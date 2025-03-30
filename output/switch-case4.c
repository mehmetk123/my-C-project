#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    /*int secim;
    float sayi1, sayi2;

    menu: printf("lutfen yapmak istediginiz islemi seciniz\n");
    scanf("%d",&secim);
    printf("1.toplama\n2.cikarma\n3.carpma\n4.karekok\n5.usalma\n");
    printf("lutfen cikmak icin -1 degeri giriniz\n");
    
    if(secim == -1) {
        goto cikis;

    }
    
    if(secim >= 1 && 7 > secim) {
    printf("Hesaplamak istediğiniz sayilari giriniz:\n");
    scanf("%f %f", &sayi1, &sayi2); 
    
    }
    
    switch(secim) {
        
        case 1: 
        printf("toplama: %f", sayi1+sayi2); 
        break;
        case 2: 
        printf("cikarma: %f", sayi1-sayi2); 
        break;
        case 3: 
        printf("carpim: %f", sayi1*sayi2); 
        break;
        case 4: 
        printf("karekok %f = %f\nkarekok %f = %f", sayi1, sqrt(sayi1), sayi2, sqrt(sayi2)); 
        break;
        case 5: 
        printf("%f uzeri %f = %f", sayi1, sayi2, pow(sayi1, sayi2)); 
        break;
        case 6: 
        printf("bolme: %f", sayi1/sayi2); 
        break;
       
        default: printf("lutfen 1-6 arasinda rakam giriniz"); 

    }
    
    
    
    
    
    
    //goto menu;
    //cikis: */

    int secim;

    float sayi1, sayi2;

    printf("lutfen bir secim yapiniz...\n");
    scanf("%d", &secim);
    
    
   if(secim >= 1 && secim < 7) {
         printf("lutfen iki sayi giriniz...\n");
         scanf("%f %f", &sayi1, &sayi2);
    }
    
    
    switch(secim) {
        case 1 : 
        printf("toplam: %f", sayi1+sayi2); 
        break;
        case 2: 
        printf("fark: %f", sayi1 - sayi2); 
        break;
        case 3 : 
        printf("carpim: %f", sayi1*sayi2); 
        break;
        case 4 : 
        printf("bolum: %f", sayi1/sayi2); 
        break;
        case 5 : 
        printf("karekok %f = %f\nkarekok %f = %f", sayi1, sqrt(sayi1), sayi2, sqrt(sayi2)); 
        break;
        case 6 : 
        printf("%f ussu %f = %f", sayi1, sayi2, pow(sayi1, sayi2)); 
        break;
        default : printf("lutfen 1-6 arasinda sayi giriniz"); 

    }


 























    
return 0;
}