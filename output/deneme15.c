#include <stdio.h>
#include <stdlib.h>

int main(){
    
    /*int sayi,i=0;
    
    do{
        printf("lutfen bir sayi giriniz...\n");
        scanf("%d",&sayi);
        
        
        while(i<sayi){
            printf("%d\n",i);
            i=i+2;
            
            
        }
    }while(sayi != 0);

    int sayi,a=1,i=1;

    do{
        printf("lutfen bir sayi giriniz...\n");
        scanf("%d",&sayi);

        while(i<=sayi){
            a=a*i;
            i++;
        }
        printf("sayinin faktoriyeli %d",a);
    }while(sayi != 0);*/

    int sayi,enbuyuk;

    printf("lutfen birinci sayiyi giriniz...\n");
    scanf("%d",&sayi);
    enbuyuk=sayi;

    int i=2;
    do{
        printf("lutfen %d. sayiyi giriniz...\n",i);
        scanf("%d",&sayi);

        if(sayi>enbuyuk){
            enbuyuk=sayi;
        }
        i++;


    }while(i<=5);

    printf("%d en buyuk sayidir",enbuyuk);









    return 0;
}