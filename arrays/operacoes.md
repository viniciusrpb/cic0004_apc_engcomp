# 7.2. Tarefas com Vetores

Listamos a seguir algumas tarefas comuns ao se trabalhar com vetores em linguagem C.

## Somar os n elementos de um vetor

```
#include<stdio.h>

int main(){
    int i,n, soma;
    int arr[1000];

    scanf("%d",&n);

    for(i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    soma = 0;
    for(i = 0; i < n; i++){
        soma = soma + arr[i];
    }
    printf("Soma = %d\n",soma);

    return 0;
}
```

## Cálculo do Desvio Padrão Populacional

Esse código em C calcula o desvio padrão populacional de um conjunto de números inteiros fornecidos pelo usuário. De maneira geral, o pseudo-código pode ser descrito como:

1- Lê um número n, que representa a quantidade de elementos que o usuário vai fornecer.<br>
2- Lê n inteiros e armazena na amostra ```va``` (ou vetor ```va[]```).<br>
3- Calcula a média dos valores.<br>
4- Calcula o desvio padrão populacional dos valores.<br>
5- Imprime o desvio padrão com duas casas decimais de precisão.<br>

A implementação em linguagem C ocorre como:

- Declaramos um vetor de inteiros ```va``` com capacidade máxima de 1000 posições. O inteiro ```n``` representa o tamanho da população, isto é, a quantidade de números inteiros.
- Temos também três variáveis do tipo double ```soma```, ```media``` e ```std``` que servem para somar valores, armazenar o valor da média dos elementos do vetor e armazenar o desvio padrão, respectivamente.
- Primeiro, devemos fazer a leitura dos inteiros que compõe o vetor. Repare que à medida em que fazemos a leitura dos elementos, vamos somando cada valor ```va[i]``` na variável ```soma```, de maneira cumulativa.
- Com a ```soma``` obtida, calculados a média (variável ```media```).
- Depois precisamos dos valores da entrada, que estão no vetor ```va```, para calcular o desvio padrão populacional. Isso mostra que o uso de **vetor** nesse problema é **obrigatório**, sendo então necessário armazenar os valores lidos da entrada na estrutura vetorial para uso posterior em outros momentos no código-fonte.
  
```
#include<stdio.h>
#include<math.h>

int main(){
    int n,i;
    int va[1000];
    double soma,media,std;

    scanf("%d",&n);

    soma = 0.0;
    for(i = 0; i < n; i++){
        scanf("%d",&va[i]);
        soma = soma+va[i];
    }
    media = soma/n;

    soma = 0.0; // reaproveitando a variavel
    for(i = 0; i < n; i++){
        soma = soma + (va[i]-media)*(va[i]-media);
    }
    std = sqrt((1.0/n) * soma);

    printf("Desvio padrao: %.2lf\n",std);

    return 0;
}
```

## Encontrar o menor elemento e seu índice

```
#include<stdio.h>

int main(){
    int i,n, menor, idx_menor;
    int arr[1000];

    scanf("%d",&n);

    for(i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    menor = arr[0];
    idx_menor = 0;
    for(i = 1; i < n; i++){
        if(arr[i] < menor){
            menor = arr[i];
            idx_menor = i;
        }
    }
    printf("Menor = %d indice = %d\n",menor,idx_menor);

    return 0;
}
```

## Busca Sequencial em Vetor

Uma busca sequencial (ou busca linear) é um algoritmo simples que encontra um determinado valor em uma coleção de dados (como um vetor). A ideia desse algoritmo consiste em percorrer os elementos do vetor, um por um, do início ao fim, e em cada elemento acessado, verificar se ele é igual ao elemento que está sendo buscado.

Seja um valor ```x``` a chave de busca e a coleção de elementos representada em um vetor ```v```(```v[0], v[1], ... , v[n-1]```), isto é, o elemento que estamos querendo encontrar no vetor. Faça:

1- A cada passo ```i```, compara o valor atual ```v[i]``` com o valor procurado ```x```.<br>
2- Se encontrar ```x``` (```v[i] == x``` retornar verdadeiro), retorna sua posição, isto é, o índice ```i```. Caso contrário, analise o próximo elemento, isto é, ```i=i+1```.<br>
3- Se chegar ao final do vetor sem encontrar ```x```, indica que o valor não está presente.<br>

A implementação em linguagem C está apresentada abaixo. Para um vetor ```v``` com capacidade máxima de 2000 elementos, e contendo ```n``` elementos, verificamos se ```x``` está ou não presente no vetor ```v```. Caso o elemento esteja presente, esta implementação sempre retorna a primeira ocorrência de ```x``` em ```v```.

```
#include<stdio.h>

int busca(int v[2000], int n, int x){
    int i;

    // percorre os elementos do vetor
    for(i = 0; i < n; i++){
        if(v[i] == x){
            return i;
        }
    }
    return i;
}

int main(){
    int i,n,x;
    int v[2000];

    scanf("%d %d",&n,&x);

    for(i = 0; i < n; i++){
        scanf("%d",&v[i]);
    }

    if(busca(v,n,x) == n){
        printf("ERRO: Elemento %d nao estah no vetor\n",x);
    } else {
        printf("Sim, %d estah no vetor\n",x);
    }

    return 0;
}
```
