#include <stdio.h>
#include <stdlib.h>

int main(){

/*int notlar[]= {70,80,85,90,95};
int toplam=0;
int n= sizeof(notlar) / sizeof(notlar[0]);

for(int i=0;i<n;i++){
    toplam=toplam+notlar[i];
}
float ortalama= toplam/n;

printf("ortalama %f",ortalama);*/


int sayilar[]= {-3,5,-1,7,0,2,-4};

int toplam=0;
int n= sizeof(sayilar) / sizeof(sayilar[0]);

for(int i=0;i<n;i++){
    if(sayilar[i]>0){
        toplam=toplam+sayilar[i];
    }
}

printf("pozitif sayilarin toplami %d",toplam);


return 0;

}

