/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Autor: Vinicius R. P. Borges

Tópico: Estruturas de Repetição
Objetivo: Solução do problema beecrowd 2879 - Desvendando Monty Hall
          https://judge.beecrowd.com/pt/problems/view/2879

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_2879.c -o hall
./hall
*/

#include<stdio.h>

int main(){
    int i,n,porta,ans;
  
    scanf("%d",&n);
    
    ans = 0;

    /* o jogador sempre escolhe a porta 1 */

    /* simulacao de n jogadas */
    for(i = 0; i < n; i++){
        /* leitura da porta que contem o carro */
        scanf("%d",&porta);

        /* o apresentador abre uma porta qualquer que tenha o bode (!= de porta). O jogador muda para a outra porta que nao contem o bode */

        /* o jogador somente leva o carro se a porta que contem o carro nao for a primeira */
        if(porta != 1){
            ans++;
        }
    }
    
    printf("%d\n",ans);
    
    return 0;
}
