#include<stdio.h>
#include<stdlib.h>

int main(){

    /*int cokboyutludizi[3][3]={1,2,3,4,5,6,7,8,9};

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",cokboyutludizi[i][j]);
        }
        printf("\n");
    }


   int satirsayisi,sutunsayisi;

   printf("kac tane satir istiyorsunuz...\n");
   scanf("%d",&satirsayisi);
   printf("kac tane sutun istiyorsunuz...\n");
   scanf("%d",&sutunsayisi);

   int cokboyutludizi[satirsayisi][sutunsayisi];

   for(int i=0;i<satirsayisi;i++){
    for(int j=0;j<sutunsayisi;j++){
        printf("%d. satirin %d. sutununu giriniz...\n",i+1,j+1);
        scanf("%d",&cokboyutludizi[i][j]);
    }
   }
    for(int i=0;i<satirsayisi;i++){
     for(int j=0;j<sutunsayisi;j++){
        printf("%d ",cokboyutludizi[i][j]);

    }
    printf("\n");
   }*/

  int dizi1[3][2];
  int dizi2[3][2];
  int toplam[3][2];

  for(int i=0;i<3;i++){
    for(int j=0;j<2;j++){
        printf("%d. satirin %d. sutununu giriniz...\n",i+1,j+1);
        scanf("%d",&dizi1[i][j]);
    }
  }
  system("CLS");
  for(int i=0;i<3;i++){
    for(int j=0;j<2;j++){
        printf("%d. satirin %d. sutununu giriniz...\n",i+1,j+1);
        scanf("%d",&dizi2[i][j]);
    }
  }
  for(int i=0;i<3;i++){
    for(int j=0;j<2;j++){
        toplam[i][j]=dizi1[i][j]+dizi2[i][j];
        
    }
  }
   for(int i=0;i<3;i++){
    for(int j=0;j<2;j++){
        printf("%d ",toplam[i][j]);

        
    }
    printf("\n");
  }








    


    
    
       
return 0;
}