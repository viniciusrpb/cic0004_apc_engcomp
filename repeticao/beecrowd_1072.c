/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Monitora Mayara C. Marinho

Tópico: Estruturas de Repetição
Objetivo: Solução do problema beecrowd 1072 - Intervalo 2 (Neilor Tonin, URI)
          https://judge.beecrowd.com/pt/problems/view/1072

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_1072.c -o intervalo_2
./intervalo_2
*/

#include <stdio.h>

int main() {
    // Declaracao de variaveis
    int N, value, num_in = 0, num_out = 0;

    // Leitura de valores
    scanf("%d", &N);

    // Calculo da soma dos valores impares
    while (N-- > 0) { // Apos rodar a comparacao do while, o N tera o seu valor reduzido de 1
        scanf("%d", &value);
        if (value >= 10 && value <= 20) {
            num_in++;
        } else {
            num_out++;
        }
    }

    // Impressao da saida
    printf("%d in\n", num_in);
    printf("%d out\n", num_out);
 
    return 0;
}