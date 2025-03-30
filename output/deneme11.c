#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int sayi,i,faktoryel=1;

    printf("faktoriyelini almak istediginiz sayiyi giriniz...\n");
    scanf("%d",&sayi);
    
    i=1;
    while(i<=sayi){
        faktoryel=faktoryel*i;
        i++;
       
    }
    printf("faktoryel %d",faktoryel);
    
    
    
    
    
    return 0;
}