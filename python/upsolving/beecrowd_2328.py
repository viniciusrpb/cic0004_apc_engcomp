"""
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Monitora Mayara C. Marinho

Tópico: 
Objetivo: Solução do problema beecrowd 2328 - Chocolate (OBI - Olimpíada Brasileira de Informática 2007)
          https://judge.beecrowd.com/pt/problems/view/2328

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_2328.c -o chocolate
./chocolate
"""

pedacos_armazenados = 0

# Leitura da entrada
qtd_divisoes = int(input())
lista_divisoes = list(map(int, input().split()))

for i in range(qtd_divisoes):
    nova_divisao = lista_divisoes[i]
    pedacos_armazenados += nova_divisao-1

print(f'{pedacos_armazenados}')
