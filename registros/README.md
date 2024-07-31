# 12. Estruturas Heterogêneas (Registros)



```
#include<stdio.h>
#include<string.h>

struct atleta{
    int velocidade;
    double altura_pulo;
    char nome[51];
};

typedef struct atleta Atleta;

void imprimeJogadores(Atleta jogs[30], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("\nDados do Jogador %d\n",i+1);
        printf("Nome: %s\n",jogs[i].nome);
        printf("Velocidade: %d\n",jogs[i].velocidade);
        printf("Altura do pulo: %.2lf\n",jogs[i].altura_pulo);
    }
}

int main(){
    int i,n;
    Atleta elenco[30];

    scanf("%d",&n);

    for(i = 0; i < n; i++){
        scanf("%d",&elenco[i].velocidade);
        printf("Endereco veloc: %p\n",&elenco[i].velocidade);
        scanf("%lf",&elenco[i].altura_pulo);
        printf("Endereco pulo: %p\n",&elenco[i].altura_pulo);
        getchar();
        scanf("%s",elenco[i].nome);
        printf("Endereco nome: %p\n",elenco[i].nome);
    }

    imprimeJogadores(elenco,n);

    return 0;
}

/*ll num;

    /*scanf("%d",&jogador.velocidade);
    scanf("%lf",&jogador.altura_pulo);
    getchar();
    scanf("%s",jogador.nome);*/
```
