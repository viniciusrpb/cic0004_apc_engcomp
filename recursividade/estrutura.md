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

## Fatorial


