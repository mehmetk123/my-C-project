#include <stdio.h>
#include <stdlib.h>

int main(){
    
  /* int sayi,i;
    int asal=1;
    
    printf("lutfen bir sayi giriniz...\n");
    scanf("%d",&sayi);
    
    if(sayi<=1){
      asal=0;
        
    }

    for(i=2;i<=sayi/2;i++){
        if(sayi % i == 0){
            asal=0;
            break;
        }
    }

    if(asal == 1){
        printf("sayiniz asal sayidir");

    }
    else if(asal == 0){
        printf("sayiniz asal sayi degildir");
    }*/



   int i,sayi;
   int asal=1;

   printf("lutfen bir sayi giriniz...\n");
   scanf("%d",&sayi);

   if(sayi<=1){
    asal = 0;
   }
   for(i=2;i<=sayi/2;i++){
    if(sayi % i == 0){
        asal=0;
        break;

    }
   }
   if(asal=1){
    printf("sayi asaldir\n");

   }
   else if(asal==0){
    printf("sayiniz asal degildir...\n");

   }








   
    
    
    

    
    
    return 0;
}