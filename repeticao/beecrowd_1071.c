/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Monitora Mayara C. Marinho

Tópico: Estruturas de Repetição
Objetivo: Solução do problema beecrowd 1071 - Soma de Impares Consecutivos I (Neilor Tonin, URI)
          https://judge.beecrowd.com/pt/problems/view/1071

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_1071.c -o soma_impares
./soma_impares
*/

#include <stdio.h>

int main() {
    // Declaracao de variaveis
    int X, Y, soma = 0;

    // Leitura de valores
    scanf("%d", &X); // X será o maior valor
    scanf("%d", &Y); // Y será o menor valor

    // Calculo da soma dos valores impares
    while (--X > Y) { // Antes de rodar a comparacao do while, o X sera reduzido de 1
        if (X%2) { // Se for impar
            soma += X;
        }
    }

    // Impressao da saida
    printf("%d\n", soma);
 
    return 0;
}