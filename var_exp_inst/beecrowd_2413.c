/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Prof. Dr. Vinícius R. P. Borges

Tópico: Algoritmos Sequenciais
Objetivo: Solução do problema beecrowd 2413 - Busca na Internet (OBI - Olimpíada Brasileira de Informática 2010)
          https://www.beecrowd.com.br/judge/pt/problems/view/2413

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_2413.c -o busca
./busca
*/

#include<stdio.h>

int main(){
    int answer,t;

    scanf("%d",&t);

    answer = 4*t;

    printf("%d\n",answer);

    return 0;
}
