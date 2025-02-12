#include<stdio.h>
#define MAX 1000

typedef long long ll;

int main(){
    int i,j,n,maior,menor,menor_idx,maior_idx;
    int v[MAX];
    ll soma;

    scanf("%d",&n);

    for(i = 0; i < n; i++){
        scanf("%d",&v[i]);
    }

    soma = 0;
    for(i = 0; i < n; i++){
        soma+=v[i];
    }

    menor = v[0];
    for(i = 1; i < n; i++){
        if(v[i] < menor){
            menor = v[i];
            menor_idx = i;
        }
    }

    maior = v[0];
    for(i = 1; i < n; i++){
        if(v[i] > maior){
            maior = v[i];
            maior_idx = i;
        }
    }

    printf("Soma dos elementos: %lld\n",soma);
    printf("Menor elemento eh %d e estah na posicao %d\n",menor,menor_idx);
    printf("Maior elemento eh %d e estah na posicao %d\n",maior,maior_idx);
  
    return 0;
}
