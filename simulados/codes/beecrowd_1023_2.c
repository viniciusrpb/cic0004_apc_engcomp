#include<stdio.h>

void solve(int n){
    int i,x,y,consumoPorPessoa,ultimo;
    int consumos[201];
    double consumo_medio,pessoas,consumo_residencias;

    for(i = 0; i < 201; i++){
        consumos[i] = 0;
    }

    pessoas = 0;
    consumo_residencias = 0;
    for(i = 0; i < n; i++){
        scanf("%d %d",&x,&y);
        pessoas += x;
        consumo_residencias += y;
        consumoPorPessoa = y/x;
        consumos[consumoPorPessoa] += x;
    }

    for(ultimo = 200; ultimo >= 0; ultimo--){
        if(consumos[ultimo] > 0){
            break;
        }
    }

    for(i = 0; i < 201; i++){
        if(consumos[i]>0){
            printf("%d-%d",consumos[i],i);

            if(i != ultimo){
                printf(" ");
            } else {
                printf("\n");
            }
        }
    }

    //consumo_medio = ((consumo_residencias*100) / pessoas)/100.00;
    consumo_medio = consumo_residencias / pessoas;
    //printf("%lf\n",consumo_medio);
    int parteInteira = consumo_medio;
    //printf("parteInteira: %d\n",parteInteira);
    int parteReal = (int) (consumo_medio*100) - parteInteira*100;
    printf("Consumo medio: %d.%02d m3.\n",parteInteira,parteReal);
}

int main(){
    int n,cidade;

    scanf("%d",&n);

    cidade = 1;

    while(n!=0){

        if(cidade > 1){
            printf("\n");
        }

        printf("Cidade# %d:\n",cidade);
        solve(n);

        scanf("%d",&n);
        cidade++;
    }

    return 0;
}
