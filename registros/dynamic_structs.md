# 12.2 Estruturas por Alocação Dinâmica

```
#include<stdio.h>
#include<stdlib.h>

struct mat{
    int l,c; /*numero de linhas x numero de colunas*/
    int **m; // ponteiro para ponteiro
};

typedef struct mat Matriz;

void imprime(Matriz *a){
    int i,j;
    for(i = 0; i < a->l; i++){
        for(j = 0; j < a->c; j++){
            printf("%d ",a->m[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int i,j,n,m;
    Matriz *matriz;

    matriz = (Matriz *) malloc (sizeof(Matriz));

    scanf("%d %d",&n,&m);

    matriz->l = n;//(*matriz).l = n;
    matriz->c = m;//(*matriz).c = m;

    matriz->m = (int **) malloc(sizeof(int *) * n);

    for(i = 0; i < n; i++){
        matriz->m[i] = (int *) malloc (sizeof(int)*m);
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            scanf("%d",&matriz->m[i][j]);
        }
    }

    imprime(matriz);

    for(i = 0; i < n; i++){
        free(matriz->m[i]);
    }

    free(matriz->m);

    free(matriz);

    return 0;
}
```

```
#include<stdio.h>
#include<string.h>

struct atleta{
    int velocidade;
    double altura_pulo;
    char nome[51];
};

typedef struct atleta Atleta;

void imprimeJogadores(Atleta jogs[30], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("\nDados do Jogador %d\n",i+1);
        printf("Nome: %s\n",jogs[i].nome);
        printf("Velocidade: %d\n",jogs[i].velocidade);
        printf("Altura do pulo: %.2lf\n",jogs[i].altura_pulo);
    }
}

int main(){
    int i,n;
    Atleta *elenco;

    scanf("%d",&n);

    elenco = (Atleta *) malloc (sizeof(Atleta)*n);
    
    for(i = 0; i < n; i++){
        scanf("%d",&elenco[i].velocidade);
        scanf("%lf",&elenco[i].altura_pulo);
        getchar();
        scanf("%s",elenco[i].nome);
    }

    imprimeJogadores(elenco,n);

    free(elenco);
    
    return 0;
}
```
