# 7.2. Tarefas com Vetores

## Somar os n elementos de um vetor

```
#include<stdio.h>
#define MAX_N 1000

int main(){
    int i,n, soma;
    int arr[MAX_N];

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

## Encontrar o menor elemento e seu índice

```
#include<stdio.h>
#define MAX_N 1000

int main(){
    int i,n, menor, idx_menor;
    int arr[MAX_N];

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
2- Se encontrar (```v[i] == x``` retornar verdadeiro), retorna sua posição, isto é, o índice ```i```.<br>
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
