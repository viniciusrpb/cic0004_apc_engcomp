/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Autor: Vinicius R. P. Borges

Tópico: Vetores
Objetivo: Solução do problema beecrowd 1414 - World Cup
          https://judge.beecrowd.com/pt/problems/view/1414

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_1414.c -o copa
./copa
*/

#include<stdio.h>

#define MAX_PAISES 200
#define MAX_NOME 11

int solve(int t, int n){
    int i,ans,total;
    int rank[MAX_PAISES];
    char nome[MAX_NOME];

    // veja que o nome do time nao eh importante para a resolucao do problema
    // assim vamos descartar os nomes dos times logo apos suas leituras
    for(i = 0; i < t; i++){
        getchar();
        scanf("%s %d",nome,&rank[i]);
    }

    // calcula o total de pontos feitos pelos times
    total = 0;
    for(i = 0; i < t; i++){
        total += rank[i];
    }

    // sabemos que a vitoria fornece 3 pontos e que um empate nos fornece 1 ponto, mas cada equipe no empate ganha
    // 1 ponto, o que geram 2 pontos no somatorio total entre os times
          
    // assim resposta eh o total de pontos (3*n) validos subtraido do total de pontos feitos por todos os times
    ans = 3*n - total;
          
    return ans;
}

int main(){

    int n,t,ans;
    
    scanf("%d %d",&t,&n);
    
    while(t != 0){
        
        ans = solve(t,n);
        
        printf("%d\n",ans);
        
        scanf("%d %d",&t,&n);
    }

    return 0;
}
