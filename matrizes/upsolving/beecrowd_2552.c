/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Monitora Mayara C. Marinho

Tópico: Matrizes
Objetivo: Solução do problema beecrowd 2552 - PãodeQuejoSweeper (Ricardo Oliveira, UFPR)
          https://judge.beecrowd.com/pt/problems/view/2552

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_2552.c -o pao_de_queijo_sweeper
./pao_de_queijo_sweeper
*/

#include <stdio.h>
#include <string.h>

#define MAX_LINHAS 100
#define MAX_COLUNAS 100

int main() {
    int i, j, linhas, colunas, vizinhos;
    int matriz[MAX_LINHAS][MAX_COLUNAS];

    // Leitura do numero de linhas e de colunas ate "end of file" (EOF)
    while (scanf("%d %d", &linhas, &colunas) != EOF) {
        // Leitura de valores da matriz
        for (i = 0; i < linhas; i++) {
            for (j = 0; j < colunas; j++) {
                scanf("%d", &matriz[i][j]);
            }
        }

        // Contagem de vizinhos e impressao
        for (i = 0; i < linhas; i++) {
            for (j = 0; j < colunas; j++) {
                // Condicoes para evitar o acesso a uma posicao que nao existe
                vizinhos = 0;
                // Vizinhos horizontais
                if (i > 0) {
                    vizinhos += matriz[i-1][j];
                }
                if (i < linhas - 1) {
                    vizinhos += matriz[i+1][j];
                }
                // Vizinhos verticais
                if (j > 0) {
                    vizinhos += matriz[i][j-1];
                }
                if (j < colunas - 1) {
                    vizinhos += matriz[i][j+1];
                }
                // Impressao
                if (matriz[i][j] == 1) {
                    printf("9");
                } else {
                    printf("%d", vizinhos);
                }
            }
            printf("\n");
        }
    }

}
