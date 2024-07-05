/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Monitora Mayara C. Marinho

Tópico: Falha do Motor
Objetivo: Solução do problema beecrowd 2167 - Falha do Motor (M.C. Pinto, UNILA)
          https://judge.beecrowd.com/pt/problems/view/2167

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_2167.c -o falha_motor
./falha_motor
*/

#include <stdio.h>


int main() {
    int i, num_entradas, indice_queda = 0;

    // Leitura do numero de entradas
    scanf("%d", &num_entradas);

    // Criacao de um vetor para armazenar as medidas
    int medidas[num_entradas];

    for (i = 0; i < num_entradas; i++) {
        // Leitura de cada uma das medidas
        scanf("%d", &medidas[i]);
    }

    for (i = 1; i < num_entradas; i++) { // Comeca do i=0, pois iremos precisar utilizar o index i-1 abaixo
        // Se a nova medida for menor que a anterior, guardar o index
        if (medidas[i] < medidas[i-1]){
            indice_queda = i + 1; // + 1, pois o vetor comeca do index 0, e nao do 1
            break;
        }
    }

    printf("%d\n", indice_queda);
    
    return 0;
} 

