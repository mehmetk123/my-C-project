#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*  int sayi1, sayi2, sayi3;

    printf("Sayilari giriniz: ");
    scanf("%d",&sayi1);
    scanf("%d",&sayi2);
    scanf("%d",&sayi3);
    
    float toplam, carpim, ort;
    
    toplam = sayi1+sayi2+sayi3;
    carpim = sayi1*sayi2*sayi3;
    ort = toplam/3;

    printf("sonuclar: %f %f %f", toplam, carpim, ort); */

    int sayi;

    printf("sayiyi giriniz: ");
    scanf("%d",&sayi);

    if(sayi % 2 == 0) {
        printf("sayi cifttir");

    }
    else {
        printf("sayi tektir");
        
    }

    


    
    
    
    
    
    
    return 0;
}