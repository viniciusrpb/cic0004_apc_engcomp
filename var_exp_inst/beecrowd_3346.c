/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Monitora Mayara C. Marinho

Tópico: Flutuação do PIB
Objetivo: Solução do problema beecrowd 3346 - Flutuação do PIB (Leandro Zatesko, Federal University of Technology of Paraná)
          https://judge.beecrowd.com/pt/problems/view/3346

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_3346.c -o flutuacao_pib
./flutuacao_pib
*/

#include <stdio.h>
 
int main() {
    // Declaracao de variaveis
    double F1, F2, total;

    // Leitura de valores
    scanf("%lf %lf", &F1, &F2);

    // Definicao da flutuacao total
    total = ((1 + F1 / 100) * (1 + F2 / 100) - 1) * 100;

    // Impressao da saida
    printf("%.6lf\n", total);
 
    return 0;
}