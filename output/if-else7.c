#include <stdio.h>
#include <stdlib.h>

int main ()
{
  /*int buyuksayi, kucuksayi;

  printf("buyuksayi ve kucuksayiyi giriniz: ");
  scanf("%d %d", &buyuksayi, &kucuksayi);

  if(buyuksayi % kucuksayi == 0) {
    printf("%d %d'nin carpanidir", kucuksayi, buyuksayi);

  }
  else{
    printf("%d %d'nin carpani degildir", kucuksayi, buyuksayi);

  } */

  int sayi1,sayi2;

  printf("sayi1 ve sayi2 yi giriniz: ");
  scanf("%d %d", &sayi1, &sayi2);
  
  if(sayi1 >= sayi2 &&  sayi1 % sayi2 == 0) {
    printf("sayi2 sayi1 in carpanidir");

  }
  else {
    printf("sayi2 sayi1 in carpani degildir");

  }
    
    
    
    
    return 0;
}