# 3. Algoritmos Computacionais Sequenciais

## 3.2. Expressões Matemáticas

### Atribuição

Atribui o valor ```5``` à variável inteira ```a```:

```
int a;

a = 5;
```

Atribui o valor que está na variável inteira ```b``` à variável inteira ```a```:

```
int a,b;

a = 3;
b = 9;

a = b;
```

### Operadores Matemáticos

Em resumo, as operações matemáticas são descritas pela seguinte tabela:


Operação          | Operador em Linguagem C  | Exemplo       |
----------------- | -----------------------  | --------------|
Soma              |  +                       | s = a + b;    |
Subtração         |  -                       | s = a - b;    |
Multiplicação     |  *                       | s = a * b;    |
Divisão           |  /                       | s = a / b;    |
Resto de Divisão  |  %                       | s = a % b;    |


em que ```s```, ```a```, ```b``` são variáveis numéricas, isto é, inteiras ou reais. Idealmente, tente sempre fazer as operações em variáveis de mesmo tipo.

#### Soma 

Classicamente, é descrita na seguinte forma: "resultado" = "operando 1" + "operando 2"

Na Linguagem C, colocamos alguns exemplos de como realizar somas:

**Exemplo (1):** Somar uma constante a uma variável e armazenar o resultado em outra variável:

```
int a,b,soma;

a = 3;
b = 5;

soma = a+4;
```

**Exemplo (2):** Somar duas variáveis distintas e armazenar o resultado em outra variável:

```
int a,b,soma;

a = 3;
b = 5;

soma = a+b;
```

**Exemplo (3):** Somar um valor constante a uma variável e armazenar o resultado nela mesma:

```
int a;

a = 3;

a = a+3;   /* a+=3; */
```

**Exemplo (4):** Aumentar **exatamente** em uma unidade o valor de uma variável inteira **(só funciona com variáveis inteiras)**:

```
int a;

a = 3;

a++;
```

#### Subtração

**Exemplo (5):** Subtrair uma constante a uma variável e armazenar o resultado em outra variável:

```
int a,sub;

a = 3;

sub = a-2;
```

**Exemplo (6):** Subtrair uma constante a uma variável e armazenar o resultado em outra variável:

```
int a,b,sub;

a = 3;
b = 9;

sub = b-a;
```

#### Multiplicação

**Exemplo (7):** Multiplicar uma constante a uma variável e armazenar o resultado em outra variável:

```
int a,mul;

a = 3;

mul = a*2;
```

**Exemplo (8):** Multiplicar uma constante a uma variável e armazenar o resultado em outra variável:

```
int a,b,mul;

a = 3;
b = 9;

mul = a*b;
```

#### Divisão

**Exemplo (9):** Dividir uma variável por uma constante e armazenar o resultado em outra variável:

```
int a,div;

a = 4;

div = a/2;
```

**Exemplo (10):** Dividir uma variável por uma segunda variável e armazenar o resultado em uma terceira variável:


```
int a,b,div;

a = 12;
b = 2;

div = a/b;
```

Entretanto, observe no exemplo abaixo que se ```a``` não for divisível por ```2```, como as variáveis são inteiras, haverá apenas o armazenamento da parte inteira do quociente na variável ```div```.

```
int a,div;

a = 15;

div = a/b;
```

#### Resto de Divisão

**Exemplo (11):** Pegar o resto da divisão de uma variável por uma constante e armazenar o resultado em outra variável:

```
int a,resto;

a = 4;

resto = a%2;
```

**Exemplo (12):** Pegar o resto da divisão de uma variável por outra variável e armazenar o resultado em uma terceira variável:


```
int a,b,resto;

a = 12;
b = 2;

resto = a%b;
```

## 3.3. Ordem de Precedência dos Operadores Matemáticos

A ordem de precedência define a sequência em que os operadores são avaliados em uma expressão matemática. Conhecer essa ordem garante que as expressões matemáticas sejam calculadas corretamente. Abaixo, uma lista dos principais operadores e sua respectiva precedência (do maior para o menor):

## 3.3.1. Operadores de Parênteses `( )`
Os parênteses têm a maior precedência. Qualquer operação dentro de parênteses será resolvida primeiro. Caso existam parênteses aninhados, a avaliação começa pelo parêntese mais interno.

**Exemplo:**
```plaintext
(3 + 2) * (7 - 5) = 5 * 2 = 10
```

## 3.3.2. Expoentes `^` ou `**`
Os operadores de potência vêm após os parênteses. Eles indicam que um número será elevado a uma determinada potência.

**Exemplo:**
```plaintext
2 ^ 3 = 8 ou 2 ** 3 = 8
```

## 3.3.3. Multiplicação `*` e Divisão `/`
A multiplicação e a divisão possuem a mesma precedência e são avaliadas da esquerda para a direita. Elas são executadas após os expoentes.

**Exemplo:**
```plaintext
4 * 3 / 2 = 12 / 2 = 6
```

## 3.3.4. Adição `+` e Subtração `-`
A adição e a subtração também possuem a mesma precedência, sendo executadas da esquerda para a direita. São os operadores de menor precedência na hierarquia.

**Exemplo:**
```plaintext
5 + 3 - 2 = 8 - 2 = 6
```

## Tabela Resumida da Ordem de Precedência

| Precedência | Operador        | Descrição                   |
|-------------|------------------|-----------------------------|
| 1           | `( )`           | Parênteses                  |
| 2           | `^` ou `**`     | Potência                    |
| 3           | `*` e `/`       | Multiplicação e Divisão     |
| 4           | `+` e `-`       | Adição e Subtração          |

### Observações

- **Associatividade**: Alguns operadores, como a multiplicação e a divisão, têm associatividade da esquerda para a direita. Isso significa que são avaliados na ordem em que aparecem da esquerda para a direita quando têm a mesma precedência.
- **Uso de Parênteses**: Sempre que possível, use parênteses para evitar ambiguidades e tornar as expressões mais claras.

### Exemplos de Expressões Completas

1. **Exemplo sem parênteses:**
   ```plaintext
   3 + 4 * 2 ^ 2 = 3 + 4 * 4 = 3 + 16 = 19
   ```

2. **Exemplo com parênteses para alterar a precedência:**
   ```plaintext
   (3 + 4) * 2 ^ 2 = 7 * 4 = 28
   ```

Seguir a ordem de precedência garante que expressões matemáticas sejam avaliadas corretamente e de maneira previsível.

