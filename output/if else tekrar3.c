#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int sayi;

    printf("lutfen bir sayi giriniz...\n");
    scanf("%d",&sayi);

    if(sayi%2==0){
        printf("sayi cifttir");

    }
    else{
        printf("sayi tektir");
    }
    
    
    
    return 0;
}