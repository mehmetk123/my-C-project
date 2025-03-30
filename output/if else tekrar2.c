#include <stdio.h>
#include <stdlib.h>

int main(){

    int yas;

    printf("lutfen yasinizxi giriniz...\n");
    scanf("%d",&yas);

    if(yas>=0 && yas<=12){
        printf("cocuktur");
    }
    else if(yas>=13 && yas<=19){
        printf("genctir");

    }else if(yas>=20 && yas<=64){
        printf("yetiskindir");

    }else if(yas>=65){
        printf("yaslidir");
    }
    else {
        printf("lutfen pozitif sayilar giriniz...\n");
    }

    
    return 0;
}

