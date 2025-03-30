#include <stdio.h>
#include <stdlib.h>

int main(){

    int sayilar[]= {1,2,3,4,5,6,7,8,9,10};
    int toplam=0;
    int n=sizeof(sayilar) / sizeof(sayilar[0]);

    for(int i=0;i<n;i++){
        if(sayilar[i] % 2 != 0){
            toplam= toplam+(sayilar[i]*sayilar[i]);
        }

    }
    printf("teklerin kareleri toplami %d",toplam);



    
    
  
    
    
    
    
    
    return 0;
}