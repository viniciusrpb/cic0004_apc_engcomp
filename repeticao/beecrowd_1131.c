/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Thaís Rocha

Tópico: Estruturas de Repetição
Objetivo: Solução do problema beecrowd 1131 - Grenais
          https://judge.beecrowd.com/pt/problems/view/1131

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_1131.c -o grenais
./grenais
*/

#include <stdio.h>

int main () {

    int grenais = 1, empate = 0, inter = 0, gremio = 0, gols_inter, gols_gremio, ng;
    /*
    Note que o problema exige que os valores dos vencedores sejam cumulativos, entao nao devemos
    zerar as variaveis dentro do bloco do.
    */

    do {
        scanf("%d %d", &gols_inter, &gols_gremio);

        if(gols_inter > gols_gremio){
            inter += 1;
        } else if(gols_gremio > gols_inter){
            gremio += 1;
        } else {
            empate += 1;
        } //adiciona 1 unidade na contagem do time vencedor da partida

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &ng);

        while(ng != 1 && ng != 2){ //enquanto for lido um valor diferente de 1 e de 2, o programa pedirá uma nova leitura
            printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%d", &ng);
        }

        if(ng == 1){
            grenais += 1;
        }

    } while (ng == 1);

    printf("%d grenais\n", grenais);
    printf("Inter:%d\n", inter);
    printf("Gremio:%d\n", gremio);
    printf("Empates:%d\n", empate);

    if(inter > gremio){
        printf("Inter venceu mais\n");
    } else if(inter < gremio){
        printf("Gremio venceu mais\n");
    } else {
        printf("Nao houve vencedor\n");
    }

    return 0;
}
