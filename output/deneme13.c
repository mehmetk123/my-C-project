#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int a=0,b=1,c,sayi;

    printf("lutfen bir sayi giriniz...\n");
    scanf("%d",&sayi);

    while(a<sayi){
        c=a+b;
        printf("%d\n",c);
        //c=a+b;
        a=b;
        b=c;

    }

  

    
    
    
    
    
    return 0;
}