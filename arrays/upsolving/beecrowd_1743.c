/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Vinicius R. P. Borges

Tópico: Vetores
Objetivo: Solução do problema beecrowd 1743 - Maquina de Verificacao Automatica
          https://judge.beecrowd.com/pt/problems/view/1743

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_1743.c -o machine
./machine

*/

#include<stdio.h>

int main(){
    int i,x[5],y[5],compativel;
    
    for(i = 0; i < 5; i++){
        scanf("%d",&x[i]);
    }
    
    // assume-se inicialment que os conectores sao compativeis
    compativel = 1;
    
    for(i = 0; i < 5; i++){
        scanf("%d",&y[i]);
        // se a i-esima posicao de x for igual a i-esima posicao de y
        // os conectores nao sao compativeis
        if(x[i] == y[i]){
            compativel =  0;
        }
    }
    
    if(compativel == 1){
        printf("Y\n");
    }
    else{
        printf("N\n");
    }
    
    return 0;
}
