#include<stdio.h>
#include<string.h>

int ehMinusculo(char c){
    if(c >= 97 && c <= 122){
        return 1;
    }
    return 0;
}

int ehMaiusculo(char c){
    if(c >= 65 && c <= 90){
        return 1;
    }
    return 0;
}

int ehDigitoNumerico(char c){
    if(c >= 48 && c <= 57){
        return 1;
    }
    return 0;
}

int solve(char password[1001]){

    int i,n,min,mai,num;
    
    n = strlen(password);
    
    min = 0;
    mai = 0;
    num = 0;
    
    for(i = 0; i < n; i++){
        if(ehMinusculo(password[i]) == 1){
            min++;
        } else if(ehMaiusculo(password[i]) == 1){
            mai++;
        } else if(ehDigitoNumerico(password[i]) == 1){
            num++;
        } else {
            return 0;
        }
    }
    
    if(i >= 6 && i <= 32 && min >= 1 && mai >= 1 && num >= 1){
        return 1;
    } else {
        return 0;
    }
}

int main(){
    char password[1001];

    while(scanf("%[^\n]s",password)!=EOF){
    
        getchar();
        
        if(solve(password) == 1){
            printf("Senha valida.\n");
        } else {
            printf("Senha invalida.\n");
        }
    }

    return 0;
}
