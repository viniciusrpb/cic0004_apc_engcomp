# Exercícios Resolvidos

## Beecrowd 1003 - Soma Simples

### Enunciado

Disponível [aqui](https://judge.beecrowd.com/pt/problems/view/1003).

### Requisitos para Resolução do Problema

Variáveis, expressões matemáticas simples, leitura e escrita de dados.

### Raciocínio

Uma soma entre dois números inteiros é descrita matematicamente como:

```
s = a + b
```

em que ```s``` armazena o resultado. Precisaremos então ler os valores de ```a``` e ```b``` da entrada, calcular ```s=a+b``` e depois imprimir o valor de ```s``` na tela.

Mãos à obra!

### Implementação

Primeiramente, colocamos a estrutura básica de um programa em linguagem C, considerando que faremos operações de ler dois números inteiros da entrada padrão e fazer a escrita do resultado da soma na saída padrão. Assim, criamos a função principal e a diretiva para incluir a biblioteca ```stdio.h``` visando utilizar as funções de leitura (```scanf```) e escrita (```printf```):

```
#include<stdio.h>

int main(){

  return 0;
}
```

Depois devemos declarar as variáveis que precisaremos para armazenar os operandos ```a``` e ```b```, e o resultado da operação da soma em ```s```. O código-fonte após essas inclusões fica da seguinte maneira:

```
#include<stdio.h>

int main(){

  int a,b,s;

  return 0;
}
```

Agora devemos ler dois números inteiros da entrada padrão. Para isso, utilizamos a função ```scanf()```:

```
scanf("%d",&a);
```

em que ```%d``` indica que ```scanf``` fará a leitura de uma valor do tipo inteiro, em que o valor lido será armazenado no endereço de memória associado à variável ```a```. Faremos o mesmo para a variável ```b```. Logo:

```
#include<stdio.h>

int main(){

  int a,b,s;

  scanf("%d",&a);
  scanf("%d",&b);

  return 0;
}
```

Depois disso, calculamos a soma entre ```a``` e  ```b```, armazenando o resultado na variável  ```s```:

```
#include<stdio.h>

int main(){

  int a,b,s;

  scanf("%d",&a);
  scanf("%d",&b);

  s = a + b;

  return 0;
}
```

Por fim, devemos imprimir a resposta **exatamente como é solicitado no enunciado (não faça nada diferente disso)**. O comando ```printf``` é então utilizado para imprimir informação na tela, em que temos que mostrar primeiramente ```SOMA = ``` (**o enunciado do problema pede!!!**), para depois mostrar o valor de ```s```. Segue apenas o comando isolado:

```
printf("SOMA = %d\n",s);
```

Incluindo o comando acima no código-fonte, temos então:

### Código-fonte Final

```
#include<stdio.h>

int main(){

  int a,b,s;

  scanf("%d",&a);
  scanf("%d",&b);

  s = a + b;

  printf("SOMA = %d\n",s);

  return 0;
}
```
