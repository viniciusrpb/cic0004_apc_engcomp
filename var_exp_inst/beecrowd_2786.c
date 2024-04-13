/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores

Tópico: Algoritmos Sequenciais
Objetivo: Solução do problema beecrowd 2786 - Piso da Escola
          https://judge.beecrowd.com/pt/problems/view/2786

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_2786.c -o piso
./piso

*/

#include<stdio.h>

int main(){
    int l,c,tipo1,tipo2;

    scanf("%d",&l);
    scanf("%d",&c);

    tipo1 = l*c + (l-1)*(c-1);
    tipo2 = (l-1)*2 + (c-1)*2;

    printf("%d\n%d\n",tipo1,tipo2);

    return 0;
}
