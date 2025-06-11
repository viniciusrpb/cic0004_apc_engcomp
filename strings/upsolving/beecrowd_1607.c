/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Dr. Vinicius R. P. Borges

Tópico: Strings
Objetivo: Solução do problema beecrowd 1607 - Advancing Letters
          https://judge.beecrowd.com/pt/problems/view/1607

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_1607.c -o avante
./avante
*/

#include<stdio.h>
#include<string.h>

int main(){
    int i,n,t,custo_minimo;
    char a[10001], b[10001];
    scanf("%d",&t);

    while(t > 0){
        scanf("%s %s",a,b);
        n = strlen(a);
        // variavel que armazena a resposta:
        // o custo minimo de operacoes para transformar a string a na string b
        custo_minimo = 0;

        // percorre caractere a caractere
        for(i = 0; i < n; i++){

            if(b[i] >= a[i]){
                custo_minimo += b[i]-a[i]; //igual a custo_minimo=custo_minimo+(b[i]-a[i]);
              
            } else {
                // para sair do caractere a[i] e chegar em b[i], deve-se sair fazer o avanco como:
                // ... x -> w -> y -> z -> a -> b-> c -> d ... Por isso, coloca-se o +26 para evitar
                // valores negativos
                custo_minimo += 26 + b[i]-a[i];
            }
        }
      
        printf("%d\n",custo_minimo);
        t--;
    }
    return 0;
}
