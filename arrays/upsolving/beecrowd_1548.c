/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Vinicius R. P. Borges

Tópico: Vetores
Objetivo: Solução do problema beecrowd 1548 - Fila na Cantina
          https://judge.beecrowd.com/pt/problems/view/1548

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_1548.c -o cantina
./cantina

*/

#include<stdio.h>
#define MAX_N 1000

void ordena(int v[MAX_N], int n){

    int i,j,aux;

    for(i = 0; i < n-1; i++){
        for(j = i+1; j < n; j++){
            if(v[i] < v[j]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
}

int solve(){
    int i,ans,m;
    
    // esse vetor sera ordenado em ordem decrescente
    int notas[MAX_N];
    
    // esse vetor armazena as criancas nas suas posicoes originais
    int original[MAX_N]; 

    scanf("%d",&m);

    for(i = 0; i < m; i++){
        scanf("%d",&notas[i]);
        original[i] = notas[i];
    }

    // ordena apenas o vetor notas
    ordena(notas,m);

    ans = 0;
    for(i = 0; i < m; i++){
        // se o aluno na i-esima posicao do vetor notas (apos ordenacao)
        // for o mesmo na mesma posicao do vetor original, entao
        // ele nao alterou seu lugar na fila
        if(notas[i] == original[i]){
            ans++;
        }
    }
    return ans;
}

int main(){
    int n,ans;

    scanf("%d",&n);

    while(n != 0){

        ans = solve();

        printf("%d\n",ans);

        n--;
    }
    return 0;
}
