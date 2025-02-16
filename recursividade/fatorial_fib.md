# Fatorial

A função fatorial, denotada por n! é uma operação matemática que calcula o produto de todos os números inteiros positivos de ```1``` até ```n```. Por definição:

```
n! = n x (n-1) x (n-2) x ... x 2 x 1
```

Se temos ```n=5```, então:

```
5! = 5 x 4 x 3 x 2 x 1 = 120
```

**IMPORTANTE:** Caso ocorra do **n ser igual a zero** (em problemas de análise combinatória, por exemplo), pode ser necessário 0! (zero fatorial), que, por convenção, ```0! = 1```.

## Função Fatorial

A função fatorial é definida recursivamente da seguinte maneira:

```
fatorial(n) = n x fatorial(n-1), se n > 1
            = 1                , se n <= 1.
```

Lembrando que o fatorial de ```0``` (0!) e ```1``` (1!) é sempre ```1```. Esse é o caso base.



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

**Cuidado:** o fatorial cresce extremamente rápido, o que pode causar estouro de memória (*overflow*). Por isso, sempre execute o fatorial para valores menores ou iguais a ```20```.

### Versão iterativa

```
#include<stdio.h>

void fatorial(int n, long long fat[20]){

    int i;
    fat[0] = 1;
    fat[1] = 1;

    for(i = 2; i <= n; i++){
         fat[i] = i*fat[i-1];
    }
}

int main(){
    int n;
    long long fat[20];

    scanf("%d",&n);

    fatorial(n,v);

    printf("%lld\n",fat[n]);

    return 0;
}
```

## Fibonacci

A sequência de Fibonacci é uma sequência numérica definida recursivamente da seguinte forma:

```
F(0)=0, para n = 0
F(1)=1, para n = 1
F(n)=F(n−1)+F(n−2), para n >= 2
```

Pode-se verificar que cada termo (a partir do segundo) é a soma dos dois anteriores.

A sequência gerada é então igual a:

```0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...```

**Cuidado:** a sequência de Fibonacci cresce exponencialmente, o que significa que rapidamente atinge os limites de representação numérica dos tipos de dados. Assim, para o tipo ```int``` (32 bits), é possível calcular os primeiros 46 termos da sequência de Fibonacci sem nos preocuparmos com o *overflow*, enquanto que para o tipo ```long long``` (64 bits), podemos calcular os primeiros 92 termos da sequência antes do *overflow*.

### Versão recursiva

O código-fonte que calcula a função Fibonacci recursivamente é:

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

### Versão iterativa

Observe que podemos calcular a sequência de Fibonacci até o seu 92o termo seu que tenhamos problemas de *overflow* nas variáveis *long long*. Por isso o vetor que armazena a resposta foi declarado com 92 posições.

```
#include<stdio.h>

void fibonacci(int n, long long fib[92]){

    int i;
    fib[0] = 0;
    fib[1] = 1;

    for(i = 2; i <= n; i++){
         fib[i] = fib[i-1]+fib[i-2];
    }
}

int main(){
    int n;
    long long fib[92];

    scanf("%d",&n);

    fibonacci(n,v);

    printf("%lld\n",fib[n]);

    return 0;
}
```
