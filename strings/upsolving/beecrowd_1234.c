/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Dr. Vinicius R. P. Borges

Tópico: Strings
Objetivo: Solução do problema beecrowd 1234 - Dancing Sentence
          https://judge.beecrowd.com/pt/problems/view/1234

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_1048.c -o dancante
./dancante
*/

#include<stdio.h>
#include<string.h>

int isUppercase(char c){
    if(c >= 65 && c <= 90){
        return 1;
    } else {
        return 0;
    }
}

char toUppercase(char c){
    if(c >= 97 && c <= 122){
        return c-32;
    }
    return c;
}

char toLowercase(char c){
    if(c >=65 && c<=90){
        return c+32;
    }
    return c;
}

int main(){
    int i,n,imprimeMaiusculo;
    char sentence[51];

    while(scanf("%[^\n]",sentence)!=EOF){
        
        getchar();

        // variavel "flag": o valor 1 significa que o caractere sentence[i] a ser impresso eh maiusculo.
        // Caso o valor seja zero, obrigatoriamente o caractere sentence[i] deve ser impresso minusculo
        imprimeMaiusculo = 1;
        
        n = strlen(sentence);
        
        for(i = 0; i < n; i++){

            // se for espaco em branco, apenas imprime ele
            if(sentence[i] == ' '){
                printf("%c",sentence[i]);
            } else {
                // se o caractere sentence[i] for maiusculo
                if(isUppercase(sentence[i]) == 1){

                    // ... e o caractere sentence[i] tem que ser impresso obrigatoriamente maiusculo
                    if(imprimeMaiusculo == 1){
                        // apenas imprime o caractere sentence[i]
                        printf("%c",sentence[i]);
                    } else {
                        // senao converte o caractere sentence[i] para minusculo
                        printf("%c",toLowercase(sentence[i]));
                    }
                } else {
                    // ... caso contrato, se o caractere sentence[i] for minusculo

                    // ... e o caractere sentence[i] tem que ser impresso obrigatoriamente maiusculo
                    if(imprimeMaiusculo == 1){
                        // tem que converte-lo para maiusculo
                        printf("%c",toUppercase(sentence[i]));
                    } else {
                        // senao apenas imprime o caractere sentence[i]
                        printf("%c",sentence[i]);
                    }
                }

                if(imprimeMaiusculo == 1){
                    imprimeMaiusculo = 0;
                } else {
                    imprimeMaiusculo = 1;
                }
            }
        }
        printf("\n");
    }
    return 0;
}
