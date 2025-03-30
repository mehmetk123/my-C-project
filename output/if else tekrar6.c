#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int kenar1,kenar2,kenar3;

    printf("lutfen kenarlari giriniz...\n");
    scanf("%d",&kenar1);
    scanf("%d",&kenar2);
    scanf("%d",&kenar3);

    
    if(kenar1 != kenar2 && kenar1 != kenar3 && kenar2 != kenar3){
        printf("Cesitkenar ucgendir...\n");

    }else if(kenar1 == kenar2 && kenar1 != kenar3 && kenar2 != kenar3){
        printf("ikizkenar ucgendir...\n");

    }else if(kenar1 == kenar2 && kenar1 == kenar3 && kenar2 == kenar3){
        printf("eskenar ucgendir...\n");

    }

    
    
    
    
    return 0;
}