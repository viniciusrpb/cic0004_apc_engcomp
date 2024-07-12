/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Monitora Mayara C. Marinho

Tópico: Matrizes
Objetivo: Solução do problema beecrowd 1652 - Deli Deli (Contest Local, Universidade de Ulm)
          https://judge.beecrowd.com/pt/problems/view/1652

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_1652.c -o deli_deli
./deli_deli
*/

#include <stdio.h>
#include <string.h>

#define MAX_QTD_IRREGULARES 20
#define MAX_QTD_VERBOS 100
#define MAX_TAMANHO 21

int main() {
    int i, j, qtd_irregulares, qtd_verbos, encontrou, len;
    char irregulares[MAX_QTD_IRREGULARES][2][MAX_TAMANHO]; // Array para armazenar pares de palavras irregulares
    char palavras[MAX_QTD_VERBOS][MAX_TAMANHO];
    char palavra[MAX_TAMANHO];
    
    // Leitura de entradas
    scanf("%d %d", &qtd_irregulares, &qtd_verbos);

    // Leitura das palavras irregulares e seus plurais
    for (i = 0; i < qtd_irregulares; i++) {
        scanf("%s %s", irregulares[i][0], irregulares[i][1]);
    }

    // Leitura das palavras a serem pluralizadas
    for (i = 0; i < qtd_verbos; i++) {
        scanf("%s", palavras[i]);
    }

    // Processamento e saida das palavras pluralizadas
    for (i = 0; i < qtd_verbos; i++) {
        strcpy(palavra, palavras[i]);
        len = strlen(palavra);

        // Verificacao de palavras irregulares
        encontrou = 0;
        for (j = 0; j < qtd_irregulares; j++) {
            if (strcmp(palavra, irregulares[j][0]) == 0) {
                printf("%s\n", irregulares[j][1]);
                encontrou = 1;
                break;
            }
        }

        // Se nao for irregular, aplicar as regras
        if (!encontrou) {
            if (len >= 2 && palavra[len - 1] == 'y' && 
                (palavra[len - 2] != 'a' && palavra[len - 2] != 'e' && palavra[len - 2] != 'i' && palavra[len - 2] != 'o' && palavra[len - 2] != 'u')) {
                // Substituir "y" por "ies"
                palavra[len - 1] = 'i';
                palavra[len] = 'e';
                palavra[len + 1] = 's';
                palavra[len + 2] = '\0'; // Lembrar de adicionar o "\0" para indicar o fim da string
            } else if (palavra[len - 1] == 'o' || 
                       palavra[len - 1] == 's' || 
                       palavra[len - 1] == 'x' || 
                       (len >= 2 && (strcmp(palavra + len - 2, "ch") == 0 || strcmp(palavra + len - 2, "sh") == 0))) {
                // Adicionar "es"
                strcat(palavra, "es");
            } else {
                // Adicionar "s"
                strcat(palavra, "s");
            }

            // Imprime a palavra no plural
            printf("%s\n", palavra);
        }
    }

    return 0;
}
