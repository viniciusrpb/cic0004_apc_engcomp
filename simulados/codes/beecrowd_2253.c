/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Autor: Vinicius R. P. Borges

Tópico: Strings
Objetivo: Solução do problema beecrowd 2253 - Passwords Validator
          https://judge.beecrowd.com/en/problems/view/2253

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_2253.c -o password
./password
*/

#include<stdio.h>
#include<string.h>

int ehMinusculo(char c){
    if(c >= 97 && c <= 122){
        return 1;
    }
    return 0;
}

int ehMaiusculo(char c){
    if(c >= 65 && c <= 90){
        return 1;
    }
    return 0;
}

int ehDigitoNumerico(char c){
    if(c >= 48 && c <= 57){
        return 1;
    }
    return 0;
}

int solve(char password[1001]){

    int i,n,minusculos,maiusculos,numeros;

    n = strlen(password);

    if(n < 6 || n > 32){
        return 0;
    }
    
    minusculos = 0;
    maiusculos = 0;
    numeros = 0;
    
    for(i = 0; i < n; i++){
        if(ehMinusculo(password[i]) == 1){
            minusculos++;
        } else if(ehMaiusculo(password[i]) == 1){
            maiusculos++;
        } else if(ehDigitoNumerico(password[i]) == 1){
            numeros++;
        } else {
            return 0;
        }
    }
    
    if(minusculos >= 1 && maiusculos >= 1 && numeros >= 1){
        return 1;
    } else {
        return 0;
    }
}

int main(){
    char password[1001];

    while(scanf("%[^\n]s",password)!=EOF){
    
        getchar();
        
        if(solve(password) == 1){
            printf("Senha valida.\n");
        } else {
            printf("Senha invalida.\n");
        }
    }

    return 0;
}
