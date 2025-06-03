/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Monitora Thaís Rocha

Tópico: Matrizes de strings
Objetivo: Solução do problema Beecrowd 2381 - Lista de Chamada
          https://judge.beecrowd.com/pt/problems/view/2381

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_2381.c -o chamada
./chamada
*/

#include <stdio.h>
#include <string.h>

int main () {

    int n, k, i, j; 
    char nomes[100][21], aux[21];

    scanf("%d%d", &n, &k);
    getchar();

    /* Lê e armazena uma string nome em cada linha da matriz */
    for(i = 0; i < n; i++){
        scanf("%s", nomes[i]);
    }

    /* Compara os nomes e organiza por ordem alfabética*/
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(strcmp(nomes[i], nomes[j]) < 0){
                strcpy(aux, nomes[j]);
                strcpy(nomes[j], nomes[i]);
                strcpy(nomes[i], aux);
            }
        }
    }

    printf("%s\n", nomes[k-1]); //k vai de 1 a n, e a matriz de 0 a n-1; por isso o vencedor fica na posição k-1

    return 0;
} 
