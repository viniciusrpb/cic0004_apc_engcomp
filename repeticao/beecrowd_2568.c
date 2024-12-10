/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Vinicius R. P. Borges

Tópico: Estruturas de Repetição (While)
Objetivo: Solução do problema beecrowd 2568 - Ações
          https://judge.beecrowd.com/pt/problems/view/2568

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_2568.c -o acoes
./acoes
*/

#include<stdio.h>

int main(){
    
    int ans,dia,dia_inicial,dia_final,valor,variacao,f;
    
    scanf("%d %d %d %d",&dia_inicial,&valor,&variacao,&f);
    
    ans = valor;       // valor inicialmente registrado
    dia = dia_inicial+1; // ja vai para o proximo dia
    dia_final = dia_inicial+f; // determina o dia daqui a f dias 
    
    while(dia <= dia_final){
        // se o dia for par, a variacao eh positiva
        if(dia % 2 == 0){
            ans = ans + variacao;
        }
        else{
            // se o dia for impar, a variacao eh negativa
            ans = ans - variacao;
        }
        dia++;
    }
    
    printf("%d\n",ans);
    
    return 0;
}
