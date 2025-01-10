/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Vinicius R. P. Borges

Tópico: Vetores
Objetivo: Solução do problema beecrowd 1961 - Pula Sapo
          https://judge.beecrowd.com/pt/problems/view/1961

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_1961.c -o sapo
./sapo

*/

#include<stdio.h>

// Funcao que calcula o valor absoluto
int vabs(int a){
    if(a < 0){
        return a*(-1);
    }
    return a;
}


int solve(int v[100], int n, int p){
    int i;
    
    for(i = 0; i < n-1; i++){
        if(vabs(v[i+1] - v[i]) > p){
            // se o pulo do sapo for menor do que a altura entre duas
            // pilastras, retorna falha na conclusao de todos os pulos
            return 0;
        }
    }
    
    return 1;
}

int main(){
    int i,n,p;
    int cano[100];
    
    scanf("%d %d",&p,&n);
    
    for(i = 0; i < n; i++){
        scanf("%d",&cano[i]);
    }
    
    if(solve(cano,n,p)==1){
        printf("YOU WIN\n");
    }
    else{
        printf("GAME OVER\n");
    }
    
    return 0;
}
