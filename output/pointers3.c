#include <stdio.h>
#include <stdlib.h>

/*void yildizbas(int *adet){
    for(int i=0;i<*adet;i++){
        printf("* ");
    }

}


int main(){
    int sayi;
    printf("Kac tane * basmak istiyorsunuz...\n");
    scanf("%d", &sayi);

    yildizbas(&sayi);
    
    
    
    int sayi1=5, *sayi1adres, sayi2=7, *sayi2adres;
    sayi1adres=&sayi1;
    sayi2adres=&sayi2;

    printf("%d", *sayi1adres);
    printf("%d", *sayi2adres);*/

    int main(){

        int x,y=0;
        int *a1,*a2=&y;

        a1=a2;

        x=++(*a2);

        (*a2) = (*a1) + x;

        printf("%d %d %d %d", x,y,*a1,*a2);

        
        
        
        
        return 0;
    }






    

    
    
 