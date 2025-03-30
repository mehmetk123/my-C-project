#include <stdio.h>
#include <stdlib.h>

float celcius(float fahrenheit) {
    
    return (fahrenheit-32)/1.8;

}
float fahrenheit(float celcius) {
    return (celcius*1.8)+32;

}




int main() {
    float fahrenheitderece;
    
    printf("lutfen fahrenheitten celciusa cevirmek istediginiz degeri giriniz...\n");
    scanf("%f",&fahrenheitderece);

    printf("%f fahrenheit %f celciustur...\n", fahrenheitderece, celcius(fahrenheitderece));

    float celciusderece;
    printf("lutfen celciustan fahrenheita cevirmek istediginiz degeri giriniz...\n");
    scanf("%f",&celciusderece);

    printf("%f celcius %f fahrenhettir...", celciusderece, fahrenheit(celciusderece));



    
    
    
    
    
    return 0;
}