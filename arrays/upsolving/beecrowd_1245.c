/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Vinicius R. P. Borges

Tópico: Vetores
Objetivo: Solução do problema beecrowd 1245 - Lost Boots
          https://judge.beecrowd.com/pt/problems/view/1245

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_1245.c -o botas
./botas
*/

#include <stdio.h>
#define MAX_M 60

int min(int a, int b){
    if(a < b){
        return a;
    }
    else{
        return b;
    }
}

int solve(int n){
    int i,num,ans,pares;
    char par;
    int botas_esq[MAX_M+1];
    int botas_dir[MAX_M+1];
    
    /*inicia todas as posicoes com zero*/
    for(i = 0; i <= MAX_M; i++){
        botas_esq[i] = 0;
        botas_dir[i] = 0;
    }
    
    for(i = 0; i < n; i++){
        scanf("%d %c\n",&num,&par);
        if(par == 'E'){
            botas_esq[num]++;
        }
        else{
            botas_dir[num]++;
        }
    }
    
    pares = 0;
    for(i = 30; i <= 60; i++){
        pares += min(botas_esq[i],botas_dir[i]);
    }
    return pares;
}
 
int main() {
 
    int n,ans;
    
    while(scanf("%d",&n)!=EOF){
        ans = solve(n);
        printf("%d\n",ans);
    }
 
    return 0;
}
