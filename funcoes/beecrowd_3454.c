/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Autor: Vinicius R. P. Borges

Tópico: Estruturas Condicionais
Objetivo: Solução do problema beecrowd 3454 - Alice no País do Jogo da Velha
          https://judge.beecrowd.com/pt/problems/view/3454

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_3454.c -o alice
./alice
*/

#include <stdio.h>
 
int main() {
 
    char c1,c2,c3;
    
    scanf("%c%c%c",&c1,&c2,&c3);
    
    if(c1 == 'X' && c2 == 'O' && c3 == 'X'){
        printf("*\n");
    } else if((c1 == 'X' && c2 == 'X' && c3 == 'O') || (c1 == 'O' && c2 == 'X' && c3 == 'X')){
        printf("Alice\n");
    } else {
        printf("?\n");
    }
 
    return 0;
}
