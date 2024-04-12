/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Monitora Mayara C. Marinho

Tópico: Idade em Dias
Objetivo: Solução do problema beecrowd 1020 - Idade em Dias (Neilor Tonin, URI)
          https://judge.beecrowd.com/pt/problems/view/1020

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_1020.c -o idade_dias
./idade_dias
*/

#include <stdio.h>
 
int main() {
    // Declaracao de variaveis
    int idade, dia, mes, ano;

    // Leitura de valores
    scanf("%d", &idade);

    // Definicao dos valores ano, mes, dia
    ano = idade / 365;
    mes = (idade % 365) / 30;
    dia = (idade % 365) % 30;

    // Impressao da saida
    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dia);

    return 0;
}