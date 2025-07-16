/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Autor: Vinicius R. P. Borges (adaptado de Beecrowd 2410)

https://judge.beecrowd.com/en/problems/view/2410

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc frequencia.c -o freq
./freq
*/

#include <stdio.h>
 
int main() {
 
    int freq[200001];
    int ans,i,n,a;
    
    scanf("%d",&n);
    
    for(i = 0; i < 200001; i++){
        freq[i] = 0;
    }
    
    ans = 0;
    
    for(i = 0; i < n; i++){
        scanf("%d",&a);
        freq[a]++;
        if(freq[a] == 1){
            ans++;
        }
    }
    
    printf("%d\n",ans);
 
    return 0;
}
