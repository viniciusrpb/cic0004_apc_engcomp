/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Prof. Dr. Vinícius R. P. Borges

Tópico: Algoritmos Sequenciais
Objetivo: Solução do problema beecrowd 1020 - Age in Days
          https://www.beecrowd.com.br/judge/pt/problems/view/1020

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_1020.c -o age
./age
*/

#include<stdio.h>

int main(){
    int x, dias, dias_meses, anos, meses;

    scanf("%d",&x);

    anos = x/365;
    dias_meses = x%365;
    meses = dias_meses/30;
    dias = dias_meses%30;

    printf("%d ano(s)\n",anos);
    printf("%d mes(es)\n",meses);
    printf("%d dia(s)\n",dias);

    return 0;
}
