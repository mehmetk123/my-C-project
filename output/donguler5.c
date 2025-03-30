#include <stdio.h>
#include <stdlib.h>

int main() {

  int sayi;
  int buyuk = 0;
  char devam;

  //printf("lutfen bir sayi girinz...\n");
  //scanf("%d", &sayi);

  do {
    
      printf("lutfen bir sayi girinz...\n");
      scanf("%d", &sayi);
    
    if(sayi > buyuk) {
        buyuk = sayi;
        printf("yeni buyuk sayi %d\n", buyuk);

    }
    else {
      printf("buyuk sayi hala %d\n", buyuk);

    }
    
    printf("Devam etmek istiyor musunuz...\n");
    scanf(" %c", &devam);
  
  }while(devam == 'E' || devam == 'e');


    
    
    
    
    
    
    
    return 0;
}