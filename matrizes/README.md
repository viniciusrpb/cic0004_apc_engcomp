# 9. Matrizes

```
#include<stdio.h>
#define MAX_N 100
#define MAX_M 100

int main(){
    int i,j,n,m;
    // declara matriz 100 x 100
    int matriz[MAX_N][MAX_M];

    scanf("%d %d",&n,&m);

    // leitura de n linhas
    for(i = 0; i < n; i++){
        // para cada linha,
        // ler m valores inteiros = colunas!
        for(j = 0; j < m; j++){
            scanf("%d",&matriz[i][j]);
        }
    }
    printf("\nMatriz\n");
    // imprimir a matriz
    for(i = 0; i < n; i++){
        for(j = 0; j < m-1; j++){
            printf("%d ",matriz[i][j]);
        }
        printf("%d\n",matriz[i][m-1]);
    }


    printf("\nDetalhado\n");
    // imprimir a matriz
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("matriz[%d][%d] <- %d\n",i,j,matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
```

```
#include<stdio.h>
#define MAX_N 100
#define MAX_M 100

int main(){
    int i,j,n,m;
    // armazena ateh MAX_N strings
    // cada strings contendo ateh MAX_M caracteres
    char vetor_str[MAX_N][MAX_M+1];
    // ler n linhas da entrada
    scanf("%d",&n);
    getchar(); // tchau \n

    for(i = 0; i < n;i++){
        scanf("%s",vetor_str[i]);
        getchar(); // tchau \n
    }

    for(i = 0; i < n; i++){
        // imprime a string na linha i
        printf("%s\n",vetor_str[i]);
    }

    return 0;
}
```

## 9.1. Exercícios Resolvidos

   9.1. [Beecrowd 1184 - Line in Array](https://www.beecrowd.com.br/judge/en/problems/view/1181) [[Solução](listas/beecrowd_1181.c)]

   9.2. [Beecrowd 1827 - Square Array IV](https://judge.beecrowd.com/en/problems/view/1827) [[Solução](listas/beecrowd_1827.c)]

   9.3. [Beecrowd 1383 - Sudoku](https://www.beecrowd.com.br/judge/pt/problems/view/1383) [[Solução](listas/beecrowd_1383.c)]
