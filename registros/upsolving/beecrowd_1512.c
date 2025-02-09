/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Autor: Vinicius R. P. Borges

Tópico: Vetores
Objetivo: Solução do problema beecrowd 1512 - Azulejos
          https://judge.beecrowd.com/pt/problems/view/1512

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_1512.c -o azulejos
./azulejos
*/

#include<stdio.h>

int gcd(int a, int b){
    if(b == 0){
        return a;
    }

    return gcd(b,a%b);
}

int lcm(int a, int b){
    return (a*b)/gcd(a,b);
}

int solve(int n, int a, int b){
    return n/a + n/b - n/lcm(a,b);
}

int main(){
    int a,b,n;

    scanf("%d %d %d",&n,&a,&b);

    while(n != 0 && a != 0 && b != 0){
        printf("%d\n",solve(n,a,b));
        scanf("%d %d %d",&n,&a,&b);
    }

    return 0;
}
