# 4.1. Expressões de Comparação

Em Linguagem C, uma condição é formulada por meio de uma única comparação ou por uma expressão de comparações (contendo uma combinação de várias comparações). As expressões de comparação sempre retornam um valor verdade (Booleano): **Verdadeiro** ou **Falso**. Como não existem tipos específicos **bool** na Linguagem C, variáveis inteiras são utilizadas para armazenar e representar seguindo a convenção:

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

## Ordens de Precedência

Na Linguagem C, o uso de várias expressões comparativas nas condicionais são avaliadas com base na ordem de precedência dos operadores. Os operadores são apresentados a seguir, da mais alta de precedência para a mais baixa:

1) Parênteses, usados para agrupar expressões e alterar a ordem de avaliação: ```()```;
2) Operador de negação lógica (não): ```!```;
3) Multiplicação, divisão e resto da divisão: ```*```, ```/```, ```%```;
4) Adição e subtração: ```+```, ```-```;
5) Operadores de comparação: ```<```, ```<=```, ```>```, ```>=```;
6) Operadores de igualdade e diferença, respectivamente: ```==``` e ```!=```;
7) Operador lógico E: ```&&```;
8) Operador lógico OU: ```||```.

Em uma expressão comparativa, os operadores com maior precedência são avaliados primeiro em relação aos demais. Para isso, o compilador analisa a sintaxe da expressão, identificando os operandos e os operadores. Se houver operadores com a mesma precedência, a associatividade dos operadores irá determinar a ordem de avaliação das comparações. Por exemplo, a expressão comparativa abaixo:

```a > 0 && b != -1 || a > b```

é processada na seguinte ordem:

1. ```a > 0```, retornando um valor verdade (bool1)
2. ```b != -1```, retornando um valor verdade (bool2)
3. ```a > b```, retornando um valor verdade (bool3)

e depois, com as precedências menores, os operadores lógicos, já que temos que processar algo na forma:

```bool1 && bool2 || bool3```

o operador lógico ```&&``` é então executado, retornando-se o valor verdade bool4:

```bool4 || bool3```

Por fim, executa-se a expressão lógica acima.

Se houver dúvidas quanto ao uso das ordens de avaliação, prefira usar os parênteses para deixar claro qual é a ordem desejada de processamento das expressões comparativas.
