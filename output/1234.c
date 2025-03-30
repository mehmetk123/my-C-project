#include <stdio.h>
#include <stdlib.h>


/*void takimlar(){
    printf("Galatasaray\n");
    printf("Barcelona\n");
    printf("Milan\n");
    printf("Liverpool\n");
}

int sayininİkiKati(int sayi){
    printf("%d",sayi*2);
    return sayi*2;    
}

int sayininKaresi(int sayi){
    return sayi*sayi;
}

char ilkHarfiniBas(char dizi[]){
    return dizi[0];
}


int main(){

    //takimlar();
    //karesiniAl(12);
    //printf("%d",sayininKaresi(6));
    //printf("%c",ilkHarfiniBas("mehmet"));

return 0
}

enum gunler{pazartesi=1,sali,carsamba,persembe,cuma,cumartesi,pazar};

int main(){

   for(int i=pazartesi;i<=pazar;i++){
    printf("%d ",i);
   }
    
    return 0;
}


int enBuyukSayiyiBul(int dizi[],int boyut){
    int enbuyukdeger=0;
    for(int i=0;i<boyut;i++){
        if(dizi[i]>enbuyukdeger){
            enbuyukdeger=dizi[i];
        }
    }
    printf("en buyuk sayi %d",enbuyukdeger);
}

int main(){

    int dizi[]={2,4,6,8};
    enBuyukSayiyiBul(dizi,4);
    
    
    
    
    return 0;
}

void isimleriListele(char isciİsimleri[][30], int boyut){
    for(int i=0;i<boyut;i++){
        printf("%s\n",isciİsimleri[i]);
    }
}



int main(){

    char isciİsimleri[5][30]={"ali","mehmet","ahmet","kamil","yavuz"};
    isimleriListele(isciİsimleri,5);


    
    
    
    
    return 0;
}

int tekMiCiftMi(int sayi){
    if(sayi % 2 ==0){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){

    int sayi;
    for(int i=0;i<=20;i++){
    if(tekMiCiftMi(i)==0){
        printf("%d cifttir\n",i);
    }
    else if(tekMiCiftMi(i)==1){
        printf("%d tektir\n",i);
    }

    }    
    

    return 0;
}*/


float fahrenheit(int celcius){
    
    return (celcius*1.8)+32;

}
float celcius(int fahrenheit){
    return (fahrenheit-32)/1.8;
}

int main(){

    /*int celciusderece;
    printf("fahrenheite donüstürmek istediginiz degeri giriniz...\n");
    scanf("%d",&celciusderece);
    printf("%d celciusa %f fahrenheita esittir...\n",celciusderece,fahrenheit(celciusderece));
    int fahrenheitderece;
    printf("celciusa donusturmek istediginiz degeri giriniz...\n");
    scanf("%d",&fahrenheitderece);
    printf("%d fahrenheit %f celciusa esittir...\n",fahrenheitderece,celcius(fahrenheitderece));*/

    
    
    for(int i=32;i<=212;i++){
        printf("%d fahrenheit %f celciusa esittir\n",i,celcius(i));
    }

    for(int i=0;i<=100;i++){
        printf("%d celcius %f fahrenheite esittir\n",i,fahrenheit(i));
    }



    
    
    
    return 0;
}

