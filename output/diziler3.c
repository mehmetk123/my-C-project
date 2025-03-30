#include <stdio.h>
#include <stdlib.h>

int main(){

  int sayilar[3][2]={1,2,3,4,5,6};
  int sayilar2[3][2]={3,7,5,1,9,4};
  int toplam[3][2];

  for(int i=0;i<3;i++){
    for(int j=0;j<2;j++){
        toplam[i][j]=sayilar[i][j]+sayilar2[i][j];
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