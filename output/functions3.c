

int TekMiCiftMi(int sayi) {
    if(sayi % 2 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}


int main() {
    int sayi1;
    printf("lutfen bir sayi giriniz...");
    scanf("%d", &sayi1);

    if(TekMiCiftMi(sayi1)==1) {
        printf("sayi cifttir");

    }
    else if(TekMiCiftMi(sayi1)==0) {
        printf("sayi tektir");

    }
    //printf("%d", TekMiCiftMi(sayi1));

    
    
    
    return 0;
}