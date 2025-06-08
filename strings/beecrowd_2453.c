/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Monitora Thaís Rocha

Tópico: Strings
Objetivo: Solução do problema beecrowd 2453 - Língua do P
          https://judge.beecrowd.com/pt/problems/view/2453

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_2453.c -o lingua
./lingua
*/


#include <stdio.h>

int main () {

    char codigo[1001]; // tamanho max da string + '\0'
    int i, posicao = 0; 
    /* 'posicao' sera o "contador" para identificar as letras que queremos
    observe que toda palavra comecarah com p, a via de regra, e logo depois
    sera a letra que iremos usar. assim, o contador nos dira quais posicoes 
    contem o caractere que devemos retornar */

    scanf("%[^\n]", codigo); // leitura com os espaços
    getchar();

    for(i=0; codigo[i] != '\0'; i++){
      
        if(codigo[i] == ' '){ 
            posicao--; 
        }
      
        /* o vetor de caracteres comeca na posicao 0, entao a primeira letra p 
        sera indice par e a letra que queremos retornar sera indice impar (exemplo). 
        quando houver espaco a contagem vai baguncar, então podemos decrementar 
        a posicao, como se o caractere espaco nao fizesse parte da contagem. dessa
        forma, podemos prosseguir com a logica de impar-par. */
      
        if((posicao %2) != 0){
            printf("%c", codigo[i]);
        }
      
        posicao++;
    }

    printf("\n");

    return 0;
}
