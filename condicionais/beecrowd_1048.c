/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Monitora Mayara C. Marinho

Tópico: Aumento de Salário
Objetivo: Solução do problema beecrowd 1048 - Aumento de Salário (Neilor Tonin)
          https://judge.beecrowd.com/pt/problems/view/1048

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_1048.c -o salario
./salario
*/

#include <stdio.h>
 
int main() {
    // Declaracao de variaveis
    double salary, new_salary, readjustment_gain, readjustment_perc;

    // Leitura de valores
    scanf("%lf", &salary);

    // Definicao do ajuste em porcentagem com base no salario
    if (salary <= 400.00) {
        readjustment_perc = 15;
    } else if (salary > 400.00 && salary <= 800.00) {
        readjustment_perc = 12;
    } else if (salary > 800.00 && salary <= 1200.00) {
        readjustment_perc = 10;
    } else if (salary > 1200.00 && salary <= 2000.00) {
        readjustment_perc = 7;
    } else if (salary > 2000.00) {
        readjustment_perc = 4;
    }

    // Calculo do novo salario
    new_salary = salary * (1 + readjustment_perc / 100);
    readjustment_gain = new_salary - salary;

    // Impressao da saida
    printf("Novo salario: %.2lf\n", new_salary);
    printf("Reajuste ganho: %.2lf\n", readjustment_gain);
    printf("Em percentual: %.0lf %%\n", readjustment_perc);
 
    return 0;
}