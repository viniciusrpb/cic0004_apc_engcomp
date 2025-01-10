/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Vinicius R. P. Borges

Tópico: Vetores
Objetivo: Solução do problema beecrowd 2807 - Iccanobif
          https://judge.beecrowd.com/pt/problems/view/2807

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_2807.c -o fib
./fib

*/

#include<stdio.h>

int main(){
    
    int i,n;
    int fib[41];
    
    scanf("%d",&n);
    
    fib[0] = 1;
    fib[1] = 1;
    for(i = 2; i < n; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
    
    for(i = n-1; i > 0; i--){
        printf("%d ",fib[i]);
    }
    printf("%d\n",fib[0]);
    
    return 0;
}
