/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Monitora Mayara C. Marinho

Tópico: Estruturas de Repetição
Objetivo: Solução do problema beecrowd 3084 - Relógio Antigo
          https://judge.beecrowd.com/pt/problems/view/3084

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_3084.c -o relogio_antigo
./relogio_antigo
*/

#include <stdio.h>

int main() {
    // Declaracao de variaveis
    int h, m;

    // Leitura da hora e do minuto em graus ate EOF
    while (scanf("%d %d", &h, &m) != EOF) {

        // Se a volta completa ao relogio possui 360 graus,
        // e isso simboliza 12 horas,
        // o valor em horas eh equivalente a: graus/30.
        // Pensamento analogo para minutos,
        // pois 360 graus equivalem a 60*12=360

        // Calcular a hora
        double hora = h / 30.0 + m / 360.0;

        // Calcular o minuto
        double minuto = m / 6.0;

        // Impressao da saida
        printf("%02d:%02d\n", (int)hora, (int)minuto);
    }

    return 0;
}
