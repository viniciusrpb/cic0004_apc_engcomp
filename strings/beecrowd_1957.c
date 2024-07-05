/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Monitora Mayara C. Marinho

Tópico: Converter para Hexadecimal
Objetivo: Solução do problema beecrowd 1957 - Converter para Hexadecimal (M.C. Pinto, UNILA)
          https://judge.beecrowd.com/pt/problems/view/1957

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_1957.c -o conv_hexadecimal
./conv_hexadecimal
*/

#include <stdio.h>
#include <string.h>

/* 
A primeira forma de resolver esse problema eh lidando com uma entrada inteira:

int main() {
    int number;
    
    // Ler numero decimal
    scanf("%d", &number);
    
    // Imprimir numero hexadecimal
    printf("%X\n", number);
    
    return 0;
} 

Mas podemos resolver utilizando strings tambem:*/

int main() {
    int i = 0, max_size = 10, dec_num, resultado, resto, len;
    char inverted_hexa_num[max_size];
    
    // Ler numero decimal
    scanf("%d", &dec_num);

    // Calcular resto e resultado da divisao por 16
    while (dec_num >= 16) {
        resultado = dec_num / 16;
        resto = dec_num % 16;

        // Caso o valor seja 10, 11, 12, 13, 14 ou 15, converter para letra
        if (resto < 10) {
            inverted_hexa_num[i] = resto + '0'; // Converte para ASCII character
        } else {
            inverted_hexa_num[i] = resto - 10 + 'A'; // Converte para ASCII character A-F
        }
        /* Ocorre da seguinte forma:
        
        Se o resto for 11, faremos 11 - 10, que resulta em 1, e somaremos 'A', que resulta em 'A'.
        Se o resto for 12, faremos 12 - 10, que resulta em 2, e somaremos 'A', que resulta em 'B'.*/

        // Redefinir o novo numero a ser dividido
        dec_num = resultado;
        // Incrementar o indice para adicionarmos o resultado 
        // na posicao correta da string 'inverted_hexa_num'
        i++;
    }

    // Adicionar por fim o ultimo resultado na string
    if (dec_num < 10) {
        inverted_hexa_num[i] = dec_num + '0'; // Converte para ASCII character
    } else {
        inverted_hexa_num[i] = dec_num - 10 + 'A'; // Converte para ASCII character A-F
    }

    // Lembrar de adicionar o character '\0' ao final de toda string que for criar
    // para sinalizar que a string chegou ao fim
    inverted_hexa_num[i+1] = '\0';
    
    // Imprimir numero hexadecimal, 
    // que eh o 'inverted_hexa_num' invertido
    len = strlen(inverted_hexa_num);
    for (i=len-1; i>=0; i--) {
        printf("%c", inverted_hexa_num[i]);
    }

    printf("\n");    
    
    return 0;
} 

