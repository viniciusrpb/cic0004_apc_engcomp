/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Monitora Mayara C. Marinho

Tópico: Matrizes
Objetivo: Solução do problema beecrowd 1435 - Matriz Quadrada I (Josué P. de Castro)
          https://judge.beecrowd.com/pt/problems/view/1435

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_1435.c -o matriz_quadrada
./matriz_quadrada
*/

#include <stdio.h>

#define TAMANHO 100


int main() {
    int matriz[TAMANHO][TAMANHO], camadas, e = 0, i, j, l, valor;
    // Variavel camada sera definida de fora pra dentro.
    // Por exemplo, a camada mais externa (borda) sera 1, e a interna depois dessa sera 2,...
    
    scanf("%d", &camadas);

    while (camadas != 0) {
        
        // Cria a matriz
        int inicio = 0, fim = camadas - 1, valor = 1;

        while (inicio <= fim) {
            for (i = inicio; i <= fim; i++) {
                for (j = inicio; j <= fim; j++) {
                    matriz[i][j] = valor;
                }
            }
            inicio++;
            fim--;
            valor++;
        }
        
        // Imprime matriz
        for (i = 0; i < camadas; i++) {
            for (j = 0; j < camadas; j++) {
                printf("%3d", matriz[i][j]);

                if (j < camadas - 1) {
                    printf(" ");
                }
            }
            printf("\n");
        }

        printf("\n");

        // Leitura do proximo numero
        scanf("%d", &camadas);
    }
    
    return 0;
}
