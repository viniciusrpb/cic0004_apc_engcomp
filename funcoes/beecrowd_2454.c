/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Autor: Vinicius R. P. Borges

Tópico: Estruturas Condicionais
Objetivo: Solução do problema beecrowd 2454 - Fliper
          https://judge.beecrowd.com/pt/problems/view/2454

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_2313.c -o triang
./triang
*/

#include <stdio.h>
 
int main() {
 
    int p1,p2;
    
    scanf("%d %d",&p1,&p2);
    
    if(p1 == 0){
        printf("C\n");
    }else if(p1 == 1 && p2 == 0){
        printf("B\n");
    }else{
        printf("A\n");
    }
 
    return 0;
}
