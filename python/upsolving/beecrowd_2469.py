"""
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Monitora Mayara C. Marinho

Tópico: 
Objetivo: Solução do problema beecrowd 2469 - Notas (OBI - Olimpíada Brasileira de Informática 2014)
          https://judge.beecrowd.com/pt/problems/view/2469

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_2469.c -o notas
./notas
"""

# Leitura da entrada
qtd_alunos = int(input())
lista_notas = list(map(int, input().split()))
dicionario_freq_notas = {}

for nota in lista_notas:
    if nota in dicionario_freq_notas:
        dicionario_freq_notas[nota] += 1
    else:
        dicionario_freq_notas[nota] = 0

    max_val = max(dicionario_freq_notas.values())
    res = [x for x in dicionario_freq_notas if dicionario_freq_notas[x] == max_val]
# res = list(filter(lambda x: dicionario_freq_notas[x] == max_val, dicionario_freq_notas))
    nota_mais_frequente = max(res)

print(nota_mais_frequente)
