#include<stdio.h>

long long int min(int a, int b){
    if(a < b){
        return a;
    }
    return b;
}

int main(){

    long long int quadras[1000][1000];
    int i,j,n,m;
    long long int soma,menor;
    
    scanf("%d %d",&n,&m);
    
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            scanf("%lld",&quadras[i][j]);
        }
    }
    
    menor = 0;
    for(i = 0; i < n; i++){
        menor += quadras[i][0];
    }
    
    for(j = 1; j < m; j++){
        soma = 0;
        for(i = 0; i < n; i++){
            soma += quadras[i][j];
        }
        menor = min(menor,soma);
    }
    
    printf("%lld\n",menor);
    
    return 0;
}
