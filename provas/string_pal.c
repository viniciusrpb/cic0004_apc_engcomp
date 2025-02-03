#include <stdio.h>

char solve(char str[1001], int n){
    
    int inicio, fim;
    
    // verifica se o caractere (codigo ASCII) na posicao 0 eh igual ao da posicao n-1,
    // depois se o caractere na posicao 1 eh igual ao da posicao n-2,
    // e assim por diante ateh chegar na metade da string.
    for(inicio = 0; inicio < (n+1)/2; inicio++){
        
        // se inicio eh 0, fim eh n-1, se inicio eh 1, fim eh n-2
        fim = n-inicio-1;
        
        // quando encontrar o caractere[fim] diferente da posicao
        // caractere[inicio], jah nao eh mais palindrome
        if(str[inicio] != str[fim]){
            return 'N';
        }
    }

    // se chegar ateh aqui, a string eh palindrome
    return 'S';
}

int main() {
    
    char str[1001];
    int ans,n,a;
    
    scanf("%d",&n);
    
    // se livra do \n
    getchar();
    
    // nao existem espacos em branco na string
    scanf("%s",str); 
    
    printf("%c\n",solve(str,n));
 
    return 0;
}
