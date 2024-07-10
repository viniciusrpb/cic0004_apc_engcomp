#include<stdio.h>
#define MAX_N 100
#define MAX_M 100

int main(){
    int i,j,n,m,k,l,soma;
    char celula;
    // matriz +2 eh por conta do padding
    // de zeros nas bordas
    int campo[MAX_N+2][MAX_M+2];

    scanf("%d %d",&n,&m);
    getchar(); // livrar do \n

    for(i = 0; i < n+2; i++){
        for(j = 0; j < m+2; j++){
            campo[i][j] = 0;
        }
    }

    for(i = 1; i <= n; i++){
        for(j = 1; j <= m; j++){
            scanf("%c",&celula);
            // celula eh uma bomba?
            if(celula == '*'){
                // se sim, inclui no campo
                campo[i][j] = 1;
                // 1 eh posicao com bomba
                // 0 eh area livre
            }
        }
        getchar();
    }

    for(i = 1; i <= n; i++){
        for(j = 1; j <= m; j++){
            // nao tem bomba em (i,j)?
            if(campo[i][j] == 0){
                // caminhar pela vizinhanca
                // do quadrado em (i,j)
                soma = 0;
                for(k = i-1; k <= i+1; k++){
                    for(l = j-1; l <= j+1;l++){
                        soma = soma + campo[k][l];
                        // soma += campo[k][l]
                    }
                }
                printf("%d",soma);
            }else{
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}
