#include<stdio.h>
#define MAX_LIN 100
#define MAX_COL 100

void somaLinhas(int matriz[MAX_LIN][MAX_COL], int n, int m, int v[MAX_COL]){
    int i,j,soma;

    for(j = 0; j < m; j++){
        soma = 0;
        for(i = 0; i < n; i++){
            soma = soma + matriz[i][j];
        }
        v[j] = soma;
    }
}

int main(){
    int i,j,n,m;
    int matriz[MAX_LIN][MAX_COL];
    int v[MAX_COL];

    scanf("%d %d",&n,&m);

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            scanf("%d",&matriz[i][j]);
        }
    }

    somaLinhas(matriz,n,m,v);

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }

    for(j = 0; j < m; j++){
        printf("--");
    }
    printf("\n");

    for(j = 0; j < m; j++){
        printf("%d ",v[j]);
    }
    printf("\n");

    return 0;
}



