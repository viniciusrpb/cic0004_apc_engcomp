/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Autor: Vinicius R. P. Borges

Tópico: Estruturas Condicionais
Objetivo: Solução do problema beecrowd 2057 - Time Zone
          https://judge.beecrowd.com/pt/problems/view/2057

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_2057.c -o fuso
./fuso
*/

#include <stdio.h>
 
int main() {
 
    int s,t,f,chegada;
    
    scanf("%d %d %d",&s,&t,&f);
    
    // o raciocionio consiste em somar:
    // hora de embarque + tempo de viagem + fuso horário, obtendo-se o horario de chegada na cidade destino
    chegada = s+t+f;
    
    // mas o planeta tem "24 horas". Temos que ajustar a resposta
    // para evitar horários negativos e maiores do que 24 horas
    if(chegada < 0){
        // se der um horario de chegada negativo, p. ex., -2,
        // significa que o horario de chegada eh 22 horas!
        chegada = 24+chegada;
    } else if(chegada > 24){
        // se der um horario de chegada maior do que 24, p. ex, 27
        // entao o horario de chegada foi 03 horas da manha!
        chegada = chegada-24;
    } 
    
    printf("%d\n",chegada);
    
    return 0;
}
