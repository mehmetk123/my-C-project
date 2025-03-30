#include <stdio.h>
#include <stdlib.h>

int main(){

/*char ulkeismi[8];

for(int i=0;i<7;i++){
    printf("%d. karakteri giriniz...\n",i+1);
    scanf(" %c",&ulkeismi[i]);
}

for(int i=0;i<7;i++){
    printf("%c",ulkeismi[i]);
}

//printf("%s",ulkeismi);

char cicekismi[]="karanfil";
for(int i=0;i<8;i++){
    printf("%c",cicekismi[i]);
}

int sifre[80];
int sifredogrulama[80];
int yanlis;
int i;

while(1){
    yanlis=0;
    i=0;
    printf("lutfen sifrenizi giriniz...\n");
    scanf("%s",sifre[i]);
    printf("lutfen girdiniz sifreyi dogrulayiniz...\n");
    scanf("%s",sifredogrulama[i]);

    while(!(sifre[i] == '\0' && sifredogrulama[i] == '\0')){
        if(sifre[i] != sifredogrulama[i]){
            printf("sifreleriniz uyusmuyor...tekrar deneyiniz...\n");
            yanlis=1;
            break;
        }
        else{
            i++;
        }
    }

    if(yanlis==0){
        printf("sifreleriniz uyusuyor...kaydiniz tamamlanmistir");
        break;
    }
}


int girilensayiadeti,toplam=0,ortalama;
float sayilar[100];

printf("kac tane sayi girmek istiyorsunuz...\n");
scanf("%d",&girilensayiadeti);

while(girilensayiadeti>100 || girilensayiadeti<0){
    printf("lutfen 1-100 arasinda sayilar giriniz...\n");
    printf("kac tane sayi girmek istiyorsunuz...\n");
    scanf("%d",&girilensayiadeti);
    
}
for(int i=0;i<girilensayiadeti;i++){
    printf("lutfen %d. sayiyi giriniz...\n",i+1);
    scanf("%f",&sayilar[i]);
    toplam+=sayilar[i];

}
ortalama=toplam/girilensayiadeti;
printf("toplam %d",toplam);
printf("ortalama %d",ortalama);*/











return 0;
}