#include <stdio.h>
#include <stdlib.h>

/*int topla(int *sayi1, int *sayi2){
    
    return *sayi1+*sayi2;
   

}

int main(){
    int sayi1, sayi2;
    printf("lutfen iki sayi giriniz...\n");
    scanf("%d %d", &sayi1, &sayi2);

    printf("%d", topla(&sayi1, &sayi2));
   

    
    
    
    
    return 0;

}*/

void topla(int *sayi1, int *sayi2){
    printf("%d %d", *sayi1+*sayi2);
}
int main(){
    int sayi1, sayi2;
    printf("lutfen iki sayi giriniz...\n");
    scanf("%d %d", &sayi1, &sayi2);

    topla(&sayi1, &sayi2);
}