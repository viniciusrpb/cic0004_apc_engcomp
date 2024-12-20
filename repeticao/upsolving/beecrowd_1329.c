/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Prof. Dr. Vinícius R. P. Borges

Tópico: Estruturas de Repeticao
Objetivo: Solução do problema beecrowd 1329 - Head or Tail (Maratona SBC de Programação 2004)
          https://www.beecrowd.com.br/judge/pt/problems/view/1329

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_1329.c -o ht
./ht
*/

#include <stdio.h>

void solve_test_case(int n){
    int i,ri,mary,john;
    
    mary = 0;
    john = 0;
    
    for(i = 0; i < n;i++)
    {
        scanf("%d",&coin);
        if(!coin){
            mary++;
        }
        else{
            john++;
        }
    }
    printf("Mary won %d times and John won %d times\n",mary,john);
}

int main(){
    int x;

    scanf("%d",&x);
    
    while(x != 0){
        solve_test_case(x);
        scanf("%d",&x);
    }
    return 0;
}
