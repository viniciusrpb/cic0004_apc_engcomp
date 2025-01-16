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

## Buscar um elemento no vetor

```
#include<stdio.h>
#define MAX_N 1000

int main(){
    int i,n, chave,idx;
    int arr[MAX_N];

    scanf("%d",&n);

    for(i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    scanf("%d",&chave);

    idx = -1;
    for(i = 0; i < n; i++){
        if(arr[i] == chave){
            idx = i;
            break;
        }
    }

    if(idx >= 0){
        printf("Elemento %d encontrado no indice %d\n",chave,idx);
    }
    else{
        printf("Elemento %d nao foi encontrado\n",chave);
    }

    return 0;
}
```
