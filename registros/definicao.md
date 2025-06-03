# 12.1 Definição

## Definindo Estrutura

Em linguagem C, um registro é definida por meio da palavra reservada **struct**, seguida pelo nome da estrutura e pelo conjunto de variáveis que a compõem entre chaves {}:

```
struct nome_estrutura{
    tipo nome_var1;
    tipo nome_var2;
};
```
Para declarar uma variável como sendo do tipo **struct nome_estrutura**, basta fazer:

```
struct nome_estrutura nome_variavel;
```

Na leitura dos dados da ```struct```, devemos declarar como (exemplo):

```
scanf("%d", &nome_da_estrutura.campo_da_estrutura);
```

## Exemplos

```
struct ponto2d{
    int x;
    int y;
};
```

```
struct atleta{
    int idade;
    double altura;
    char nome[101];
};
```

## Comando Typedef

```
typedef long long ll;
```

```
#include<stdio.h>

typedef long long ll;

int main(){
    ll a,b;
    scanf("%lld %lld",&a,&b);
    printf("%lld\n",a+b);
    return 0;
}
```

Para a estrutura atleta, podemos fazer:

```
#include<stdio.h>

struct atleta{
    int idade;
    double altura;
    char nome[101];
};

typedef struct atleta Atleta;

int main(){
    Atleta jogador;

    return 0;
}
```

Ou ainda, utilizando o ```typedef``` já na estrutura, como no exemplo:

```
#include<stdio.h>

typedef struct{
    int idade;
    double altura;
    char nome[101];
}Atleta;

int main(){
    Atleta jogador;

    return 0;
}
```


## Vetores & Registros

Podemos utilizar a ```struct``` para armazenar vários conjuntos de informação por vez, utilizando os colchetes [] para declarar quantos conjuntos queremos:

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
    Atleta elenco[30]; //poderá armazenar 30 conjuntos de informações dos campos da estrutura (velocidade, altura do pulo e nome)

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

    /* Note que a posição i deve vir antes do ponto,
    pois se trata do i-ésimo "elenco" do tipo struct Atleta*/

    imprimeJogadores(elenco,n);

    return 0;
}
```
