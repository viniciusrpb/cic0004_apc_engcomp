# Beecrowd 1245 - Botas Perdidas

## Enunciado

Disponível [aqui](https://judge.beecrowd.com/pt/problems/view/1245).

## Requisitos para Resolução do Problema

Estruturas de repetição, vetores.

## Raciocínio

Para resolver o problema de formação de pares de botas, podemos usar uma abordagem com um vetor de contagem para armazenar a quantidade de botas do pé esquerdo (E) e do pé direito (D) para cada tamanho. Depois disso, percorremos a entrada, contamos as botas e seus pares (esquerdo ou direito) para que, ao final, somamos os pares possíveis.

Primeiramente, precisamos
Inicializar os contadores: Criar dois vetores de tamanho suficiente (por exemplo, de 30 a 60) para armazenar o número de botas esquerdas e direitas de cada tamanho.
Processar a entrada: Para cada bota, atualizar os contadores correspondentes.
Calcular os pares: Para cada tamanho, o número de pares possíveis será o mínimo entre os contadores esquerdo e direito para aquele tamanho.
Imprimir o resultado.

## Implementação

O primeiro ponto é que a entrada do problema contém vários casos de testes. Apesar do problema não indicar quando a entrada termina, podemos inferir que é em fim de arquivo (End Of File - EOF). Como a primeira variável a ser lida em cada caso de teste é o inteiro ```n```, utilizamos um laço ```while```, pois que a quantidade de casos de teste é imprevisível:

```
#include<stdio.h>

int main() {
 
    int n,ans;
    
    while(scanf("%d",&n)!=EOF){
        ans = solve(n);
        printf("%d\n",ans);
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

```
int solve(int n){
    int i,num,ans,pares;
    char par;
    int botas_esq[MAX_M+1];
    int botas_dir[MAX_M+1];
    
    /*inicia todas as posicoes com zero*/
    for(i = 0; i <= MAX_M; i++){
        botas_esq[i] = 0;
        botas_dir[i] = 0;
    }
    
    for(i = 0; i < n; i++){
        scanf("%d %c\n",&num,&par);
        if(par == 'E'){
            botas_esq[num]++;
        }
        else{
            botas_dir[num]++;
        }
    }
    
    pares = 0;
    for(i = 30; i <= 60; i++){
        pares += min(botas_esq[i],botas_dir[i]);
    }
    return pares;
}
```

```
#include <stdio.h>
#define MAX_M 60

int min(int a, int b){
    if(a < b){
        return a;
    }
    else{
        return b;
    }
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

Clique [aqui].
