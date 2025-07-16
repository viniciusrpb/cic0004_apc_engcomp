/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Autor: Vinicius R. P. Borges

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc pamonhas.c -o bin
./bin
*/

#include <stdio.h>

int gcd(int a, int b){
    if(b == 0){
        return a;
    }
    return gcd(b,a%b);
}

int main(){
    int fit,doce,salgada,aux;

    scanf("%d %d %d",&doce,&salgada,&fit);

    aux = gcd(doce,salgada);

    printf("%d\n",gcd(aux,fit));
    
    return 0;
}
