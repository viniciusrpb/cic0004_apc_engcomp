/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Autor: Vinicius R. P. Borges

Tópico: Funcoes
Objetivo: Solução do problema beecrowd 2313 - Qual Triangulo
          https://judge.beecrowd.com/pt/problems/view/2313

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_2313.c -o triang
./triang
*/

#include<stdio.h>

int isValid(int a, int b, int c){
    if(a+b > c && a+c > b && b+c > a){
        return 1;
    }
    else{
        return 0;
    }
}

int isEquilatero(int a, int b, int c){
    if(a == b && b == c){
        return 1;
    }
    else{
        return 0;        
    }
}

int isIsoceles(int a, int b, int c){
    if((a == b && b != c) || (a == c && b !=c) || (b == c && a!=c)){
        return 1;
    }
    else{
        return 0;        
    }
}

int isRetangulo(int a, int b, int c){
    if((a*a == (b*b + c*c)) || (b*b == (a*a + c*c)) || (c*c == (a*a + b*b))){
        return 1;
    }
    else{
        return 0;        
    }
}

int main(){
    
    int a,b,c;
    
    scanf("%d %d %d",&a,&b,&c);
    
    if(isValid(a,b,c) == 1){
        if(isEquilatero(a,b,c) == 1){
            printf("Valido-Equilatero\n");
        }
        else if(isIsoceles(a,b,c) == 1){
            printf("Valido-Isoceles\n");
        }
        else{
            printf("Valido-Escaleno\n");
        }
        
        if(isRetangulo(a,b,c) == 1){
            printf("Retangulo: S\n");
        }
        else{
            printf("Retangulo: N\n");
        }
    }
    else{
        printf("Invalido\n");
    }
    return 0;
}
    
    
    
