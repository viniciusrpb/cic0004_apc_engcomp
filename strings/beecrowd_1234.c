/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Monitora Mayara C. Marinho

Tópico: Sentença Dançante
Objetivo: Solução do problema beecrowd 1234 - Sentença Dançante (TopCoder)
          https://judge.beecrowd.com/pt/problems/view/1234

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_1234.c -o sentenca_dancante
./sentenca_dancante
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    int line_size = 50 + 1; // Comprimento maximo de uma linha + '\0'
    char line[line_size]; 
    
    /* Iremos utilizar o fgets dessa vez pois 
    o scanf leria apenas ate o primeiro espaco em branco,
    enquanto o fgets le ate a quebra de linha ou o EOF.

       Alem disso, o fgets adiciona o caracter '\n' no final da string,
    entao nao precisaremos de adicionar o '\n' no printf. */

    while (fgets(line, line_size, stdin)) {
        /* Criaremos uma variavel para indicar se a letra deve ser impressa 
        com letra maiuscula (uppercase = 1) ou minuscula (uppercase = 0).

        Chamamos essa construcao de 'flag'. */
        int uppercase = 1; 
        int length = strlen(line);
        
        for (int i = 0; i < length; i++) {
            if (line[i] == ' ') { // Lembrar que char eh com aspas simples
                printf(" "); // Imprimir espaco como string
            } else {
                if (uppercase) { // Se a flag for 1 (verdadeiro)
                    printf("%c", toupper(line[i])); 
                } else { // Se a flag for 0 (falso)
                    printf("%c", tolower(line[i])); 
                }
                uppercase = !uppercase; // Invertendo a flag: mudando a flag de 0 para 1 ou de 1 para 0
            }
        }
    }
    
    return 0;
}
