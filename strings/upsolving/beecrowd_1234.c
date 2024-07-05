#include<stdio.h>
#include<string.h>
#define MAX_N 50

int main(){
    int t,n,i,j,last;
    char str[MAX_N+1];

    while(scanf("%[^\n]s",str)!=EOF){
        getchar(); // livre-se do '\n'
        // pega o comprimento da string
        n = strlen(str);

        last = 0; //ultima letra minuscula -"faz de conta"

        for(i = 0; i < n; i++){
            if(str[i] == ' '){
                printf("%c",str[i]);
            }else{
                // se o ultimo caractere foi minusculo
                if(last == 0){
                    // se o atual caractere eh minusculo
                    if(str[i] >= 97 && str[i] <= 122){
                        // imprime ele jah maiusculo
                        printf("%c",str[i]-32);
                    }
                    else{
                        printf("%c",str[i]);
                    }
                    last=1; // o ultimo caractere impresso foi maisc
                }else{
                    // ultimo caractere foi maiusculo
                    // proximo caractere tem q ser minusculo
                    // mas se ele for maiusculo...
                    if(str[i] >= 65 && str[i] <= 90){
                        // imprime esse caractere minusculo
                        printf("%c",str[i]+32);
                    }else{
                        printf("%c",str[i]);
                    }
                    last = 0;
                }
            }
        }
        printf("\n");

    }

    return 0;
}
