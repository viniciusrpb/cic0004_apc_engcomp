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
    
    sub = a-b;
    if(sub%m == 0){
        div = sub/m;
        printf("Sim\n%d\n",div);
        
    }
    else{
        printf("Nao\n");
    }
    
    return 0;
}
