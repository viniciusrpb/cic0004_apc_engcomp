#include<stdio.h>

int main(){
    int i,n,g;
    double menor,v,p;

    scanf("%d",&n);

    scanf("%lf %d",&p,&g);

    v = (1000*p)/g; // v 1o supermercado

    menor = v; // esse valor por enquanto
               // eh o menor

    for(i = 2; i <= n; i++){
        scanf("%lf %d",&p,&g);
        v = (1000*p)/g;  // v i-esimo sup
        if(v < menor){
            menor = v; // menor valor foi atualizado
        }
    }

    printf("%.2lf\n",menor);

    return 0;
}
