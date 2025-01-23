# Tabela ASCII

A Tabela *American Standard Code for Information Interchange* (ASCII) é um padrão que define um conjunto de códigos numéricos usados para representar caracteres em computadores e dispositivos digitais. Cada número na tabela ASCII corresponde a um caractere específico, como letras, números, símbolos ou comandos de controle.

Em resumo:

- Valores de 0 a 31: Caracteres de controle, usados para tarefas específicas (como retorno de carro, nova linha e sinal de alarme). Esses caracteres não são imprimíveis.
- Valores de 32 a 126: Caracteres imprimíveis na saída padrão

## Caracteres imprimíveis

### Dígitos numéricos:

| Código Decimal | Caractere |
|----------------|-----------|
| 48             | 0         |
| 49             | 1         |
| 50             | 2         |
| 51             | 3         |
| 52             | 4         |
| 53             | 5         |
| 54             | 6         |
| 55             | 7         |
| 56             | 8         |
| 57             | 9         |

### Caracteres alfabéticos

| Código Decimal (Minúsculo) | Caractere Minúsculo | Código Decimal (Maiúsculo) | Caractere Maiúsculo |
|----------------------------|---------------------|----------------------------|---------------------|
| 97                         | a                   | 65                         | A                   |
| 98                         | b                   | 66                         | B                   |
| 99                         | c                   | 67                         | C                   |
| 100                        | d                   | 68                         | D                   |
| 101                        | e                   | 69                         | E                   |
| 102                        | f                   | 70                         | F                   |
| 103                        | g                   | 71                         | G                   |
| 104                        | h                   | 72                         | H                   |
| 105                        | i                   | 73                         | I                   |
| 106                        | j                   | 74                         | J                   |
| 107                        | k                   | 75                         | K                   |
| 108                        | l                   | 76                         | L                   |
| 109                        | m                   | 77                         | M                   |
| 110                        | n                   | 78                         | N                   |
| 111                        | o                   | 79                         | O                   |
| 112                        | p                   | 80                         | P                   |
| 113                        | q                   | 81                         | Q                   |
| 114                        | r                   | 82                         | R                   |
| 115                        | s                   | 83                         | S                   |
| 116                        | t                   | 84                         | T                   |
| 117                        | u                   | 85                         | U                   |
| 118                        | v                   | 86                         | V                   |
| 119                        | w                   | 87                         | W                   |
| 120                        | x                   | 88                         | X                   |
| 121                        | y                   | 89                         | Y                   |
| 122                        | z                   | 90                         | Z                   |

## Os mais importantes 

Aqui segue uma tabela ASCII resumida dos caracteres mais importantes:

| Código Decimal | Caractere |
|----------------|-----------|
| 48             | 0         |
| 57             | 9         |
| 65             | A         |
| 90             | Z         |
| 97             | a         |
| 122            | z         |

É importante saber que:

- Os caracteres numéricos possuem código ASCII no intervalo ```48``` e ```57```;
- Os caracteres maiúsculos possuem código ASCII no intervalo ```65``` e ```90```;
- Os caracteres minúsculos estão no intervalo ```97``` e ```122```.
  
## Preciso Decorar a Tabela ASCII?

Não é necessário decorar a Tabela ASCII! Um código-fonte como esse abaixo já é suficiente para você obter a Tabela ASCII por completo:

```
#include<stdio.h>

int main(){
    int i;
    for(i = 10; i <= 128; i++){
        printf("Caractere: %c Codigo ASCII: %d\n",i,i);
    }
    return 0;
}
```

## Operações com Código ASCII

### Converte um caractere numérico para seu correspondente inteiro

A função abaixo converte um caractere numérico para um dígito do tipo inteiro.

Por exemplo, o caractere ```'3'``` é convertido para o inteiro *3*. O código ASCII do caractere ```'3'``` é *51*.
Tomamos o caractere ```'0'```, cujo código ASCII é *48*, como base para essa operação. Então:

```
'3' - '0' = 51 - 48 = 3
```

A função abaixo realiza essa operação:

```
int char2int(char c){
    int ascii;
    ascii = c - 48; // equivale a: c -'0'
    return ascii;
}
```

### Converte um dígito inteiro para caractere

A função abaixo converte um dígito do inteiro (entre 0 e 9).

Por exemplo, o dígito inteiro *4* será convertido para o caractere ```'4'```. O objetivo é obter o código ASCII do caractere ```'4'```, que é *52*.
Sabendo-se que o caractere ```'0'``` possui código ASCII igual a *48*, podemos somar:

```
48 + 4 = 52
```
a função fica assim:

```
char int2char(int num){
    char c;
    c = num + 48; // equivale a: c + '0'
    return c;
}
```
### Verifica se um caractere é minúsculo

Basta verificar se o código ASCII do caractere ```c``` está no intervalo ```[97,122]```, como vimos na tabela dos caracteres minúsculos acima.

A função fica então:

```
int ehMinusculo(char c){
    if(c >= 97 && c <= 122){
        return 1;
    }
    else{
        return 0;
    }
}
```

### Verifica se um caractere é maiúsculo

Nesse caso, devemos verificar se o código ASCII do caractere ```c``` está no intervalo ```[65,90]```, como vimos na tabela dos caracteres maiúsculos acima.

A função fica então:

```
int ehMaiusculo(char c){
    if(c >= 65 && c <= 90){
        return 1;
    }
    else{
        return 0;
    }
}
```
