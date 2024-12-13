/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Autor do Problema: Caleb Martim

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc gatos.c -o cat
./cat
*/

#include<stdio.h>

int main(){
    int dentro,fora,casa,g,w,h;
    
    scanf("%d %d %d",&g,&h,&w);
    
    // calcula a capacidade maxima de gatos dentro da casa
    casa = h*w;
    
    // ha mais gatos do que a capacidade maxima da casa?
    if(g >= casa){
        // se sim, a quantidade maxima de gatos eh
        // igual a capacidade maxima da casa
        dentro = casa;
        // calcula-se o excedente de gatos que ficarao de fora da casa
        fora = g-casa;
    }
    else{
        // se ha menos gatos do que a capacidade maxima da casa
        // todos os gatos ficam dentro da casa
        dentro = g;
        // nenhum gato fica de fora da casa
        fora = 0;
    }
    
    printf("%d %d\n",dentro,fora);
    
    return 0;
}
