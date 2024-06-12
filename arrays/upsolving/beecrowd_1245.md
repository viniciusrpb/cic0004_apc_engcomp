# Exercícios Resolvidos

## Beecrowd 1245 - Botas Perdidas

### Enunciado

Disponível [aqui](https://judge.beecrowd.com/pt/problems/view/1245).

### Requisitos para Resolução do Problema

Estruturas de repetição, vetores.

### Raciocínio

The Boots and Shoes supplies division of the Army purchased a large number of pairs of boots of various sizes for his soldiers. However, a failure of the packaging factory contracted, not all supplied boxes containing a pair of boots correct, with two boots of the same size, one for each foot. The sergeant told the recruits withdraw all boots all the boxes to repack them, this time correctly.

When the sergeant discovered that you knew programming, he asked with the usual kindness you write a program that, given a list containing the description of each boot delivered, determines how many pairs of boots could be formed in total.


### Implementação

Primeiramente, colocamos a estrutura básica de um programa em linguagem C:

```
#include<stdio.h>

int main(){

  return 0;
}
```

O primeiro ponto é que a entrada do problema contém vários casos de testes. Apesar do problema não indicar quando a entrada termina, podemos inferir que é em fim de arquivo (End Of File - EOF). Como a primeira variável a ser lida em cada caso de teste é o inteiro ```n```, utilizamos um laço ```while```, pois que a quantidade de casos de teste é imprevisível:

```
#include<stdio.h>

int main(){

  int n;

  while(scanf("%d",&n)!=EOF){
      
  }

  return 0;
}
```

Vamos ler os dados de entrada para **cada caso de teste**. Cada caso de teste contém na primeira linha um inteiro **n**, seguido de **n** linhas contendo um número inteiro e um caractere, respectivamente. O inteiro representa um tamanho de bota e o caractere representa um par (E - esquerdo ou D - direito). DeclaramosVamos utilizar o laço **for** para isso:

```
int i, num, par;

for(i = 0; i < n; i++){
    scanf("%d %c",&num,&par);
}
```

**ATENÇÃO:** muito cuidado ao ler inteiros e caracteres em uma mesma entrada.

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
