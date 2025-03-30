#include <stdio.h>
#include <stdlib.h>

struct kitap{
    char kitapismi[50];
    char yazar[50];
    int basimyili;
    float fiyati;
};
//kitap1 = {"sefiller", "victor hugo", 2004, 12.5},
//kitap2 = {"suç ve ceza", "dostoyevski", 2005, 20.7};

int main(){

  struct kitap romankitaplari[2] = {{"suc ve ceza", "dostoyevski", 2004, 22.5}, 
  {"sefiller", "victor hugo", 2005, 17.6}};

  float toplamfiyat=0;

  for(int i=0;i<2;i++){
    toplamfiyat+=romankitaplari[i].fiyati;

  }
  printf("toplam fiyat %f", toplamfiyat);
  
  
  
  
  // printf("%s %s %d %f\n", kitap1.kitapismi, kitap1.yazar, kitap1.basimyili,kitap1.fiyati);
   //printf("%s %s %d %f\n", kitap2.kitapismi, kitap2.yazar, kitap2.basimyili,kitap2.fiyati);

   //float toplamfiyat=0;

   //toplamfiyat = kitap1.fiyati+kitap2.fiyati;
   //printf("toplam fiyat %f", toplamfiyat);*/
    
    
    
    
    return 0;
}