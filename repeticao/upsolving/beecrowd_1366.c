/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Prof. Dr. Vinícius R. P. Borges

Tópico: Estruturas de Repeticao
Objetivo: Solução do problema beecrowd 1366 - Sticks Game (South America/Brazil Regional Contest - ACM/ICPC 2007)
          https://www.beecrowd.com.br/judge/pt/problems/view/1366

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_1366.c -o varetas
./varetas
*/

#include <stdio.h>

int solve(int n){
 
   int i,c,v,paresVaretas;
 
   paresVaretas = 0;

   // ideia: sempre preciso de 2 pares de varetas para formar um triangulo
 
   for(i = 0; i < n; i++){
        scanf("%d %d",&c,&v);
    
        paresVaretas += v/2; // nao me interessa o resto dessa divisao!
   }
   
   return paresVaretas/2;   
}
 
int main() {
 
    int n,ans;
    
    scanf("%d",&n);
    
    while(n!=0){
        ans = solve(n);
        printf("%d\n",ans);
        scanf("%d",&n);
    }
 
    return 0;
}
