/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Olimpíada Brasileira de Informática 2016 - Nível Universitário - Fase 1

Autor do código: Vinicius R. P. Borges

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc nova_avenida.c -o avv
./avv
*/

#include<stdio.h>

int min(int a, int b){
    if(a < b){
        return a;
    }
    return b;
}

int main(){

    int quadras[1000][1000];
    int i,j,n,m;
    int soma,menor;
    
    scanf("%d %d",&n,&m);
    
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            scanf("%lld",&quadras[i][j]);
        }
    }
    
    menor = 0;
    for(i = 0; i < n; i++){
        menor += quadras[i][0];
    }
    
    for(j = 1; j < m; j++){
        soma = 0;
        for(i = 0; i < n; i++){
            soma += quadras[i][j];
        }
        menor = min(menor,soma);
    }
    
    printf("%d\n",menor);
    
    return 0;
}
