/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Monitora Mayara C. Marinho

Tópico: Nota Cortada
Objetivo: Solução do problema beecrowd 3049 - Nota Cortada
          https://judge.beecrowd.com/pt/problems/view/3049

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd3049.c -o nota_cortada
./nota_cortada
*/

#include <stdio.h>
 
int main() {
    // Declaracao de variaveis
    int B, T;
    
    // Leitura de valores
    scanf("%d %d", &B, &T);

    if (B + T == 160) { // Empate
        printf("0\n");
    } else if (B + T < 160) { // Corte na parte esquerda
        printf("2\n");
    } else if (B + T > 160) { // Corte na parte direita
        printf("1\n");
    }

    return 0;
}