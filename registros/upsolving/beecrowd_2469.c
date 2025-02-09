/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Autor: Vinicius R. P. Borges

Tópico: Vetores
Objetivo: Solução do problema beecrowd 2469 - Grades
          https://judge.beecrowd.com/pt/problems/view/2469

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_2469.c -o freq
./freq
*/

#include<stdio.h>

int main(){

    int i,n,nota,indice_maior,maior;
    int histograma[101];
    
    scanf("%d",&n);
    
    for(i = 0; i < 101; i++){
        histograma[i]=0;
    }
    
    for(i = 0; i < n; i++){
        scanf("%d",&nota);
        histograma[nota]++;
    }
    
    indice_maior = 0;
    maior = histograma[indice_maior];
    
    for(i = 1; i < 101; i++){
        if(histograma[i] >= maior){
            maior = histograma[i];
            indice_maior = i;
        }
    }
    
    printf("%d\n",indice_maior);
    
    return 0;
}
