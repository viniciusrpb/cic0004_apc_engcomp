/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Monitora Mayara C. Marinho

Tópico: De Dentro para Fora
Objetivo: Solução do problema beecrowd 1235 - De Dentro para Fora (TopCoder)
          https://judge.beecrowd.com/pt/problems/view/1235

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_1235.c -o de_dentro_para_fora
./de_dentro_para_fora
*/

#include <stdio.h>
#include <string.h>

// Função para imprimir a linha conforme o padrão invertido
void reverse_print(const char *str) {
    int len = strlen(str);
    int i;

    // Imprime a primeira metade da linha de trás para frente
    for (i = (len / 2) - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    
    // Imprime a segunda metade da linha de trás para frente
    for (i = len - 1; i >= len / 2; i--) {
        printf("%c", str[i]);
    }
    
    printf("\n");
}

int main() {
    int N, i;
    int line_size = 100 + 1; // Comprimento maximo de uma linha eh 100
    char line[line_size];  
    
    scanf("%d", &N); // Ler numero de linhas
    getchar();
    
    // Loop para processar cada caso de teste
    for (i = 0; i < N; i++) {
        // Ler uma linha de entrada
        scanf("%[^\n]s", line); // Lê até encontrar uma quebra de linha
        // Remove o caractere de nova linha, se houver
        getchar();
        // Chama a função para imprimir a linha corrigida
        reverse_print(line);
    }
    
    return 0;
}
