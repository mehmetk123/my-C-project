#include <stdio.h>
#include <stdlib.h>

int main() {
    /*int sayi;

    printf("lutfen bir sayi giriniz...\n");
    scanf("%d", &sayi);
    
    int *sayininadresi;
    sayininadresi = &sayi;
    
    
    printf("%d %x", *sayininadresi, sayininadresi);*/

    int sayi=10, *sayininadresi;
    sayininadresi=&sayi;
    float kesirlisayi=7.6, *kesirlisayininadresi;
    kesirlisayininadresi=&kesirlisayi;
    char karakter='m', *karakterinadresi;
    karakterinadresi=&karakter;
    double buyukkesirlisayi=11.9, *buyukkesirlisayininadresi;
    buyukkesirlisayininadresi=&buyukkesirlisayi;

    printf("%d %x %x\n",*sayininadresi, sayininadresi, sayininadresi + 1);
    printf("%f %x %x\n", *kesirlisayininadresi, kesirlisayininadresi, kesirlisayininadresi + 1);
    printf("%c %x %x\n", *karakterinadresi, karakterinadresi, karakterinadresi + 1);
    printf("%lf %x %x", *buyukkesirlisayininadresi, buyukkesirlisayininadresi, buyukkesirlisayininadresi + 1);
    
    
    
    
    
    return 0;
}