# 5.3. Variáveis em Funções e Escopo

## Escopo de Variáveis

O escopo de uma variável determina onde ela é válida e acessível.
Na linguagem C, temos:

- Escopo Global: Variáveis declaradas fora de qualquer função; são acessíveis por todo o programa.


- Escopo Local: Variáveis declaradas dentro de funções ou blocos; só podem ser usadas dentro do bloco onde foram declaradas.

## Variáveis com Escopo Local

Veja o exemplo a seguir:

```
#include <stdio.h>

int soma(int a, int b){
    int s;
    s = a + b;
    return s;
}

int main(){
    int x,y,r;

    scanf("%d %d",&x,&y);

    r = soma(x,y);

    printf("%d\n",r);

    return 0;
}
```

Como a variável ```s``` foi declarada no interior da função ```soma```, seu escopo é válido apenas dentro da função ```soma```. Isso significa que você pode apenas trabalhar com ela (atribuindo valores, utilizando-a em operações aritméticas e em estruturas condicionais) apenas dentro da função ```main```.

O mesmo raciocínio vale para as variáveis ```x``` e ```y```, que foram declaradas na função ```main```. Elas são visíveis apenas dentro da função ```main```, não sendo possível acessá-las diretamente em qualquer outra parte do código-fonte, como na função ```soma```.


