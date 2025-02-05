# 11.2. Estrutura Básica de uma Função Recursiva

Uma função recursiva geralmente é composta por duas partes:

- Caso base: o critério de parada que termina a recursão.
- Recorrência (ou Recursão): atrata-se de uma ou mais chamadas à própria função com um argumento modificado, reduzindo o problema em direção ao caso base.

Exemplo:

```
tipo funcao_recursiva(int n){
    // Caso base: como parar o processo de recursao
    if(n == 0){
        return "alguma coisa"; // o valor de retorno estara relacionado ao problema sendo resolvido
    }
    int ans;

    // Chamada da propria funcao dentro dela mesma
    ans = funcao_recursiva(n-1); // veja que n-1 faz com que o valor de n seja diminuido a cada chamada da funcao
    return ans;
}
```

Vamos ver alguns exemplos

## Pilha de Chamadas de Funções

Na linguagem C, as chamadas de funções, incluindo as recursivas, são controladas pela pilha de execução (*call stack*), que é uma estrutura de dados usada pelo Sistema Operacional e pelo GCC para gerenciar as chamadas e retornos de funções durante a execução do programa.



## Stack Overflow

Se o caso base não for definido (explicitamente ou implicitamente), ou ainda estiver incorretamente indefinido, o número de chamadas recursivas pode levar ao estouro de pilha (*Stack Overflow*), que é um erro em tempo de execução que aparece como uma mensagem do tipo *Segmentation Fault* e/ou *Runtime Error*.

```
#include<stdio.h>

void f(int n){
    if(n == 0){
        return ;
    }
    printf("%d\n",n);
    f(n-1);
}

int main(){

    int n;

    scanf("%d",&n);

    f(n);

    return 0;
}
```


## Exemplo: Contar de N até 1

```
#include<stdio.h>

void f(int n){
    if(n == 0){
        return ;
    }
    printf("%d\n",n);
    f(n-1);
}

int main(){

    int n;

    scanf("%d",&n);

    f(n);

    return 0;
}
```

ou ainda podemos deixar o caso base implícito:

```
#include<stdio.h>

void f(int n){
    if(n > 0){
        printf("%d\n",n);
        f(n-1);
    }
}

int main(){

    int n;

    scanf("%d",&n);

    f(n);

    return 0;
}
```

