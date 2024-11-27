# 10. Funções

Uma **função** (sub-algoritmo) é um bloco de código que realiza uma tarefa específica e pode ser reutilizado em diferentes partes de um programa.

Usar funções em códigos na linguagem C é uma prática essencial para tornar o desenvolvimento mais organizado, eficiente e compreensível. Aqui estão alguns dos principais benefícios:

## Porque usar Funções?

Usar funções em códigos na linguagem C é uma prática importante para tornar o desenvolvimento mais organizado, eficiente e compreensível.

1. Modularidade: as funções permitem dividir um programa grande em partes menores e mais gerenciáveis. Cada função pode ser projetada para realizar uma tarefa específica, tornando o código mais fácil de entender e manter.
2. Reutilização de Código: uma função pode ser chamada várias vezes em diferentes partes do programa, evitando a repetição de código. Isso reduz o trabalho de escrita e possíveis erros, além de facilitar futuras alterações.
3. Leitura e Manutenção: programas estruturados em funções são mais fáceis de ler porque as tarefas são separadas de forma lógica. Atualizações e correções podem ser feitas em funções individuais sem afetar o restante do programa.
4. Testabilidade: funções isoladas podem ser testadas individualmente, o que facilita a identificação de problemas. Isso melhora a confiabilidade do código, já que cada parte é validada separadamente.
5. Abstração: Ao usar funções, você pode esconder os detalhes de implementação e focar no que elas fazem, em vez de como fazem. Isso simplifica o raciocínio sobre o programa, especialmente em projetos mais complexos.

## Estrutura de uma Função

Em linguagem C, temos funções que retornam valores e que não retornam valores.

### Função com Retorno

- Tipo de retorno: Define o tipo do valor que a função devolve ao ser chamada (por exemplo, int, float, void).
- Nome: Identifica a função e permite chamá-la pelo nome.
- Parâmetros (opcional): Valores que podem ser passados para a função, para que ela os utilize em sua lógica.
- Corpo: O bloco de código entre {} que implementa o comportamento da função.

```
tipo nome_da_funcao( tipo2 var2, tipo3  var3, ... ){
    tipo var;

    /* ... faz alguma coisa ... */

    return var;
}
```

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

### Função sem Retorno

- Tipo de retorno é sempre void.
- Nome: Identifica a função e permite chamá-la pelo nome.
- Parâmetros (opcional): Valores que podem ser passados para a função, para que ela os utilize em sua lógica.
- Corpo: O bloco de código entre {} que implementa o comportamento da função.

```
void nome_da_funcao( tipo2 var2, tipo3  var3, ... ){
    /* ... faz alguma coisa ... */
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

