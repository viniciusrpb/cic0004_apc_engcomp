/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Autor do Problema: Olimpiada Brasileira de Informatica 2002´

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc hotdog.c -o bin
./bin
*/

#include<stdio.h>

int main(){
    
    double ans,h,p;
    
    scanf("%lf %lf",&h,&p);
    
    ans = h/p;
    
    printf("%.2lf\n",ans);
    
    return 0;
}
