/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Monitora Mayara C. Marinho

Tópico: Cifra de César
Objetivo: Solução do problema beecrowd 1253 - Cifra de César (TopCoder)
          https://judge.beecrowd.com/pt/problems/view/1253

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_1253.c -o cifra_cesar
./cifra_cesar
*/

#include <stdio.h>
#include <string.h>


int main() {
    int num_entradas, i, tamanho_max, num, tamanho_sentenca, valor_ascii;

    tamanho_max = 50 + 1;
    char sentenca_modificada[tamanho_max];
    char sentenca_original[tamanho_max];

    // Ler numero de numero de entradas
    scanf("%d", &num_entradas);

    while (num_entradas--) {
    
        // Ler string da sentenca modificada
        scanf("%s", sentenca_modificada);

        // Ler numero de posicoes
        scanf("%d", &num);

        tamanho_sentenca = strlen(sentenca_modificada);
            
        for (i = 0; i < tamanho_sentenca; i++) {
            // Calculo para manter o char como uma letra entre 'A' e 'Z'.
            // O % 26 somado a 'A' foi necessario para englobar os casos 
            // em que o resultado deu abaixo de 'A' (decimal 65) ou acima de 'Z' (decimal 90).
            sentenca_original[i] = 'A' + (sentenca_modificada[i] - 'A' - num + 26) % 26;
        }

        // Lembrar de adicionar o character '\0' ao final de toda string que for criar
        // para sinalizar que a string chegou ao fim
        sentenca_original[i+1] = '\0';
        
        // Imprimir  
        for (i = 0; i < tamanho_sentenca; i++) {
            printf("%c", sentenca_original[i]);
        }

        printf("\n");    
    }
    
    return 0;
} 

