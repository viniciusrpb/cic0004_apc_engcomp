"""
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Monitora Mayara C. Marinho

Tópico: 
Objetivo: Solução do problema beecrowd 1743 - Máquina de Verificação Automatizada (Ricardo Anido, UNICAMP)
          https://judge.beecrowd.com/pt/problems/view/1743

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_1743.c -o maquina
./maquina
"""

# Leitura da entrada
lista_pontos = list(input().split())
lista_pontos_par = list(input().split())

tamanho = len(lista_pontos)

# Analise ponto a ponto
for i in range(tamanho):
    # Se os pontos foram iguais
    if lista_pontos[i] == lista_pontos_par[i]:
        # Informa que nao sao compativeis
        print('N')
        exit()
    
print('Y')

