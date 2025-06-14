# Beecrowd 1318 - Fake Tickets

## Enunciado

Disponível [aqui](https://judge.beecrowd.com/pt/problems/view/1318).

## Requisitos para Resolução do Problema

Estruturas de repetição, vetores. Uso de vetores como um histograma ou distribuição de frequência

## Raciocínio

Devemos determinar quantos bilhetes falsos existem em um conjunto de bilhetes coletados em uma festa (ou formatura?). Considera-se que um bilhete foi falsificado quando existem mais de uma cópia dele no conjunto desses bilhetes coletados na festa.

Sabemos que:

- Os tickets são enumerados por inteiros de *1* a *n*. Vamos nos referir ao identificador ```id_ticket``` como um inteiro que representa um ticket.
- Vamos ter que contabilizar a ocorrência de cada ticket em um vetor, aqui chamado de ```tickets[]```

O passo-a-passo para resolução do problema:

1) Fazemos a leitura de ```n``` e ```m```. Precisaremos de utilizar ```n+1``` posições no vetor ```tickets```.
2) Devemos inicializar todas as posições desse vetor com o valor zero, isto é, ```tickets[i] = 0```, para *i=1,...,n*.
3) Fazemos a leitura dos *m* tickets recolhidos na festa. Para cada ticket recolhido, com identificador ```id_ticket```, contabilizamos ele no vetor ```tickets```.
4) Ao final, devemos fazer uma última passada no vetor ```tickets```. Caso um ticket possua uma contagem maior do que 2, indica que ele contém cópias, ou seja, houve uma falsificação.

## Implementação

Suponha a entrada:

```
6 10
6 1 3 6 6 4 2 3 1 2
```

em que *n=6*, *m=10*. Como os tickets possuem valor de *1* a *n*,  vamos declarar um vetor de inteiros como se segue:

```
int tickets[10001];
```

O índice zero do vetor não será utilizado. Para cada caso de teste, vamos inicializar suas posições com zeros:

```
for(i = 1; i <= n; i++){
    tickets[i] = 0;
}
```

Com isso, teremos o vetor dessa maneira:

![Vetores inicializados](figs/1318_init.png)

Agora vamos ler a entrada dos *m* tickets coletados na festa

```
for(i = 0; i < m; i++){
    scanf("%d",&id_ticket);
    tickets[id_ticket]++;
}
```

Esse processo é ilustrado abaixo:

![Contagem dos tickets](figs/1318_conta.png)


Finalmente, devemos contabilizar em uma variável (```falsos``` ) os tickets que possuem mais de uma cópia, como mostram as posições coloridas na imagem a seguir:

![Histograma final](figs/1318_final.png)

o que pode ser feito de acordo com o trecho de código-fonte abaixo:

```
falsos = 0;
for(i = 0; i < n; i++){
    if(tickets[i] > 1){
        falsos++;
    }
}
```


## Código-fonte final

```
#include<stdio.h>

int solve(int n, int m){
    int i,id_ticket,falsos;
    int tickets[10001];

    for(i = 1; i <= n; i++){
        tickets[i] = 0;
    }

    for(i = 0; i < m; i++){
        scanf("%d",&id_ticket);
        tickets[id_ticket]++;
    }

    falsos = 0;

    for(i = 1; i <= n; i++){
        if(tickets[i] > 1){
            falsos++;
        }
    }
    return falsos;
}

int main(){

    int n,m,ans;

    scanf("%d %d",&n,&m);

    while(n != 0 && m != 0){
        ans = solve(n,m);
        printf("%d\n",ans);
        scanf("%d %d",&n,&m);
    }

    return 0;
}
```

