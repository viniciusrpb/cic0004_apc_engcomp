#include<stdio.h>
#include<string.h>
#define MAX_N 50

int main(){
    int t,dentro_palavra,n,i,j;
    char str[MAX_N+1],hidden[MAX_N+1]; // +1 eh o '\0'

    scanf("%d",&t);
    getchar(); // livre-se '\n' no buffer de IO

    while(t > 0){
        scanf("%[^\n]s",str);
        getchar(); // livre-se '\n' no buffer de IO

        // verifica se o primeiro caractere da string eh um espaco em branco
        j = 0;
        if(str[0] != ' '){
            dentro_palavra = 1;
            hidden[j] = str[0];
            j++;
        }else{
            dentro_palavra = 0;
        }
        // pegar o comprimento da string
        n = strlen(str);

        for(i = 1; i < n; i++){
            if(str[i] != ' '){
                if(dentro_palavra == 0){
                    hidden[j] = str[i];
                    dentro_palavra = 1;
                    j++;
                }
            }else{
                // sai de uma palavra
                dentro_palavra = 0;
            }
        }
        hidden[j] = '\0';
        printf("%s\n",hidden);

        t--;
    }
    return 0;
}
