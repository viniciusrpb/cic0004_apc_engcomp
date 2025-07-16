/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Autor: Vinicius R. P. Borges

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc pelotao_largada.c -o largada
./largada
*/

#include<stdio.h>

int main(){
    
    char str[200001];
    int i,ans;
    
    scanf("%s",str);

    ans = 1;
  
    for(i = 1; str[i] != '\0'; i++){
        if(str[i-1] > str[i]){
            ans++;
        }
    }
    
    printf("%d\n",ans);
    return 0;
}
