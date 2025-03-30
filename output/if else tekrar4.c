

int main(){
    
    int not;
    printf("lutfen notunuzu giriniz...");
    scanf("%d",&not);

    if(not>=90){
        printf("notunuz A dir");
    }
    else if(not>=80 && not<=89){
        printf("notunuz B dir");
        
    }
    else if(not>=70 && not<=79){
        printf("notunuz C dir");
    }
    else if(not>=60 && not<=69){
        printf("notunuz D dir");
        
    }
    else{
        printf("notunuz F dir");
        
    }
    
    
    
    return 0;
}

