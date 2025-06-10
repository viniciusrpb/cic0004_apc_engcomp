#include<stdio.h>
#include<string.h>

int ehMinusculo(char c){
    if(c >= 97 && c <= 122){
        return 1;
    } else {
        return 0;
    }
}

int main(){
    
    int i,n,t;
    char mensagem[10001];
    scanf("%d",&t);

    printf("Codigo ASCII %c = %d\n",'Z','Z');

    while(t > 0){
        getchar(); // tirar o '\n'
        scanf("%s",mensagem);
        
        // strlen: retorna o tamanho da string desconsiderando o '\0'
        n = strlen(mensagem);
        
        for(i = n-1; i >= 0; i--){
            if(ehMinusculo(mensagem[i]) == 1){
                printf("%c",mensagem[i]);
            }
        }
        
        printf("\n");
        t--;
    }
    return 0;
}
