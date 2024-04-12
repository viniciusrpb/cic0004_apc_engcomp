/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Monitora Mayara C. Marinho

Tópico: Imposto de Renda
Objetivo: Solução do problema beecrowd 1051 - Imposto de Renda (Neilor Tonin)
          https://judge.beecrowd.com/pt/problems/view/1051

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd1051.c -o imposto
./imposto
*/

#include <stdio.h>
 
int main() {
    // Declaracao de variaveis
    double income, remained_income, tax_percentage, tax_value = 0;

    // Leitura de valores
    scanf("%lf", &income);

    // Definicao do valor de imposto com base na renda
    if (income >= 0.00 && income <= 2000.00) {
        printf("Isento\n");
        return 0;
    }

    remained_income = income;

    if (income > 4500.00) {
        // Calculo do imposto para valores acima de 4500.00
        tax_value += (income - 4500.00) * (0.28);
        // Definicao da renda restante
        // (que ainda precisa ter o valor de imposto calculado)
        remained_income = 4500.00;
    }

    if (income > 3000.00) {
        // Calculo do imposto para valores entre 3000.00 e 4500.00
        tax_value += (remained_income - 3000.00) * (0.18);
        remained_income = 3000.00;
    }
    
    if (income > 2000.00) {
        // Calculo do imposto para valores entre 3000.00 e 4500.00
        tax_value += (remained_income - 2000.00) * (0.08);
        remained_income = 0;
    }

    // Impressao da saida
    printf("R$ %.2lf\n", tax_value);
 
    return 0;
}