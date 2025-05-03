/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Autor: Vinicius R. P. Borges

Tópico: Estruturas Condicionais
Objetivo: Solução do problema beecrowd 3301 - Middle Nephew
          https://judge.beecrowd.com/pt/problems/view/3301

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_3301.c -o fii
./fii
*/

#include <stdio.h>
 
int main() {
 
    int h,z,l;
    
    scanf("%d %d %d",&h,&z,&l);
    
    // se a idade de huguinho for maior do que zezinho e a idade de zezinho for maior do que luisinho; OU
    // OU se a idade de luisinho for maior do que zezinho e a idade de zezinho for maior do que huguinho
    if((h > z && z > l) || (l > z && z > h)){
        printf("zezinho\n");
    } else if((z > h && h > l) || (l > h && h > z)){
        printf("huguinho\n");
    } else {
        printf("luisinho\n");
    } 
    
    return 0;
}
