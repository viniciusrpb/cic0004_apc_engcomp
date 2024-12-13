/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Autor do Problema: Caleb Martim

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc aritmod.c -o bin
./bin
*/

#include<stdio.h>

int main(){
    int a,b,m,sub,div;
    
    scanf("%d %d %d",&a,&b,&m);
    
    // calcula a subtracao: A - B
    sub = a-b;
    
    // verifica se A-B eh multipo de M
    if(sub%m == 0){
        
        // Se sim, pega o divisor
        div = sub/m;
        
        printf("Sim\n%d\n",div);
        
    }
    else{
        printf("Nao\n");
    }
    
    return 0;
}
