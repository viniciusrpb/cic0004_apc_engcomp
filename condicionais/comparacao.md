# 4.1. Operadores de Comparação

Os operadores de comparação são expressões comparativas que retornam um valor verdade (Booleano): **Verdadeiro** ou **Falso**. Como não existem tipos específicos **bool** na Linguagem C, variáveis inteiras são utilizadas para armazenar e representar seguindo a convenção:

- Verdadeiro: valor inteiro diferente de zero
- Falso: valor inteiro igual a zero

## Comparações Simples

As notações a seguir consideram-se dois valores ```a``` e ```b```, que podem ser numéricos (```int```, ```float```, ```double``` e ```long long int```), ou do tipo ```char``` (lembrem-se da tabela ASCII).

### Igualdade (==)

Retorna verdadeiro se ```a``` for igual a ```b```, ou falso caso contrário. Basicamente, essa comparação responde a pergunta: "a é igual a b?"

Sintaxe da comparação:

```
a == b
```

### Diferente (!=)

Retorna verdadeiro se ```a``` for diferente de a ```b```, ou falso caso contrário. Basicamente, essa comparação responde a pergunta: "a é diferente de b?"

Sintaxe da comparação:

```
a != b
```

### Maior (>)

Retorna verdadeiro se ```a``` for maior de que ```b```, ou falso caso contrário. Basicamente, essa comparação responde a pergunta: "a é maior do que b?"

Sintaxe da comparação:

```
a > b
```

### Maior (>=)

Retorna verdadeiro se ```a``` for maior ou igual a ```b```, ou falso caso contrário. Basicamente, essa comparação responde a pergunta: "a é maior ou igual a b?"

Sintaxe da comparação:

```
a >= b
```

**Importante:** é errado digitar ```=>```, isso não existe.


### Menor (<)

Retorna verdadeiro se ```a``` for menor do que ```b```, ou falso caso contrário. Basicamente, essa comparação responde a pergunta: "a é menor do que b?"

Sintaxe da comparação:

```
a < b
```

### Menor ou igual (<=)

Retorna verdadeiro se ```a``` for menor ou igual a ```b```, ou falso caso contrário. Basicamente, essa comparação responde a pergunta: "a é menor ou igual a b?"

Sintaxe da comparação:

```
a <= b
```

## Operadores Lógicos para Múltiplas Comparações

A composição de múltiplos comparadores demanda o uso de operadores lógicos. Nas tabelas a seguir, as variáveis ```A``` e ```B``` são valores verdade, em que ```1``` é a constante associada ao valor verdadeiro, e ```0``` é o valor verdade falso.

### Operador Lógico NÃO (!)

 A | ! A    |
 --| ------ |
 0 |   1    |
 1 |   0    |
 
### Operador Lógico E (&&)

 A | B | A && B |
 --| --| ------ |
 0 | 0 |   0    |
 0 | 1 |   0    |
 1 | 0 |   0    |
 1 | 1 |   1    |

 ### Operador Lógico OU (||)

 A | B | A II B |
 --| --| ------ |
 0 | 0 |   0    |
 0 | 1 |   1    |
 1 | 0 |   1    |
 1 | 1 |   1    |


## Exemplos:

Verificar se um número inteiro ```x``` é não-negativo e ímpar:

 ```
x >= 0 && (x % 2) != 0
```

Verificar se o número inteiro ```x``` está contido no intervalo [a,b]:

 ```
x >= a && x <= b
```

Verificar se o número inteiro ```x``` está contido no intervalo [a,b):

 ```
x >= a && x < b
```

Verificar se um número inteiro  ```x``` é múltiplo de 3 ou múltiplo de 7:

 ```
x % 3 == 0 || x % 7 == 0
```
