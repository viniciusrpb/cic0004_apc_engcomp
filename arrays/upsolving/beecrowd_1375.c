#include<stdio.h>

void solve(int n){
    int i,posicao_largada,grid_ok;
    int car[1001],pos[1001],grid[1001];

    for(i = 0; i < 1001; i++){
        grid[i] = -1;
    }

    grid_ok = 1; // grid eh valido

    for(i = 0; i < n; i++){
        scanf("%d %d",&car[i],&pos[i]);
        posicao_largada = i+pos[i];
        if(posicao_largada >= 0 && posicao_largada < n && grid[posicao_largada] == -1){
            grid[posicao_largada] = car[i];
        } else {
            grid_ok = 0;
        }
    }

    if(grid_ok == 0){
        printf("-1\n");
    } else {
        for(i = 0; i < n-1; i++){
            printf("%d ",grid[i]);
        }
        printf("%d\n",grid[n-1]);
    }
}

int main(){
    int n;
    scanf("%d",&n);

    while(n!=0){
        /*resolve um caso*/
        solve(n);
        scanf("%d",&n);
    }

    return 0;
}
