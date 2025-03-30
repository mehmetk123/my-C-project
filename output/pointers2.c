#include <stdio.h>
#include <stdlib.h>

int main() {
    
    /*char *takimlar[] = {"galatasaray", "arsenal"};
    //printf("%s", *takimlar);
    for(int i=0;takimlar[i] != '\0';i++){
        printf("%s ", *(takimlar + i));
    }*/

   char ulkeler[4][20];
   for(int i=0;i<4;i++){
    printf("%d. ulkeyi giriniz...\n", i+1);
    scanf("%s", ulkeler[i]);

   }
   //for(int i=0;i<4;i++){
   // printf("%s ", ulkeler[i]);

   //}
   char *ulkelerinadresleri[5];
   for(int i=0;i<4;i++){
    ulkelerinadresleri[i]=&ulkeler[i];

   }
   for(int i=0;i<4;i++){
    printf("%s ", *(ulkelerinadresleri + i));
   }



    
    
    
    return 0;
}