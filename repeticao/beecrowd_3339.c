/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Monitora Mayara C. Marinho

Tópico: Estruturas de Repetição
Objetivo: Solução do problema beecrowd 3339 - Carina
 (Rafael Granza de Mello, UDESC)
          https://judge.beecrowd.com/pt/problems/view/3339

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_3339.c -o carina
./carina
*/

#include <stdio.h>

int main() {
    // Declaracao de variaveis
    int Q, L, R, i = 0, quad_perfeitos = 0;

    // Leitura da quantidade de questoes
    scanf("%d", &Q);

    // Repeticao Q vezes
    while (Q--) {
        // Leitura do intervalo
        scanf("%d %d", &L, &R);
        // Calculo de quadrados perfeitos
        while ((i*i)<=R) { // Enquanto o i^2 estiver dentro do limite superior
            if (L<=(i*i) && (i*i)<=R) { // Verificar se esta no intervalo
                quad_perfeitos++;
            }
            i++;
        }

        // Impressao da saida
        printf("%d\n", quad_perfeitos);

        // Recomencando a contagem
        quad_perfeitos = 0;
        i = 0;
    }
 
    return 0;
}