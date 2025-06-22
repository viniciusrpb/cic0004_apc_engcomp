# 6.3. Laço For

## Definição

É uma estrutura de repetição do tipo **contada** que executa um bloco de código-fonte múltiplas vezes, geralmente com um contador controlando o número de repetições. A sintaxe básica do ```for``` é:

```
for (inicialização; condição de permanência no laço; evolução) {
    // Bloco de código-fonte a ser repetido
}
```

As principais partes do ```for``` são:

- Inicialização: colocar um valor inicial para a variável responsável pela contagem (variável contadora) necessários para controlar a quantidade de iterações ou passos a serem executados pelo laço. Vale ressaltar que a inicialização é executada apenas uma vez, no início do laço;
- Condição de permanência no laço: trata-se de uma comparação como ocorre na estrutura if-else que verifica se a repetição deve continuar. Enquanto a condição for verdadeira, o laço continuará executando.
- Evolução: atualização da variável de controle a cada iteração após a finalização da execução de todo o bloco do código-fonte no escopo do laço for.

Observe o exemplo abaixo:

```
#include <stdio.h>

int main() {
    int i;
    for (i = 1; i <= 5; i++) {
        printf("i = %d\n", i);
    }
    return 0;
}
```

Veja que o programa acima executa **exatamente** 5 iterações (5 passadas no bloco de código do laço for), gerando a seguinte saída:

```
i = 1
i = 2
i = 3
i = 4
i = 5
```

O passo-a-passo do Laço For no código-fonte acima é o seguinte:

1) Inicialização: ```i = 1;``` é executado.
2) Verificação da condição: ```i <= 5``` é avaliado. Se for verdadeiro, deve-se permanecer no laço.
3) Execução do bloco de código: ```printf("i = %d\n", i);``` é executado.
4) Incremento: ```i++``` é executado.
5) Retorna ao passo 2 e repete o processo até que a condição seja falsa.

## Exemplos

### Contar números de N até 1, reduzindo de 2 em 2:

```
int i,n;

scanf("%d",&n);

for(i = n; i >= 1; i=i-2){
    printf("i = %d\n",i);
}
```

Para ```n=10```, o programa executa **exatamente** 5 iterações, gerando a seguinte saída:

```
i = 10
i = 8
i = 6
i = 4
i = 2
```

### Encontrar o menor dentre N elementos lidos da entrada

```
int i,n,a,menor;

scanf("%d",&n);

scanf("%d",&menor);

for(i = 0; i < n; i++){
    scanf("%d",&a);
    if(a < menor){
        menor = a;
    }
}
```

### Encontrar o maior dentre N elementos lidos da entrada

```
int maior,i,n,a;

scanf("%d",&n);

scanf("%d",&maior);

for(i = 0; i < n; i++){
    scanf("%d",&a);
    if(a < maior){
        maior = a;
    }
}
```

### Somar N elementos lidos da entrada

```
long long soma;
int i,n,a;

scanf("%d",&n);

soma = 0;

for(i = 0; i < n; i++){
    scanf("%d",&a);
    soma = soma + a;
}
```

## Formas de manipular a leitura do ```for```

```
#include <stdio.h>
#define n 10

int main () {

    /* Em alguns compiladores, declarar uma variavel como o
    tamanho do vetor causa erro de compilacao, por isso 
    usamos o #define */

    int i, vet[n] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    //retorna o vetor na ordem declarada
    for(i = 0; i < n; i++){
        printf("%d ", vet[i]);
    }

    printf("\n");

    //retorna o vetor de tras para frente
    for(i = n-1; i >= 0; i--){
        printf("%d ", vet[i]);
    }

    printf("\n");

    //retorna a metade de vetor de tras para frente
    for(i = n-1; i >= n/2; i--){
        printf("%d ", vet[i]);
    }

    printf("\n");

    return 0;
}
```

## Comandos break e continue dentro do laço ```for```

Para saber detalhes sobre o funcionamento desses comandos, leia [comandos break e continue](https://github.com/viniciusrpb/cic0004_apc_engcomp/blob/main/repeticao/while.md).

### Break

```
#include <stdio.h>

int main () {

    int i, soma = 0, n;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){

        if(soma > 20){
            break;
        } 

        soma += i;
    
        /* se em algum momento a soma dos numeros de i a n for maior que 20,
        nao serao somados mais numeros e o laco sera interrompido */

    }

    printf("O resultado maximo da soma foi: %d\n", soma);
    printf("O ultimo numero somado foi: %d\n", i-1);

    return 0;
}
```

### Continue 

```
#include<stdio.h>

    int main(){

        int i;

        printf("Comando continue antes do printf:\n");

        for(i = 1; i <= 10; i++){
            if(i == 5){
                continue;
            }
            printf("%d\n", i);
        }

        printf("Comando continue depois do printf:\n");

        /* bloco de código ineficiente */

        for(i = 1; i <= 10; i++){
            printf("%d\n", i);
            if(i == 5){
                continue;
            }
        }

        return 0;
    }
```
