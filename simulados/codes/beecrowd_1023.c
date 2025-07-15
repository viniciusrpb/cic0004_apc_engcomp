#include<stdio.h>

double truncate(double x) {
    return (int)(x * 100) / 100.0;
}

double solve(int n){
    int i,x,y,last,consumo_medio;
    double consumoCidades,pessoas,consumo;
    int cidades[201];

    for(i = 0; i < 201; i++){
        cidades[i] = 0;
    }

    pessoas = 0;
    consumo = 0;

    for(i = 0; i < n; i++){
        scanf("%d %d",&x,&y);
        pessoas += x;
        consumo += y;
        consumo_medio = y / x;
        cidades[consumo_medio] += x;
    }

    for(last = 200; last >= 0; last--){
        if(cidades[last] != 0){
            break;
        }
    }

    for(i = 0; i < 201; i++){
        if(cidades[i] > 0){
            printf("%d-%d", cidades[i],i);

            if(i != last){
                printf(" ");
            }
            else{
                printf("\n");
            }
        }
    }

    consumoCidades =  truncate(consumo / pessoas);
    return consumoCidades;
}

int main(){
    int t,n;
    double ans;

    scanf("%d",&n);

    t = 1;

    while(n!=0){

        if(t > 1){
            printf("\n");
        }

        printf("Cidade# %d:\n",t);

        ans = solve(n);

        printf("Consumo medio: %.2lf m3.\n",ans);

        scanf("%d",&n);

        t++;
    }

    return 0;
}
