# 6.3. Ordenação

## 6.3.1 Definição

## 6.3.2. Ideia

O laço externo (relacionado com a variável ```i```) percorre cada elemento do vetor. É nessa posição que o i-ésimo menor elemento será encontrado. O laço interno (relacionado com a variável ```j```) compara o elemento ```v[i]``` (na posição i) com todos os elementos após ele (j>i), isto é, ```v[i+1],v[i+2],...,v[n-1]```. Sempre que o elemento ```v[i]``` for maior que ```v[j]```, os dois elementos são trocados. No final, o vetor estará ordenado em ordem crescente.

```
void ordena(int v[1000], int n){

    int i,j,aux;

    for(i = 0; i < n-1; i++){
        for(j = i+1; j < n; j++){
            if(v[i] > v[j]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
}
```

# Código-fonte Completo (com Entrada)

```
#include<stdio.h>

void ordena(int v[1000], int n){

    int i,j,aux;

    for(i = 0; i < n-1; i++){
        for(j = i+1; j < n; j++){
            if(v[i] > v[j]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
}

int main(){
    int i,n;
    int arr[1000];

    scanf("%d",&n);

    for(i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    ordena(arr,n);

    for(i = 0; i < n-1; i++){
        printf("%d ",arr[i]);
    }
    printf("%d\n",arr[n-1]);
    
    return 0;
}
```
