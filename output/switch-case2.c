#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*char karaktersecimi;

    printf("karakter giriniz: ");
    scanf("%c", &karaktersecimi);

    switch(karaktersecimi) {
        
       case 'a': 
       printf("ismim ali"); 
       break;
       case 'b': 
       printf("ismim burak"); 
       break;
       case 'c': 
       printf("ismim caner"); 
       break;
       default : printf("sadece gerekli harfleri giriniz");
    
    
    
    
    }   */

    char karaktersecimi;

    printf("lutfen karakter giriniz: ");
    scanf("%c", &karaktersecimi);
    
    switch(karaktersecimi) {
        case 'a' : printf("ismim Ali\n"); break;
        case 'b' : printf("ismim berat\n"); break;
        case 'c' : printf("ismim Cem\n"); break;
        case 'd' : printf("ismim Deniz\n"); break;
        default : printf("lutfen belirli harfleri giriniz\n");
        
    }    
    
    
    
    
    return 0;
}