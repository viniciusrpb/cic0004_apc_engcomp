/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Monitora Mayara C. Marinho

Tópico: Estruturas de Repetição
Objetivo: Solução do problema beecrowd 3068 - Meteoros
          https://judge.beecrowd.com/pt/problems/view/3068

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_3068.c -o meteoros
./meteoros
*/

#include <stdio.h>

int main() {
    // Declaracao de variaveis
    int X1, Y1, X2, Y2, N, X, Y, i = 1, meteoritos_cairam = 0;

    // Leitura de coordenadas iniciais
    scanf("%d %d %d %d", &X1, &Y1, &X2, &Y2);
    // (X1,Y1) = coordenada canto superior esquerdo
    // (X2,Y2) = coordenada canto inferior direito

    // Enquanto as coordenadas nao forem todas nulas
    while (X1!=0 && Y1!=0 && X2!=0 && Y2!=0) {   
        // Leitura do numero de meteoritos
        scanf("%d", &N);

        while (N--) { // Para cada meteorito
            scanf("%d %d", &X, &Y); // Ler sua coordenada
            if (X1<=X && X<=X2 && Y2<=Y && Y<=Y1) { // Se for dentro da area
                meteoritos_cairam++; // Considerar +1 na contagem
            }
        }

        // Imprimir resultado do teste i
        printf("Teste %d\n%d\n", i++, meteoritos_cairam);

        // Recomecando a contagem de meteoritos
        meteoritos_cairam = 0;
        // Recomecando a leitura de coordenadas
        scanf("%d %d %d %d", &X1, &Y1, &X2, &Y2); 
    }
 
    return 0;
}