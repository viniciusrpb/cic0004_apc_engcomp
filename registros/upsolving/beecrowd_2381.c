/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Autor: Vinicius R. P. Borges

Tópico: Estruturas e/ou Vetores de Strings
Objetivo: Solução do problema beecrowd 2381 - Call List
          https://judge.beecrowd.com/pt/problems/view/2381

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_2381.c -o call
./call
*/

#include<stdio.h>
#include<string.h>

struct aluno{
    char nome[51];
};

typedef struct aluno Aluno;

void ordena(Aluno a[100], int n){
    int i,j;
    Aluno aux;
    
    for(i = 0; i < n-1; i++){
        for(j=i+1; j < n; j++){
            if(strcmp(a[i].nome,a[j].nome) > 0){
                aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
        }
    }
}

int main(){

    int i,n,k;
    Aluno turma[100];
    
    scanf("%d %d",&n,&k);
    
    for(i = 0; i < n; i++){
        getchar();
        scanf("%s",turma[i].nome);
    }
    
    ordena(turma,n);
    
    printf("%s\n",turma[k-1].nome);
    
    return 0;
}
