/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Monitora Mayara C. Marinho

Tópico: Tapetes
Objetivo: Solução do problema beecrowd 2472 - Tapetes (Por OBI - Olimpíada Brasileira de Informática 2014)
          https://judge.beecrowd.com/pt/problems/view/2472

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_2472.c -o tapetes
./tapetes
*/

#include <stdio.h>
 
int main() {
    // Declaracao de variaveis
    int l, n;
    long long int area, num_outros_tapetes, lado_maior_tapete;

    // Leitura de valores
    scanf("%d %d", &l, &n);

    // Vamos querer 1 tapete como sendo o maior possível para maximizar o lucro
    // Então teremos (n-1) tapetes que não são esse maior
    num_outros_tapetes = n - 1;

    // O maior tapete terá o tamanho total (l) menos o tamanho dos outros tapetes
    lado_maior_tapete = l - num_outros_tapetes;

    // Assim, a area total sera a area dos outros tapetes mais a area do maior tapete
    area = (1 * num_outros_tapetes) + (lado_maior_tapete * lado_maior_tapete);

    // Impressao da saida
    printf("%lli\n", area);

    return 0;
}