# 2.1. Estrutura Básica

## O começo

A criação de um programa em linguagem C começa pela seguinte estrutura básica. Abra um arquivo em texto e cole o seguinte código-fonte.

```
int main(){

    return 0;
}
```

Agora vamos entender o que cada parte faz:

- ```int main() { ... }```: Trata-se da função principal do programa, que é o ponto de partida do programa. Todo programa em linguagem C deve ter uma função main(). A palavra ```int``` antes do nome ```main()``` indica que esta função retornará um valor inteiro para onde foi chamada - isto é, no Terminal do Linux ou outro Sistema Operacional equivalente.

Tudo que está dentro das chaves (abre e fecha chaves) ```{ ... }``` são os comandos, expressões e instruções da função principal. Estas chaves são marca registrada da Linguagem C e são utilizadas para delimitar o escopo de comandos mais complexos (estruturas condicionais, de repetição, de funções e estruturas). No caso acima, trata-se do escopo da função ```main()```.

**Importante**: Um programa em linguagem C pode fazer uso de outras funções, como as matemáticas ou de entrada e saída, como também funções criadas pelo próprio desenvolvedor (você no caso) para organizar o código-fonte e melhorar a abstração.

- ```return 0;```: uma vez que a função ```main()``` está "configurada" para retornar um valor inteiro, esse comando faz com que o valor ```0``` sempre seja retornado pela função ```main``` para o local onde foi chamad - isto é no Terminal do Linux. O valor inteiro que aparece ao lado do comando ```return``` está relacionada a um comportamento que o programa pode ter durante sua execução ou após o encerramento de sua execução. No caso, o valor zero indica que o programa terminou com sucesso. Qualquer outro valor diferente de zero que o programa for retornar pode indicar algum tipo de erro ou condição de saída anormal a critério do desenvolvedor.

## Compilando e executando programas em linguagem C

Para rodar o programa acima, salve-o no formato *.c* como mostrado abaixo, em que ```nome_do_codigo``` é o nome do arquivo que você pode colocar de sua preferência.

```
nome_do_codigo.c
```

Como a Linguagem C é uma linguagem do tipo compilada, devemos utilizar o compilador  **gcc** (*GNU Compiler Collection*) para compilar o código-fonte visando a geração do arquivo executável, que é o programa de computador funcional obtido a partir do código-fonte associado. Para isso, abra o Terminal no Linux no diretório onde se encontra o código-fonte desenvolvido e digite:

```
gcc nome_do_codigo.c -o nome_executavel
```

em que ```nome_executavel``` é o nome do arquivo executável que será gerado após uma compilação bem sucedida, isto é, sem [erros de compilação](../avulsos/erros.md). ```-o``` é uma diretiva (também conhecida como *flag*) para gerar o arquivo executável no comando de compilação. 

Para rodar o programa acima, digite no Terminal do Linux:

```
./nome_executavel
```

**Importante:** toda vez que alterar o código-fonte, lembre-se de salvá-lo e realizar a compilação antes de executá-lo no Terminal.


## Imprimindo uma mensagem na tela

O código-fonte acima não permite nenhum tipo de interação entre o usuário e o programa, isto é, não se pode ver nada na tela, nem entrar com dados a partir do teclado.

Para esse propósito, precisamos incluir uma biblioteca que implementa funções específicas para leitura de dados digitados no teclado e para apresentar informações na tela do computador. Essa biblioteca é conhecida como **Standard Input/Output (stdio)**. Para incluí-la, deve utilizar o comando ```#include<stdio.h>```, que informa ao compilador a inclusão do conteúdo (funções, estruturas etc) descrito (como código-fonte) em um arquivo do tipo *header (.h)* (cabeçalho) no programa antes de compilar.

Especificamente, ```<stdio.h>```é um cabeçalho padrão em C/C++ que fornece as declarações de funções para leitura e escrita de dados, como ```printf()``` e ```scanf()```. Assim podemos modificar o código-fonte anterior para imprimir uma mensagem bastante conhecida:

```
#include<stdio.h>

int main(){

    printf("Hello World!\n");

    return 0;
}
```

em que o caractere especial ```\n``` é responsável por quebrar a linha (ou pular para a linha seguinte) na tela, fazendo com que as próximas impressões na tela ocorram exatamente a partir da linha abaixo.

## Comentando seu código-fonte

Os comentários são sentenças escritas dentro do código-fonte que não são levadas em consideração pelo compilador como sendo comandos, expressões ou instruções válidas. 

- ```/* Comentario */```: denominado comentário em bloco, permite que uma ou várias linhas sejam desconsideradas pelo compilador como sendo código-fonte válido;
- ``` // ```: conhecido como comentário de linha, 

```
#include<bits/stdc++.h>

int main(){

    // Comentario de linha: primeiro comando para imprimir uma mensagem na tela 
    printf("Athletico Paranaense eh o melhor\n");

    /* Comentario de bloco:
       Segundo comando para imprimir uma mensagem na tela */
    printf("Sao Caetano\n");

    return 0;
}
```

No contexto educacional, comentários são utilizados como 

## Imprimindo variáveis

```
#include<bits/stdc++.h>

int main(){

    /*Declaracao de variaveis explicita*/
    int a,b;

    a = 5;
    b = 2;

    printf("Athletico Paranaense eh o melhor %d\n",a+b);

    return 0;
}
```
