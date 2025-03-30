#include <stdio.h>
#include <stdlib.h>



int main()
{
    
int sayi;
    float kesirlisayi;
    double kesirlisayi2;
    char karakter;
    char karakterdizisi[7];
     
     printf("Girilen sayi: ");
     scanf("%d", &sayi);
     printf("Girilen kesirli sayi: ");
     scanf("%f", &kesirlisayi);
     printf("Girilen kesirli sayi2: ");
     scanf("%lf", &kesirlisayi2);
     printf("Girilen karakter: ");
     scanf(" %c", &karakter);
     printf("Girilen karakter dizisi: ");
     scanf("%s", &karakterdizisi);

     printf("%d  %f  %lf  %c  %s", sayi, kesirlisayi, kesirlisayi2, karakter, karakterdizisi);

return 0;
}










