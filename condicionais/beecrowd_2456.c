/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Monitora Mayara C. Marinho

Tópico: Estruturas Condicionais
Objetivo: Solução do problema beecrowd 2456 - Cartas (OBI - Olimpíada Brasileira de Informática 2014)
          https://judge.beecrowd.com/pt/problems/view/2456

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_2456.c -o cartas
./cartas
*/

#include <stdio.h>
 
int main() {
    // Declaracao de variaveis
    int carta1, carta2, carta3, carta4, carta5;
    
    // Leitura de valores
    scanf("%d %d %d %d %d", &carta1, &carta2, &carta3, &carta4, &carta5);

    if (carta1 <= carta2 && 
        carta2 <= carta3 && 
        carta3 <= carta4 && 
        carta4 <= carta5) {
        printf("C\n");
    } else if (carta1 >= carta2 && 
        carta2 >= carta3 && 
        carta3 >= carta4 && 
        carta4 >= carta5) {
        printf("D\n");
    } else {
        printf("N\n");
    }

    return 0;
}