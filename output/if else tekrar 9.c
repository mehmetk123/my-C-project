#include <stdio.h>
#include <string.h>

int main(){
    
    /*int yas;
    char medeniDurum[15];

    printf("lutfen yasinizi giriniz...\n");
    scanf("%d",&yas);

    
    printf("lutfen medeni durumunuzu belirtiniz...\n");
    scanf("%s",medeniDurum);

    if(yas>=18 && strcmp(medeniDurum, "evet")==0){

        printf("hosgeldiniz iceriye girebilirsiniz...\n");
        
    }
    else if(yas>=18 && strcmp(medeniDurum, "hayir")==0){
        printf("evli olamdiginiz icin giremezsiniz...\n");
    }
    else{
        printf("resit olmadiginiz icin giremezsiniz...\n");
    }*/


   int yas,evlilikDurumu;

   printf("1-Evli\n");
   printf("2-Bekar\n");
   printf("evlilik durumunuzu belirtiniz...\n");
   scanf("%d",&evlilikDurumu); 
   printf("lutfen yasinizi giriniz...\n");
   scanf("%d",&yas);

   if(yas>=18 && evlilikDurumu==1){
    printf("hosgeldiniz iceri girebilirsiniz...\n");

   }
   else if(yas>=18 && evlilikDurumu==2){
    printf("evli olmadiginiz icin giremezsiniz...\n");

   }
   else{
    printf("resit olmadiginiz icib giremezsiniz...\n");

   }




 
    
    
    
    
    return 0;
}