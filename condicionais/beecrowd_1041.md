# Exercícios Resolvidos

## Beecrowd 1041 - Coordenadas de um Ponto

### Enunciado

Disponível [aqui](https://judge.beecrowd.com/pt/problems/view/1041).

### Requisitos para Resolução do Problema

Variáveis, leitura e escrita de dados, e estruturas condicionais.

### Raciocínio

O exercício é fácil de entender, mas a construção do código-fonte pode gerar dúvidas. A principal questão é: "por onde começar?".

Primeiramente, vamos ler a entrada, que são dois valores de ponto flutuante ```x``` e ```y``` separados por espaço. Para a resolução desse problema, variáveis do tipo ```float``` já são suficientes, pois não será necessário fazer operações aritméticas, o que nos poderia trazer problemas de precisão. Entretanto, não há problemas em se utilizar variáveis do tipo ```double```.

A resolução desse problema vai envolver tomada de decisão: temos que verificar onde o ponto *(x,y)* se encontra no plano cartesiano. Vamos mapear cada caso:

- Se ```x``` é igual a zero e ```y``` é igual a zero, então esse ponto está na origem!
- Caso contrário, se ```x``` é diferente de zero e ```y``` é igual a zero, então esse ponto está no Eixo Y;
- Caso contrário, se ```x``` é igual a zero e ```y``` é diferente de zero, então esse ponto está no Eixo X;
- Caso contrário, se ```x``` é maior do que zero e ```y``` é maior do que zero, então esse ponto está no Quadrante 1 (Q1);
- Caso contrário, se ```x``` é menor do que zero e ```y``` é maior do que zero, então esse ponto está no Quadrante 2 (Q2);
- Caso contrário, se ```x``` é menor do que zero e ```y``` é menor do que zero, então esse ponto está no Quadrante 3 (Q3);
- Por fim, se nenhuma das condições acima for satisfeita, então esse ponto estará no Quadrante 4 (Q4);

Como pode-se ver, a resposta da questão "por onde começar?" está relacionada com a ordem com que você coloca as regras. A ordem não importa, desde que você construa corretamente a estrutura condicional. No caso acima, decidimos começar pelos casos em que alguma das variáveis, ou ambas, são iguais a zero, para depois cuidarmos dos casos dos quadrantes.

Se colocarmos as regras acima como se fosse um fluxograma, teríamos então:

![Fluxograma](images/beecrowd_1041.png).

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
