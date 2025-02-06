# Fatorial

A função fatorial, denotada por n! é uma operação matemática que calcula o produto de todos os números inteiros positivos de ```1``` até ```n```. Por definição:

```
n! = n x (n-1) x (n-2) x ... x 2 x 1
```

Se temos ```n=5```, então:

```
5! = 5 x 4 x 3 x 2 x 1 = 120
```

## Função Fatorial

A função fatorial é definida recursivamente da seguinte maneira:

```
fatorial(n) = n x fatorial(n-1), se n > 1
            = 1                , se n <= 1.
```

O fatorial de ```0``` (0!) e ```1``` (1!) é sempre ```1```. Esse é o caso base.

```
#include<stdio.h>

long long fatorial(long long n){
    if(n <= 1){
        return 1;
    }
    return n*fatorial(n-1);
}

int main(){
    long long n;
    scanf("%lld",&n);

    printf("%lld! = %lld\n",n,fatorial(n));

    return 0;
}
```

**Cuidado:** o fatorial cresce extremamente rápido, o que pode causar estouro de memória (*overflow*). Por isso, sempre execute o fatorial para valores menores ou iguais a ```40```.


# Fibonacci

```
#include<stdio.h>

long long fibonacci(long long n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    return fibonacci(n-2)+fibonacci(n-1);
}

int main(){
    long long n;
    scanf("%lld",&n);

    printf("%lld\n",fibonacci(n));

    return 0;
}
```
