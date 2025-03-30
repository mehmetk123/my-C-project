#include <stdio.h>
#include <stdlib.h>

int main()

{
    int a, b, c ,x, sonuc;

    printf("a icin deger giriniz: ");
    scanf("%d", &a);
    printf("b icin deger giriniz: ");
    scanf("%d", &b);
    printf("c icin deger giriniz: ");
    scanf("%d", &c);
    printf("x icin deger giriniz: ");
    scanf("%d", &x);

    sonuc= a*x*x+b*x+c;

    printf("sonucu giriniz: %d", sonuc);
    
    
    
    return 0;
}