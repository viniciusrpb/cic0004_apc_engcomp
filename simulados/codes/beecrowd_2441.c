/* CIC0004 - Algoritmos e Programação de Computadores
   Beecrowd 2441 - Janela
   Prof. Dr. Vinicius Ruela Pereira Borges */

#include<stdio.h>

int main(){
    int f1,f2,f3,aux,area,sobf1f2,sobf2f3;

    scanf("%d %d %d",&f1,&f2,&f3);

    if(f1 > f2){
        aux = f1;
        f1 = f2;
        f2 = aux;
    }
    if(f2 > f3){
        aux = f2;
        f2 = f3;
        f3 = aux;
    }
    if(f1 > f2){
        aux = f1;
        f1 = f2;
        f2 = aux;
    }

    // calcula a sobreposicao da folha f2 em relacao a f1, isto eh, calcula-se tambem o excesso de folha 2
    sobf1f2 = f2-f1;

    // calcula a sobreposicao da folha f3 em relacao a f2, isto eh, calcula-se tambem o excesso de folha 2
    sobf2f3 = f3-f2;

    // repare que, devido a ordenacao crescente (f1 <= f2 <= f3), nao eh necessario calcular sobreposicao
    // entre as folhas f1 e f3

    // inicializa o calculo da area
    area = 0;

    // calcula a area que sobra para as folhas f1 e f2
    if(sobf1f2 <= 200){
        area = area + (200-sobf1f2);
    }

    // calcula a area que sobra para as folhas f2 e f3
    if(sobf2f3 <= 200){
        area = area + (200-sobf2f3);
    }

    area=area*100;
    printf("%d\n",area);

    return 0;
}
