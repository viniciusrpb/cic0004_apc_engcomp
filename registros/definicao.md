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


## Vetores & Registros

