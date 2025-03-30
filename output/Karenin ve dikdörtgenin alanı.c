#include <stdio.h>
#include <stdlib.h>

int main() 

{
    int kareninBirkenari;

    printf("Karenin bir kenarini giriniz: ");
    scanf("%d", &kareninBirkenari);

    int dikdortgeninUzunkenari, dikdortgeninKisakenari;

    printf("dikdortgenin uzun kenarini giriniz: ");
    scanf ("%d", &dikdortgeninUzunkenari);
    printf("dikdortgenin kisa kenarini giriniz: ");
    scanf("%d", &dikdortgeninKisakenari);
    
    printf("Karenin alani: %d\n", kareninBirkenari*kareninBirkenari ); 
    printf("dikdörtgenin alani: %d", dikdortgeninUzunkenari*dikdortgeninKisakenari);
    
     return 0;


}