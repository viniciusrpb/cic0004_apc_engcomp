/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Monitora Mayara C. Marinho

Tópico: Pneu
Objetivo: Solução do problema beecrowd 2374 - Pneu (OBI - Olimpíada Brasileira de Informática 2010)
          https://judge.beecrowd.com/pt/problems/view/2374

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_2374.c -o pneu
./pneu
*/

#include <stdio.h>
 
int main() {
    // Declaracao de variaveis
    int pressao_desejada, pressao_lida, diferenca;

    // Leitura de valores
    scanf("%d", &pressao_desejada);
    scanf("%d", &pressao_lida);

    // Definicao da diferenca de pressao
    diferenca = pressao_desejada - pressao_lida;

    // Impressao da saida
    printf("%d\n", diferenca);
 
    return 0;
}