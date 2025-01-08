#include<stdio.h>
#define MAX_N 1000 //tudo que eh MAX_N eh a mesma coisa do que 1000

void solve(int n){
    int i,pos_largada;
    int car[MAX_N];
    int pos[MAX_N];
    int grid[MAX_N];
    int existe_grid;

    for(i = 0; i < n; i++){
        scanf("%d %d",&car[i],&pos[i]);
        grid[i] = 0; // garante que o vetor nao tem lixo
    }

    existe_grid = 1; // assume que existe o grid

    // recriar o grid de largada
    // pega o carro na i-esima posicao da corrida atual
    for(i = 0; i < n; i++){
        pos_largada = i + pos[i];

        // garante que pos_largada eh uma posicao valida
        // no vetor, no grid de largada
        if(pos_largada >= 0 && pos_largada < n && grid[pos_largada] == 0){
            grid[pos_largada] = car[i];
        }
        else{
            existe_grid = 0; // nao eh possivel recuperar o grid de largada
        }
    }

    if(existe_grid == 1){
        for(i = 0; i < n-1; i++){
            printf("%d ", grid[i]);
        }
        printf("%d\n",grid[n-1]);
    }
    else{
        printf("-1\n");
    }


}

int main(){
    int n;

    scanf("%d",&n);

    while(n != 0){

        solve(n);

        scanf("%d",&n);
    }
    return 0;
}
