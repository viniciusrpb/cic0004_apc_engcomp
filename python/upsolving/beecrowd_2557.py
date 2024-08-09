def solveEquation(equation):
    esq,resultado = equation.split('=')
    #esq e resultado sao strings
    op1,op2 = esq.split('+')
    # ord retorna o codigo ascii de um caractere
    if ord(op1[0]) >= 65:
        ans = int(resultado)-int(op2)
    elif ord(op2[0]) >= 65:
        ans = int(resultado)-int(op1)
    else:
        ans = int(op1)+int(op2)

    return ans

while True:

    try:

        linha = input()
        resp = solveEquation(linha)
        print(resp)

    except EOFError:
       break
