
/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Vinicius R. P. Borges

Tópico: Estruturas de Repetição
Objetivo: Solução do problema beecrowd 1585 - Fazendo Padorgas
          https://judge.beecrowd.com/pt/problems/view/1585

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_1585.c -o pipas
./pipas
*/

#include<stdio.h>

int main(){
    
    int i,n,a,b,area;
    
    scanf("%d",&n);
    
    i = 1;
    
    while(i <= n){
        scanf("%d %d",&a,&b);
        area = (a*b)/2;
        printf("%d cm2\n",area);
        i=i+1;
    }
    
    return 0;
}
