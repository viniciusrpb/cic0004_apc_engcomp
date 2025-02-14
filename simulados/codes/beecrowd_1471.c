/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Autor: Vinicius R. P. Borges

Tópico: Vetores
Objetivo: Solução do problema beecrowd 1471 - Mergulho
          https://judge.beecrowd.com/pt/problems/view/1471

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_1471.c -o dive
./dive
*/

#include<stdio.h>

int main(){
    int i,n,r,a,m;
    
    int divers[10001];
    
    while(scanf("%d %d",&n,&r)!=EOF){

        // Inicializa o vetor com zeros
        for(i = 1; i <= n; i++){
            divers[i] = 0;
        }

        // Marca no vetor que o mergulhador "a" retornou
        for(i = 0; i < r; i++){
            scanf("%d",&a);
            divers[a]++;
        }

        // Verifica quantos mergulhadores nao retornaram
        m = n-r;

        // Se todos retornaram, imprime '*'
        if(m == 0){
            printf("*");
        }
        else{
            // Passa por todos os mergulhadores
            for(i = 1; i <= n; i++){

                // Se o i-esimo mergulhador nao retornou, imprime i
                if(divers[i] == 0){
                    printf("%d ",i);
                }
            }
        }
        printf("\n");
    }
    
    return 0;
}
