/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Monitora Mayara C. Marinho

Tópico: Estruturas de Repetição
Objetivo: Solução do problema beecrowd 3214 - Refrigerante (Andreas Björklund)
          https://judge.beecrowd.com/pt/problems/view/3214

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_3214.c -o refrigerante
./refrigerante
*/

#include <stdio.h>

int main() {
    // Declaracao de variaveis
    int g_inicial, g_encontradas, g_necessarias, g_troca, g_bebeu = 0, g_vazias;

    // Leitura dos dados
    scanf("%d %d %d", &g_inicial, &g_encontradas, &g_necessarias);
    g_vazias = g_inicial + g_encontradas;

    // Repeticao enquanto tiverem garrafas vazias a serem trocadas
    while (g_vazias >= g_necessarias) {
        // Troca de garrafas
        g_troca = g_vazias / g_necessarias;
        // Tim bebe as novas garrafas conseguidas por troca
        g_bebeu += g_troca;
        // Sobram algumas garrafas vazias
        g_vazias = g_vazias % g_necessarias;
        // As garrafas que o Tim bebeu podem ser trocadas tambem
        g_vazias += g_troca;
    }

    // Impressao da saida
    printf("%d\n", g_bebeu);

    return 0;
}