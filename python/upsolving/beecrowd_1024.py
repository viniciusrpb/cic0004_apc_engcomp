"""
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Monitora Mayara C. Marinho

Tópico: 
Objetivo: Solução do problema beecrowd 1024 - Criptografia (Neilor Tonin)
          https://judge.beecrowd.com/pt/problems/view/1024

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_1024.c -o cripto
./cripto
"""

# Leitura da entrada
qtd_mensagens = int(input())

for i in range(qtd_mensagens):
    # Leitura de uma mensagem por linha
    mensagem = list(input())

    # O ".isalpha()" retorna True se o caractere for uma letra
    # O "ord()" converte um caractere unicode em um inteiro
    # O "chr()" converte um inteiro em um caractere unicode
    mensagem_deslocada = ''.join(chr(ord(c) + 3) if c.isalpha() else c for c in mensagem)

    # Uma lista seguida de "[::-1]" significa que 
    # ela sera percorrida do final para o inicio de -1 em -1
    mensagem_invertida = mensagem_deslocada[::-1]
    
    tamanho = len(mensagem)
    metade = tamanho // 2 # O operador "//" retorna um valor inteiro

    # Uma lista seguida de "[0:metade]" significa que estamos 
    # pegando do indice 0 ao indice armazenado na variavel 'metade'
    mensagem_metade_inicial = ''.join(mensagem_invertida[0:metade])
    # O deslocamento eh realizado na segunda metade da mensagem
    mensagem_metade_final = ''.join(chr(ord(c) - 1) for c in mensagem_invertida[metade:])
    # Soma das metades
    mensagem_criptografada = mensagem_metade_inicial + mensagem_metade_final

    # Impressao dos resultados
    print(f'{mensagem_criptografada}')
