# 7.3. Vetores e Funções

Uma função é um bloco de código-fonte que realiza uma tarefa específica. Geralmente, uma função é declarada e definida uma **única** vez e pode ser chamada várias vezes ao longo do programa.

A Linguagem C permite que vetores sejam passados como argumentos funções. Entretanto há algumas peculiaridades a serem detalhadas adiante.

## Relembrando a Passagem por Valor

A passagem por valor na Linguagem C ocorre quando uma cópia do valor de uma variável é enviada para uma função. Nesse caso, qualquer modificação feita no parâmetro dentro da função não afeta a variável original, pois a função trabalha apenas com a cópia do valor.

```
#include<stdio.h>

int soma(int a, int b) {
    return a + b;
}

int main(){
    int n,m,s;

    scanf("%d %d",&n,&m);

    s = soma(n,m);

    printf("%d\n",s);

    return 0;
}
```

Observe que os valores armazenados nas variáveis ```n``` e ```m``` são copiados para as variáveis ```a``` e ```b```, respectivamente. Observe também que os endereços de memória dessas variáveis são diferentes, com as variáveis ```n``` e ```m``` sendo relacionadas com a função ```main``` e as variáveis ```a``` e ```b``` sendo variáveis locais à função ```soma```.

**IMPORTANTE:** tradicionalmente, as variáveis de quaisquer tipos nativos (int, float, double, char) são passadas por valor. Mas considerando os vetores, essa história muda...

## Passagem por Referência

Quando trabalhamos com vetores, passamos o endereço da variável, permitindo que a função modifique diretamente o valor original. Isso significa que, na Linguagem C, os vetores são passados por referência (o endereço inicial do vetor é enviado), permitindo modificar diretamente seus valores.

```
#include <stdio.h>

void leiaVetor(int a[100], int n) {
    int i;
    for(i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
}

int main() {
    int i,n,v[100];

    leiaVetor(v,n);

    for(i = 0; i < n-1; i++){
        printf("%d ",v[i]);
    }
    printf("%d\n",v[n-1]);

    return 0;
}
```

**IMPORTANTE:**

- Deve-se passar explicitamente a quantidade de elementos do vetor na chamada da função (e deve-se definir nos parâmetros da função) quando o vetor é passado por referência;
- Modificação de valores: Como o vetor é passado por referência, qualquer alteração feita na função é refletida no vetor original.

## Exemplos
