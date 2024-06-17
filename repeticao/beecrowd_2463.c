/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Monitora Mayara C. Marinho

Tópico: Estruturas de Repetição
Objetivo: Solução do problema beecrowd 2463 - Corredor
          https://judge.beecrowd.com/pt/problems/view/2463

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_2463.c -o corredor
./corredor
*/

#include <stdio.h>

int main() {
    // Declaracao de variaveis
    int num_salas, vidas, vidas_caminho_global = 0, vidas_caminho_atual = 0, i;

    // Leitura do numero de salas
    scanf("%d", &num_salas);

    // Vamos entrar por todas as salas possiveis
    for (i = 0; i < num_salas; i++) {
        // Ler o numero de vidas na sala
        scanf("%d", &vidas);

        // Se valer a pena, somar a quantidade de vidas da sala        
        if (vidas_caminho_atual + vidas > vidas) {
            vidas_caminho_atual = vidas_caminho_atual + vidas;
        } else { // Senao, pegar apenas o valor de vidas da sala
            vidas_caminho_atual = vidas;
        }

        // E ir guardando o maior numero de vidas possivel
        if (vidas_caminho_atual > vidas_caminho_global) {
            vidas_caminho_global = vidas_caminho_atual;
        }
    }

    // Impressao da saida
    printf("%d\n", vidas_caminho_global);

    return 0;
}
