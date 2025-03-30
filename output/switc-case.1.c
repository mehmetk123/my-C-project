#include <stdio.h>
#include <stdlib.h>

int main() 
{
   /* int secim;
    
    printf("lutfen bir mevsim seciniz... ");
    printf("1.ilkbahar\n2.yaz\n3.sonbahar\n4.kis\n");
    scanf("%d", &secim); 

    switch(secim) {

     case 1:  printf("hava cok guzel"); ;break;
    case 2: printf("hava cok sicak"); break;
    case 3: printf("hava yagmurlu"); break;
    case 4: printf("hava karli"); break; 
    default: printf("lutfen 1 ve 4 arasinda secim yapiniz");
    
    
    } */

   int secim;

   printf("1-4 arasinda bir sayi giriniz:\n ");
   printf("1-İlkbahar\n2-Yaz\n3-sonbahar\n4-kis\n");
   scanf("%d", &secim);
   
   switch(secim) {

    case 1: printf("hava cok guzel\n"); break;
    case 2: printf("hava cok sicak\n"); break;
    case 3: printf("hava yagmurlu\n"); break;
    case 4: printf("hava karli\n"); break;
    default: printf("lutfen 1-4 arasinda sati giriniz\n"); 
   
    }
    
    
    
    
    
    
    
    
    return 0;
}