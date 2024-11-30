/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Autor: Vinicius R. P. Borges

Tópico: Condicionais
Objetivo: Solução do problema beecrowd 1893 - Fase da Lua
          https://judge.beecrowd.com/pt/problems/view/1893

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_1893.c -o lua
./lua
*/

#include<stdio.h>

int main(){
    
    int x,y;
    scanf("%d %d",&x,&y);
    
    if(y < 3){
        printf("nova\n");
    }
    else{
        if(y > 96){
            printf("cheia\n");
        }
        else{
            if(x > y){
                printf("minguante\n");
            }
            else{
                printf("crescente\n");
            }
        }
    }
    
    return 0;
}
