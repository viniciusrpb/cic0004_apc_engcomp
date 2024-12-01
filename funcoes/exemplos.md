# 5.4. Exemplos

Colocamos aqui exemplos de funções que você pode criar e serem úteis de alguma maneira.

## Valor mínimo

Retorna o valor mínimo entre dois inteiros ```a``` e ```b```:

```
int min(int a, int b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}
```

## Valor máximo

Retorna o valor máximo entre dois inteiros ```a``` e ```b```:

```
int min(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
```

## Valor Absoluto

Retorna o valor absoluto de um número inteiro ```a``` (faz a mesma operação do que a função ```abs``` da biblioteca ```stdlib.h```):

```
int vabs(int a){
    if(a < 0){
        return a*(-1);
    }
    else{
        return a;
    }
}
```
