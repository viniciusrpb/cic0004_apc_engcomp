/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Autor: Vinicius R. P. Borges

Tópico: Strings
Objetivo: Solução do problema beecrowd 2108 - Counting Characters
          https://judge.beecrowd.com/en/problems/view/2108

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_2108.c -o counting
./counting
*/


#include<stdio.h>
#include<string.h>

int main(){
    
    char string[101],maiorPalavra[101],palavra[101];
    int i,n,count,maior;
    
    // leitura da string preservando os espacos em branco
    scanf("%[^\n]",string);
    
    maior = 0;
    maiorPalavra[0] = '\0';
    
    while(string[0]!='0'){
        
        getchar(); // retira o '\n' do buffer
        
        // pega a quantidade de caracteres da string
        n = strlen(string);
        
        count = 0;
        
        for(i = 0; i < n; i++){
            
            // se o i-esimo caractere eh espaco branco (soh pode ter um unico espaco), entao acabou a palavra. Vamos imprimir o tamanho dela (count)
            if(string[i] == ' '){
                
                // coloca o '\0' ao final da string palavra
                palavra[count] = '\0';
                
                // verifica se a palavra encontrada eh a maior
                // o ">=" eh para tratar o caso de empate (veja enunciado do problema)
                if(count >= maior){
                    // copia a "palavra" para a string "maiorPalavra"
                    strcpy(maiorPalavra,palavra);
                    
                    // atualiza o valor da maior string
                    maior = count;
                }
                
                printf("%d",count);
                
                // imprime o hifen necessario entre palavras
                printf("-");
                
                //inicializa o contador para a proxima palavra
                count = 0;
            }
            else{
                // guarda o caractere string[i] na posicao count da variavel "palavra"
                palavra[count] = string[i];
                
                // incrementa a variavel de contagem do tamanho
                count++;
            }
        }
        
        printf("%d\n",count);
        
        // verifica se a ultima palavra da string eh a maior dentre todas
        // as palavras jah encontradas em toda a entrada
        palavra[count] = '\0';
        if(count >= maior){
            strcpy(maiorPalavra,palavra);
            maior = count;
        }
        
        // Leitura da proxima string
        scanf("%[^\n]",string);
    }
    
    printf("\nThe biggest word: %s\n",maiorPalavra);
    return 0;
}
