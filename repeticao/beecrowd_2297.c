#include<stdio.h>

void solve(int n){
    int j,a,b,soma_a,soma_b;

    j = 1; // conta a qtde de repeticoes
    soma_a = 0;
    soma_b = 0;
    while(j <= n){
        scanf("%d %d",&a,&b);
        j = j+1;//j++;
        soma_a = soma_a + a;
        soma_b = soma_b + b;
    }
    if(soma_a > soma_b){
        printf("Aldo\n");
    }
    else{
        printf("Beto\n");
    }
}

int main(){
    int teste,n;

    scanf("%d",&n);

    teste = 1;
    while(n!=0){
        printf("Teste %d\n",teste);
        solve(n);
        printf("\n");
        teste=teste+1;
        scanf("%d",&n);
    }

    return 0;
}
