/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Monitora Mayara C. Marinho

Tópico: Algoritmos Sequenciais
Objetivo: Solução do problema beecrowd 2377 - Pedágio (OBI - Olimpíada Brasileira de Informática 2010)
          https://judge.beecrowd.com/pt/problems/view/2377

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_2377.c -o pedagio
./pedagio
*/

#include <stdio.h>
 
int main() {
    // Declaracao de variaveis
    int comprimento, distancia_pedagios, custo_km, valor_pedagio, custo_total;

    // Leitura de valores
    scanf("%d %d", &comprimento, &distancia_pedagios);
    scanf("%d %d", &custo_km, &valor_pedagio);

    // Definicao do custo total
    custo_total = (comprimento * custo_km) + ((comprimento / distancia_pedagios) * valor_pedagio);

    // Impressao da saida
    printf("%d\n", custo_total);
 
    return 0;
}