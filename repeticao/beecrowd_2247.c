/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Monitora Mayara C. Marinho

Tópico: Estruturas de Repetição
Objetivo: Solução do problema beecrowd 2247 - Cofrinhos da Vó Vitória
          https://judge.beecrowd.com/pt/problems/view/2247

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_2247.c -o cofrinhos
./cofrinhos
*/

#include <stdio.h>

int main() {
    // Declaracao de variaveis
    int num_testes = 1, i, j, z, dif = 0, teste = 1;

    scanf("%d", &num_testes);
    // Leitura do ano ate 0
    while (num_testes != 0) {
        // Imprime o numero do teste
        printf("Teste %d\n", teste++);
        // Zera a diferenca
        dif = 0;
        
        // Para cada teste
        for (i = 0; i < num_testes; i++) {
            // Leitura dos cofrinhos j e z
            scanf("%d %d", &j, &z);
            // Imprime a diferenca
            dif += j - z;
            printf("%d\n", dif);
        }
        printf("\n");

        // Vai para o proximo teste
        scanf("%d", &num_testes);
    }

    return 0;
}
