/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Autor: Vinicius R. P. Borges

Tópico: Estruturas Condicionais
Objetivo: Solução do problema beecrowd 2235 - Walking in Time
          https://judge.beecrowd.com/pt/problems/view/2235

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_2235.c -o notempo
./notempo
*/

#include <stdio.h>
 
int main() {
 
    int a,b,c;
    
    scanf("%d %d %d",&a,&b,&c);
    
    if( a == c || b == a || b == c){
        // a condicao acima verifica se eh possivel fazer exatamente duas viagens com dois creditos
        // viagem de ida usando um credito, viagem de volta usando o mesmo valor de creditos
        printf("S\n");
    } else if((a+b) == c || (a+c) == b || (b+c) == a){
        // a condicao acima verifica se eh possivel fazer exatamente duas viagens com tres creditos
        // 2 creditos para ida e 1 para volta
        printf("S\n");
    } else {
        printf("N\n");
    } 
    
    return 0;
}
