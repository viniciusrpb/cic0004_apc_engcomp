/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Autor do Problema: Olimpiada Brasileira de Informatica 2023

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc contas.c -o bin
./bin
*/

#include<stdio.h>

int main(){

    int v, a, f, p, ans;
    
    scanf("%d %d %d %d", &v, &a, &f, &p);
  
    // a ordem das condicoes na estrutura if-else-if
    // eh para garantir que a maior quantidade
    // de contas seja calculada
    
    // pode-se pagar tres contas?
    if(v >= (a + f + p)){
        ans = 3;
    }
    else if(v >= (a + f) || v >= (a + p) || v >= (f + p)){
        // pode pagar duas contas? veja que testamos todas as possibilidades
        ans = 2;
    }
    else if(v >= a || v >= f || v >= p){
        // pode-se pagar apenas uma conta?
        ans = 1;
    }
    else {
        // por fim, nao eh possivel pagar nenhuma conta
        ans = 0;
    }
    
    printf("%d\n",ans);
    
    return 0;
}
