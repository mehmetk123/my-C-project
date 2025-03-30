#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int sayi;
    
    printf("sayi giriniz: ");
    scanf("%d",&sayi);

    if(sayi % 10 == 0) {
        printf("%d 10'a tam bolunuyor");

    }
    else{
        printf("%d 10'a tam bolunmuyor");
    } 
    
    
    
    
    
    return 0;
}