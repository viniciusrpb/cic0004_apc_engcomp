/* CIC0004 - Algoritmos e Programação de Computadores
   Beecrowd 2428 - Capital
   Prof. Dr. Vinicius Ruela Pereira Borges */

#include<stdio.h>

int main(){

    int a1,a2,a3,a4;

    scanf("%d %d %d %d",&a1,&a2,&a3,&a4);

    // Se conseguirmos formar dois novos retangulos de areas iguais
    // eh possivel obter um novo retangulo com duas avenidas perpendiculares
    if(a1*a2 == a3*a4 || a1*a3 == a2*a4 || a1*a4 == a2*a3){
        printf("S\n");
    }else{
        printf("N\n");
    }

    return 0;
}
