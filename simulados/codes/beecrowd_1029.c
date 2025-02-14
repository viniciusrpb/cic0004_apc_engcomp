/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Autor: Vinicius R. P. Borges

Tópico: Recursividade e Passagem por Referência
Objetivo: Solução do problema beecrowd 1029 - Fibonacci, How Many Calls?
          https://judge.beecrowd.com/pt/problems/view/1029

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_1029.c -o fib
./fib
*/

#include <stdio.h>

typedef long long ll;

ll solve(int n, int calls[40]){

    ll resposta;

    // primeiro caso base, quando n == 0, contabiliza-se a chamada em calls e retorna 0;
    if(n == 0){
        calls[n] = 1;
        return 0; 
    }

    // segundo caso base, quando n == 1, contabiliza-se a chamada em calls e retorna 1;
    if(n == 1){
        calls[n] = 1;
        return 1; 
    }

    // armazena a resposta de fib(n) = fib(n-1)+fib(n-2)
    resposta = solve(n-1,calls) + solve(n-2,calls);

    // contabiliza as chamadas de fib(n-1) "calls[n-1]" e fib(n-2) "calls[n-2]" em calls[n]
    calls[n] = calls[n-1] + calls[n-2]+1;
  
    return resposta;
}

int main(){
    int n,x,i;
    ll fib;
  
    // calls[i]: armazena a quantidade de chamadas para resolver fibonacci(i)
    int calls[40];
    
    scanf("%d",&n);

    while(n > 0){
        // Inicializa o vetor de chamadas
        for(i = 0; i <= 40; i++){
            calls[i]=-1;
        }
        scanf("%d",&x);

        // chama a funcao "solve", passando "x" por valor e "calls" por referência
        // "calls" armazena a resposta da quantidade de chamadas de fibonacci(n) - resolvido pela funcao "solve"
        // a variavel "fib" armazena somente a resposta do fibonacci
        fib=solve(x,calls);
      
        printf("fib(%d) = %d calls = %lld\n",x,calls[x]-1,fib);
        n--;
    }
    return 0;
}
