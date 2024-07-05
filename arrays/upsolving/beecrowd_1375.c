#include<stdio.h>

int main(){
    int i,n,c,p,resposta;
    int grid[1000];

    scanf("%d",&n);

    while(n != 0){

        // ainda eh possivel encontrar solucao valida
        resposta = 1;

        for(i = 0; i < n; i++){
            grid[i] = 0; // nao tem carro na posicao i
        }

        for(i = 0; i < n; i++){
            scanf("%d %d",&c,&p);
            // a posicao de largada do carro c eh valida no grid?
            // tem carro no grid na posicao i+p?
            if((i+p) >= 0 && (i+p) < n && grid[i+p] == 0){
                grid[i+p] = c;
            }else{
                resposta = -1;
            }
        }

        if(resposta == 1){
            for(i = 0; i < n-1; i++){
                printf("%d ",grid[i]);
            }
            printf("%d\n",grid[n-1]);
        }else{
            printf("-1\n");
        }

        scanf("%d",&n);
    }
    return 0;
}
