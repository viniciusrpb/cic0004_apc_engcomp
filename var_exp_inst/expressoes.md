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

**Exemplo (7):** Dividir uma variável por uma constante armazenar o resultado em outra variável:

```
int a,div;

a = 4;

div = a/2;
```

**Exemplo (8):** Dividir uma variável por uma constante armazenar o resultado em outra variável:


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
