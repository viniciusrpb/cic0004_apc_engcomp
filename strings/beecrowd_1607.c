/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Monitora Mayara C. Marinho

Tópico: Avance as Letras
Objetivo: Solução do problema beecrowd 1607 - Avance as Letras (Bruno Adami, Universidade de São Paulo - São Carlos)
          https://judge.beecrowd.com/pt/problems/view/1607

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_1607.c -o avance
./avance
*/

#include <stdio.h>
#include <string.h>


int main() {
    int num_entradas, i, tamanho_max, num_operacoes, tamanho_string, diferenca;

    tamanho_max = 10000 + 1;
    char primeira_string[tamanho_max];
    char segunda_string[tamanho_max];

    // Ler numero de numero de entradas
    scanf("%d", &num_entradas);

    while (num_entradas--) {
        // Ler strings
        scanf("%s %s", primeira_string, segunda_string);
        // Obter tamanho das strings, 
        // considerando que as duas possuem o mesmo tamanho.
        tamanho_string = strlen(primeira_string);
        num_operacoes = 0;

        for (i = 0; i < tamanho_string; i++) {
            // Calculando o numero de operacoes necessarias para mudar
            // o respectivo char da primeira string no char da segunda string.
            // Ex: A B
            // B - A = (1 +26) % 26 = 1
            // Ex: B A
            // A - B = (-1 + 26) % 26 = 25
            diferenca = (segunda_string[i] - primeira_string[i] + 26) % 26;
            num_operacoes += diferenca;
        }

        printf("%d\n", num_operacoes);    
    }

    return 0;
} 

