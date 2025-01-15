# 5.2. Estrutura de Funções

Em linguagem C, temos funções que retornam valores e que não retornam valores.

## Função com Retorno

Uma função com retorno possui a seguinte estrutura:

```
tipo nome_da_funcao(tipo1 var1, tipo2 var2, ... ){
    tipo var;

    /* ... comandos, expressões e instruções da função ... */

    return var;
}
```

- ```tipo``` se refere ao tipo de retorno, que define o tipo do valor que a função devolve ao ser chamada (por exemplo, int, float, void);
- ```nome_da_funcao``` identifica a função e permite chamá-la pelo nome no decorrer do código-fonte;
- Parâmetros (opcional): Valores que podem ser passados para a função, no formato ```tipo nome_da_variavel``` e separadas por vírgula, para que ela os utilize em seus comandos, expressões e instruções;
- Corpo: O bloco de código-fonte entre abre-chaves e fecha-chaves descreve as operações e os passos efetuados pela função.

**Exemplo:** uma função que determina o sucessor de um número:

```
int sucessor(int a){
    int s;
    s = a+1;
    return s;
}
```

**Exemplo 2:** uma função que determina a soma de dois inteiros:

```
int soma(int x, int y){
    int s;
    s = x+y;
    return s;
}
```

## Chamada da Função

```
#include<stdio.h>

int f(int x){
    int y;
    y = x+1;
    return y;
}

int main(){
    int a,b;

    scanf("%d",&a);

    b = f(a);

    printf("%d\n",b);
    return 0;
}
```

ou 

```
#include<stdio.h>

/* Cabecalho (header) da funcao*/
int f(int x);

int main(){
    int a,b;

    scanf("%d",&a);

    b = f(a);

    printf("%d\n",b);
    return 0;
}

int f(int x){
    int y;
    y = x+1;
    return y;
}
```

Repare que:

- Separação de responsabilidades: Cada função cuida de um cálculo específico.
- Reutilização: As funções podem ser chamadas quantas vezes forem necessárias.
- Legibilidade: O main fica limpo, descrevendo o fluxo principal do programa sem detalhes desnecessários.

Portanto, funções beneficiam o desenvolvimento de códigos-fontes mais robustos e fáceis de ler e expandir, especialmente em projetos maiores.

## Passagem por Valor



## Função sem Retorno

Quando se necessita criar uma função que não retorna nenhum valor, pode-se defini-la como sendo do tipo **void**. A estrutura de uma função do tipo **void** é a seguinte:

```
void nome_da_funcao( tipo2 var2, tipo3  var3, ... ){
    /* ... faz alguma coisa ... */
}
```

- Uma função sem retorno deve ser definida sempre como sendo o "tipo" **void**.
- ```nome_da_funcao``` identifica a função e permite chamá-la pelo nome no decorrer do código-fonte.
- Parâmetros (opcional): valores que podem ser passados para a função, para que ela os utilize em seu código-fonte.
- Corpo: O bloco de código-fonte entre abre-chaves e fecha-chaves que implementa os comandos, operações e instruções da função.

Então não é necessário colocar o comando ```return```? Exatamente. Em funções **void**, não é necessário colocar o comando ```return```. Em alguns tipos de funções, utiliza-se o ```return ;``` sem explicitar um valor de retorno.

Suponha que queiramos criar uma função que imprime dois valores inteiros *a* e *b*. Podemos então elaborar o seguinte código-fonte:

```
#include<stdio.h>

void imprimeSoma(int a, int b){
    printf("Soma: %d\n",a+b);
}

int main(){
    int x,y;

    scanf("%d %d",&x,&y);

    imprimeSoma(x,y);

    return 0;
}
```

Veja que como o objetivo da função ```imprimeSoma``` é apenas imprimir, não é necessário retornar nenhum valor para a função ```main```, onde ocorre a chamada.
