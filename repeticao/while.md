# Laço While



## Estrutura Básica

A estrutura de repetição while é usada para repetir um bloco de código enquanto uma condição específica for verdadeira. A sintaxe básica é a seguinte:

c
Copy code
while (condição) {
    // Bloco de código a ser repetido
}
Aqui está como funciona:

Inicialização: Antes de entrar no loop, a condição é avaliada. Se a condição for verdadeira, o bloco de código dentro do while é executado. Se a condição for falsa desde o início, o bloco de código dentro do while nunca será executado.
Execução do Loop: Se a condição for verdadeira, o bloco de código dentro do while é executado. Após a execução do bloco de código, o programa volta para a avaliação da condição. Se a condição ainda for verdadeira, o bloco de código é executado novamente. Esse processo continua até que a condição se torne falsa.
Atualização da Condição: É importante garantir que a condição dentro do while mude eventualmente para evitar um loop infinito. Se a condição nunca se tornar falsa, o loop continuará executando indefinidamente, o que é geralmente indesejável.
Por exemplo, o seguinte código C imprime os números de 1 a 5 usando um loop while:

c
Copy code
#include <stdio.h>

int main() {
    int i = 1; // Inicialização da variável de controle
    
    while (i <= 5) { // Condição: enquanto i for menor ou igual a 5
        printf("%d\n", i); // Imprime o valor de i
        i++; // Atualiza i para o próximo número
    }
    
    return 0;
}
Este código vai imprimir:

Copy code
1
2
3
4
5
O loop while continua a imprimir os valores de i enquanto i for menor ou igual a 5. Quando i é atualizado para 6, a condição i <= 5 se torna falsa e o loop termina.

## Quando Utilizar?

O Laço While é mais indicado do que os demais tipos de laço em Linguagem C quando você estiver elaborando um algoritmo e tiver que executar blocos de comandos repetidas vezes, mas não se sabe de antemão quantas iterações serão feitas. Em outras palavras, não saberemos se teremos que executar exatamente ```n``` iterações, mas sim uma quantidade indefinida (mas finita) de vezes.








