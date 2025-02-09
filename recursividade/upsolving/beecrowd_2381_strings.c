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

void ordena(char vstr[100][51], int n){
    int i,j;
    char aux[51];
    
    for(i = 0; i < n-1; i++){
        for(j=i+1; j < n; j++){
            if(strcmp(vstr[i],vstr[j]) > 0){
                strcpy(aux,vstr[i]);
                strcpy(vstr[i],vstr[j]);
                strcpy(vstr[j],aux);
            }
        }
    }
}

int main(){

    int i,n,k;
    char turma[100][51];
    
    scanf("%d %d",&n,&k);
    
    for(i = 0; i < n; i++){
        getchar();
        scanf("%s",turma[i]);
    }
    
    ordena(turma,n);
    
    printf("%s\n",turma[k-1]);
    
    return 0;
}
