#include<stdio.h>
#define MAX_N 100
#define MAX_M 100

#include<stdio.h>

int main(){
    int x,y,i,j,n,m,bombas;

    char campo[102][102];

    scanf("%d %d",&n,&m);
    getchar(); // me livrar do \n

    for(i = 0; i < n+2;i++){
        for(j = 0; j < m+2; j++){
            campo[i][j] = '.';
        }
    }

    for(i = 1; i <= n;i++){
        for(j = 1; j <= m; j++){
            scanf("%c",&campo[i][j]);
        }
        getchar(); // me livrar do \n
    }

    for(i = 1; i <= n;i++){
        for(j = 1; j <= m; j++){
            // se a posicao [i][j] nao for bomba
            if(campo[i][j] == '.'){
                // analisa a vizinhanca de [i][j]
                bombas = 0;

                for(x = i-1; x <= i+1; x++){
                    for(y = j-1; y <= j+1; y++){
                        if(campo[x][y] == '*'){
                            bombas++;
                        }
                    }
                }
                printf("%d",bombas);
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}

