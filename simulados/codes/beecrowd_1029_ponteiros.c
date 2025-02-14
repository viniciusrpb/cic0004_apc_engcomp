/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Autor: Vinicius R. P. Borges

Tópico: Recursividade e Passagem por Referência
Objetivo: Solução do problema beecrowd 1029 - Fibonacci, How Many Calls?
          https://judge.beecrowd.com/pt/problems/view/1029

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_1029_ponteiros.c -o fib
./fib
*/

#include <stdio.h>

typedef long long ll;

// Sequencia de fibonacci: 0,1,1,2,3,5,8,13,21,34,...

ll solve(int n, int *calls){

    ll resposta;
    
    // as variaveis abaixo guardam a quantidade de chamadas para os subproblemas fib(n-1) e fib(n-2), respectivamente
    int calls1,calls2;
    
    // primeiro caso base, quando n == 0, contabiliza-se a chamada em calls e retorna 0;
    if(n == 0){
        *calls = 1;
        return 0; 
    }
    
    // segundo caso base, quando n == 1, contabiliza-se a chamada em calls e retorna 1;
    if(n == 1){
        *calls = 1;
        return 1; 
    }
    
    // armazena a resposta de fib(n) = fib(n-1)+fib(n-2)
    resposta = solve(n-1,&calls1) + solve(n-2,&calls2);
    
    // contabiliza as chamadas de fib(n-1) e fib(n-2) em fib(n)
    *calls = calls1 + calls2+1;
    
    return resposta;
}

int main(){
    int n,x,i,calls;
    ll fib;
    
    scanf("%d",&n);

    while(n > 0){
        
        scanf("%d",&x);
        
        // chama a funcao "solve", passando "x" por valor e "calls" por referência
        // "calls" armazena a resposta da quantidade de chamadas da funcao "solve"
        // fib armazena a resposta do fibonacci
        fib=solve(x,&calls);
        
        printf("fib(%d) = %d calls = %lld\n",x,calls-1,fib);
        
        n--;
    }
    
    return 0;
}
