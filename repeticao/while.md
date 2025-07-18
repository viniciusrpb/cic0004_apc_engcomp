# 6.2. Laço While

## Estrutura Básica

A estrutura de repetição while é usada para repetir um bloco de código enquanto uma condição for verdadeira. Uma condição é descrita por uma [expressão de comparação](../condicionais/comparacao.md) da mesma maneira que nas estruturas ```if-else```. A sintaxe básica é a seguinte:

```
while (CONDIÇÃO) {
    /*comando 1*/
    /*comando 2*/
}
```

A ordem de execução do laço ```while``` é como se segue:

1) Avalia-se a CONDIÇÃO, que é a condição de permanência dentro da estrutura de repetição;
2) Se o resultado de CONDIÇÃO for verdadeiro, o bloco de código dentro do ```while``` (chamado de **escopo** do laço while) é executado por completo. Cada passada completa por todos os comandos e expressões dentro do escopo do laço while é denominada **iteração**. Após a execução de todos os comandos e expressões (a finalização da iteração), o fluxo do algoritmo volta para a avaliação da condição, isto é, para o Passo 1. Assim, será verificado se uma nova iteração será executada ou não;
3) Se a condição for falsa, o bloco de código dentro do ```while``` não será executado e o algoritmo retoma seu fluxo natural, isto é, na primeira linha imediatamente após o laço ```while```.

A condição da estrutura ```while``` é geralmente elaborada visando contar a quantidade de iterações ou aguardar um estado esperado de variáveis do algoritmo.


### Exemplo

Elabore um algoritmo que leia ```n``` números inteiros separados por espaço da entrada padrão e imprima cada um deles na tela, um por linha:

```
#include <stdio.h>

int main() {
    int n,a,i;

    printf("Digite a quantidade de inteiros a serem lidos: ");
    scanf("%d",&n);

    /* Inicia a variavel contadora */
    i = 1;
    
    while (i <= n) { /* Condicao de permanencia no while: enquanto o valor i for menor ou igual a n */
        printf("Digite o inteiro %d: ",i);
        scanf("%d",&a);  // Le o valor de a
        printf("%d\n", a); // Imprime o valor de a lido
        i = i+1; // Contabiliza que uma iteracao foi finalizada
    }
    
    return 0;
}
```

**IMPORTANTE:** cuidado com o **LOOP INFINITO**!!! Trata-se da situação em que o código-fonte fica "preso" dentro da estrutura da repetição devido à condição de permanência na estrutura de repetição sempre retornar verdadeiro. Isso ocorre quando uma expressão de comparação é mal formulada, nunca alcançando um resultado falso que faz interromper o laço.

## Quando Utilizar?

O Laço While é mais indicado do que os demais tipos de laço em Linguagem C quando você estiver elaborando um algoritmo e tiver que executar blocos de comandos repetidas vezes, mas não se sabe de antemão a quantidade de iterações a serem efetuadas. Em outras palavras, pode ser mais fácil utilizar o laço while quando temos que executar uma quantidade indefinida, mas finita, de iterações.

## Exemplo 1

Leia um número inteiro positivo ```n``` e determine a quantidade de bits iguais a 1 que ele possui em sua representação binária. Imprima um único número inteiro em uma linha como resposta. Por exemplo, o número inteiro 21 é denotado pelo número 10101 no sistema binário. Existem 3 bits iguais a 1 nesse número.

Vamos utilizar a ideia do tão conhecido algoritmo "Sucessivas Divisões" para converter um número inteiro na base decimal para seu correspondente na base binária. 

```
#include <stdio.h>

int main() {
    int n,i,a,n_bits_1;

    scanf("%d",&n);

    /*incializa a variavel que armazena a quantidade de bits iguais a 1 no numero n*/
    n_bits_1 = 0; 
    
    while (n > 0) { /* Enquanto o inteiro n for maior do que zero */
        n_bits_1 = n_bits_1 + (n%2);  /*aqui soma-se 0 ou 1 a variavel n_bits_1 */
        n = n/2;    /*atualiza o valor de n*/
    }

    printf("%d\n",n_bits_1);
    
    return 0;
}
```

Analisando o algoritmo acima, pode-se verificar que não é possível estimar a quantidade de iterações a serem executadas em um primeiro momento. Isso significa que vamos executando as iterações enquanto a condição ajustada para este problema em específico for verdadeira. 


## Exemplo 2 (contagem)

Leia ```n``` números inteiros separados por espaço e imprima a soma entre eles.

```
#include <stdio.h>

int main() {
    int n,i,a;
    long long int soma;

    scanf("%d",&n);

    /* Inicia a variavel contadora */
    i = 1;
    soma = 0; /*variavel que acumula o valor da soma dos n inteiros a serem lidos*/
    
    while (i <= n) { /* Condicao de permanencia no while: enquanto o valor i for menor ou igual a n */
        scanf("%d",&a);
        soma = soma + a; /* somar o valor de a ao valor somado dos n-1 inteiros anteriores */
        i = i+1; // Atualiza i para o próximo número
    }

    printf("%lld\n",soma);
    
    return 0;
}
```

## Comandos break e continue

### Break

O comando ```break``` interrompe um laço, sendo ele ```for```, ```while``` ou ```do-while```, continuando a execução na linha imediata depois do laço que está sendo interrompido. Como deve ser testada alguma condição para que a execução do laço seja encerrada, o comando break deve estar sempre dentro de uma estrutura condicional [**if-else**](https://github.com/viniciusrpb/cic0004_apc_engcomp/blob/main/condicionais/ifelse.md) (quando em laço de repetição). Caso se esqueça de definir a condição para a interrupção, o bloco de código será encerrado sempre na primeira repetição do laço.

Também pode ser utilizado na estrutura [switch-case](https://github.com/viniciusrpb/cic0004_apc_engcomp/blob/main/condicionais/switchcase.md).

```
#include <stdio.h>

int main () {

    int n;

    printf("Digite um numero diferente de 0:\n");
    scanf("%d", &n);

    while(1){

        /* declarar while(1) faz com que a condição sempre seja verdadeira 
        e o laco sempre seja executado (laco infinito), pois 1 eh diferente de 0 */

        if(n == 0){
            break;
        }

        /* se o numero for igual a 0, todo o restante do laco é ignorado e
        ele é interrompido */

        printf("Voce digitou %d\n", n);
        printf("Digite um numero diferente de 0:\n");
        scanf("%d", &n);
    }

    return 0;
}
```

Perceba que esse código pode ser substuído pela seguinte lógica mantendo o mesmo funcionamento:

```
#include <stdio.h>

int main () {

    int n;

    printf("Digite um numero diferente de 0:\n");
    scanf("%d", &n);

    while(n != 0){
        printf("Voce digitou %d\n", n);
        printf("Digite um numero diferente de 0:\n");
        scanf("%d", &n);
    }

    return 0;
}
```

**!!! IMPORTANTE:** A utilizacao do ```while(1)``` é funcional somente quando há um comando break, caso contrário o laço NUNCA será encerrado.

### Continue

O comando ```continue``` pula para a próxima repetição do laço (se houver), ignorando a linhas seguintes ao comando **ainda dentro da repetição atual**. Isso significa que também é necessário verificar uma condição, e nesse caso ```continue``` só é utilizada junto de if-else. É importante se atentar à ordem em que o comando aparece dentro da repetição, pois ignora o que vem depois; portanto, se colocado como o último comando a ser executado, se torna ineficiente.

Pode ser utilizado em todas as estruturas de repetição.

```
#include <stdio.h>

int main () {

    int n, i = 5;

    while(i > 0){

        i--;

        printf("Digite um numero diferente de 5:\n");
        scanf("%d", &n);

        if(n == 5){
            continue;
        }

        /* se o numero for igual a 5, o printf sera ignorado 
        e o codigo pedira o proximo numero */

        printf("Voce digitou %d\n", n);
    }

    return 0;
}
```

Exemplo de um ```continue``` ineficiente:

```
#include <stdio.h>

int main () {

    int n, i = 5;

    while(i > 0){

        i--;
        /* como estamos usando um comando que pula para a proxima repeticao,
        devemos ter cuidado com incrementos e decrementos. se colocarmos
        depois do continue, o codigo pode nao apresentar o comportamento desejado */

        printf("Digite um numero diferente de 5:\n");
        scanf("%d", &n);
        printf("Voce digitou %d\n", n);

        if(n == 5){
            continue;
        }
    }

    return 0;
}
```

## Ler Dados da Entrada até Fim de Arquivo (EOF)

Uma situação comum nos juízes online é ter que realizar a leitura de **vários casos de teste em uma única entrada** até o final do arquivo (**E**ND **O**F **F**ILE) - EOF. Esse é um caso típico em que não sabemos quantos casos de teste existem na entrada, então o laço ```while``` é mais indicado para essa situação.

Se você topar com um problema ou exercício em que os dados da entrada tem que ser lidos até encontramos fim de arquivo (EOF), teremos que utilizar o valor de retorno da função ```scanf()```. **SIM, a função scanf() retorna um valor inteiro** indicando o número de valores da entrada formatada que foram convertidos e atribuídos às variáveis especificadas com sucesso. Se nenhum item for atribuído, ```scanf()``` retorna 0. Agora, se ```scanf()``` não conseguir ler nada da entrada, o valor retornado é ```-1```, que é equivalente aos três caracteres EOF (EOF é uma palavra reservada - não pode ser utilizada em nomes de variáveis e nomes de funções).

O código-fonte abaixo descreve a situação em que números inteiros são sucessivamente lidos da entrada e impressos na tela até que não exista mais nenhum número fornecido na entrada padrão:

```
#include <stdio.h>

int main() {

    int n,r;

    r = scanf("%d",&n);

    while (r != -1) {   /* while (scanf("%d",&n) != -1) { */
        printf("Inteiro lido = %d\n",n);
        r = scanf("%d",&n);
    }
    
    return 0;
}
```

outra possibilidade é fazer:

```
#include <stdio.h>

int main() {

    int n;

    while (scanf("%d",&n) != EOF) {   /* while (scanf("%d",&n) != -1) { */
        printf("Inteiro lido = %d\n",n);
    }
    
    return 0;
}
```

**Importante:**: EOF é uma palavra reservada! Não se pode utilizá-la para servir como nome de variáveis e funções.

