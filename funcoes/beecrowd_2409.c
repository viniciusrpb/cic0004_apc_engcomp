/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Autor: Vinicius R. P. Borges

Tópico: Estruturas Condicionais
Objetivo: Solução do problema beecrowd 2409 - Colchão
          https://judge.beecrowd.com/pt/problems/view/2409

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_2409.c -o colchao
./colchao
*/

#include<stdio.h>

int min(int a, int b){
    int menor;
    if(a < b){
        menor = a;
    }
    else{
        menor = b;
    }
    return menor;
}

int max(int a, int b){
    int maior;
    if(a > b){
        maior = a;
    }
    else{
        maior = b;
    }
    return maior;
}

int main(){
    int a,b,c,h,l;
    int maior_h,menor_h,maior_c,menor_c,meio;
    
    scanf("%d %d %d",&a,&b,&c);
    scanf("%d %d",&h,&l);
    
    maior_c = max(a,max(b,c));
    menor_c = min(a,min(b,c));
    
    meio = (a+b+c)-(maior_c+menor_c);
    
    maior_h = max(h,l);
    menor_h = min(h,l);
    
    if(maior_h >= meio && menor_h >= menor_c){
        printf("S\n");
    }
    else{
        printf("N\n");
    }
    
    return 0;
}
