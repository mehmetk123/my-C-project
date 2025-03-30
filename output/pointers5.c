#include <stdio.h>
#include <stdlib.h>

void sayilaridegistir(int *sayi1, int *sayi2){
    
    int temp = *sayi1;
    *sayi1=*sayi2;
    *sayi2=temp;
}


int main(){
    
    int sayi1,sayi2;

    printf("Degisitirmek istediginiz iki sayiyi giriniz...\n");
    scanf("%d %d",&sayi1,&sayi2);
    printf("%d %d\n", sayi1,sayi2);

    sayilaridegistir(&sayi1,&sayi2);
    printf("%d %d", sayi1, sayi2);


    
    
    
    return 0;
}