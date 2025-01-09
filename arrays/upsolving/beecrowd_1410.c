/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Vinicius R. P. Borges

Tópico: Vetores
Objetivo: Solução do problema beecrowd 1410 - He is Offside
          https://judge.beecrowd.com/pt/problems/view/1410

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_1410.c -o impedimento
./impedimento
*/

#include<stdio.h>
#define MAX_N 11

void ordena(int v[MAX_N], int n){

    int i,j,aux;

    for(i = 0; i < n-1; i++){
        for(j = i+1; j < n; j++){
            if(v[i] > v[j]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
}

char solve(int a, int d){
    int i,j,num;
    int atacantes[MAX_N];
    int defensores[MAX_N];
    
    for(i = 0; i < a; i++){
        scanf("%d",&atacantes[i]);
    }
    
    for(i = 0; i < d; i++){
        scanf("%d",&defensores[i]);
    }
    
    ordena(atacantes,a);
    ordena(defensores,d);
    
    for(i = 0; i < a; i++){
        num = 0;
        j = 0;
        while(j <= d && atacantes[i] >= defensores[j]){
            j++;
        }
        if(j<2){
            return 'Y';
        }
    }
    return 'N';
}

int main(){

    int a,d;
    char ans;
    
    scanf("%d %d",&a,&d);
    
    while(a != 0 && d != 0){
        ans = solve(a,d);
        printf("%c\n",ans);
        scanf("%d %d",&a,&d);
    }
    
    return 0;
}
