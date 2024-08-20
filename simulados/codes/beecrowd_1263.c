#include<stdio.h>
#include<string.h>

int main(){
    int i,n,j,aliteracao;
    char string[10000],initials[101];
    
    while(scanf("%[^\n]s",string) != EOF){
        getchar();
        
        n = strlen(string);
        // converte todo mundo para minusculo
        for(i = 0; i < n; i++){
            if(string[i] >= 65 && string[i] <= 90){
                string[i] = string[i] + 32;
            }
        }
        
        // usa a string initial para pegar apenas as letras iniciais de cada palvara
        initials[0] = string[0];
        j = 1;
        for(i = 1; i < n; i++){
            if(string[i-1] == ' '){
                initials[j] = string[i];
                j++;
            }
        }
        // deixa esse vetor de char como string ao colocar '\0' ao final
        initials[j] = '\0';
        //string = "alo deixa disso vamos passear"
        //initial = "addvp"
        //printf("%s\n",initials);
        n = j;
        
        aliteracao=0;
        
        for(i = 1; i < n; i++){
            // marca a letra inicial de partida
            j = i-1;
            
            // enquanto as letras forem iguais, incrementa i
            while(i < n && initials[i] == initials[i-1]){
                i++;
            }
            
            // se a diferenca for maior do que 1, eh aliteracao
            if(i-j > 1){
                aliteracao++;
            }
        }
        
        printf("%d\n",aliteracao);
    }
    return 0;
}
