# 12.2 Ponteiros e Funções

Na linguagem C, sabemos que os argumentos das funções são passados por valor, isto é, a função recebe uma cópia da variável. A passagem por valor ocorre em variáveis nativas, como ```int```, ```float```, ```double```, ```char``` e também com tipos definidos pelo usuário (*structs*).

Se você não se lembrar sobre a passagem por valor, você pode rever esse conteúdo clicando [aqui](https://github.com/viniciusrpb/cic0004_apc_engcomp/blob/main/funcoes/estrutura.md).

Agora, se quisermos que a função modifique uma variável externa à ela, devemos passar o endereço dela (sua referência). Trata-se então da **passagem por referência**.

## Passagem por Referência

A primeira vez que estudamos passagem por referência ocorreu no Capítulo de vetores. Quando você passa um vetor como argumento de uma função, o que é realmente passado é o endereço do primeiro elemento do array, que é um ponteiro.

Veja o exemplo de função abaixo:

```
#include<stdio.h>

void somaCumulativa(int v[5], int psum[5], int n){
    int i;

    psum[0] = v[0];
    for(i = 1; i < n; i++){
        psum[i] = psum[i-1]+v[i];
    }
}
```

Repare que a função ```somaCumulativa```, em sua definição, recebe dois vetores ```v``` e ```psum``` como parâmetros e um inteiro ```n```. Os vetores ```v``` e ```psum``` serão passados por referência na chamada da função, enquanto que a variável inteira ```n``` será passada por valor. Assim:

- ```v``` é um ponteiro para ```v[0]```<br>
- ```psum``` é um ponteiro para ```psum[0]```

```
#include<stdio.h>

void somaCumulativa(int v[5], int psum[5], int n){
    int i;

    psum[0] = v[0];
    for(i = 1; i < n; i++){
        psum[i] = psum[i-1]+v[i];
    }
}

int main(){
    int i;
    int v[5] = {6,3,5,8,2};
    int psum[5];

    somaCumulativa(v, psum, 5);

    printf("Soma cumulativa de v\n");
    for(i = 0; i < 5; i++){
        printf("%d ",psum[i]);
    }

    return 0;
}
```

## Função Swap

```
#include<stdio.h>

void swap(int *a, int *b){
    int backup;
    backup = *a;
    *a = *b;
    *b = backup;
}

int main(){

    int a,b;
    a = 7;
    b = 2;

    swap(&a,&b);

    printf("a: %d\n",a);
    printf("b: %d\n",b);

    return 0;
}
```
