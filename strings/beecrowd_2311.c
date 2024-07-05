/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Monitora Mayara C. Marinho

Tópico: Saltos Ornamentais
Objetivo: Solução do problema beecrowd 2311 - Saltos Ornamentais (Leonardo Fernandes, IFSC)
          https://judge.beecrowd.com/pt/problems/view/2311

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_2311.c -o saltos_ornamentais
./saltos_ornamentais
*/

#include <stdio.h>

int main() {
    int i, j, num_entradas;
    float maior_nota, menor_nota, notas_somadas, nota_final, peso; 
    char atleta[100 + 1];
    float notas[7];

    // Leitura do numero de entradas
    scanf("%d", &num_entradas);

    for (i = 0; i < num_entradas; i++) {
        // Leitura do nome da atleta
        scanf("%s", atleta);

        // Leitura do peso
        scanf("%f", &peso);
        
        // Definimos os valores iniciais assim para podermos comparar corretamente depois
        notas_somadas = 0.0;
        maior_nota = 0.0;
        menor_nota = 10.0;
        // Leitura de notas
        for (j = 0; j < 7; j++) {
            scanf("%f", &notas[j]);
            // Armazenando a maior e a menor nota
            if (notas[j] > maior_nota) {
                maior_nota = notas[j];
            }
            if (notas[j] < menor_nota) {
                menor_nota = notas[j];
            }
            // Somando todas as notas
            notas_somadas += notas[j];
        }
        // Subtraindo a menor e a maior nota, e multiplicando pelo peso
        nota_final = (notas_somadas - menor_nota - maior_nota) * peso;

        printf("%s %.2f\n", atleta, nota_final);
    }
    
    return 0;
} 

