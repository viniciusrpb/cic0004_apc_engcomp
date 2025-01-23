# 8.3 Operações com Strings

## Percorrer uma String

Para se percorrer uma string até o último caractere válido (não é o caractere nulo ```'\0'```), deve-se fazer como nos vetores:
1- Declare uma variável inteira para corresponder a cada índice da string. Vamos chamar essa variável de ```i```;
2- Comece com ```i=0```;
3- Verifique se ```str[i] != \0```. Caso essa condição seja falsa, finalizamos o percorrimento da string. Caso contrário, vá para o passo 4.
4- Se chegou aqui, é porque você está acessando uma posição que contém um caractere da string. Vamos imprimir ele apenas para vê-lo.
5- Incremente a variável ```i```, isto é, faça ```i++```.
6- Volte ao passo 3.

```
#include<stdio.h>
#define MAX_N 1000

int main(){
    char str[MAX_N+1]; // coloca o caractere '\0'
    int n,i;

    scanf("[^\n]",str);

    i = 0;
    while(str[i]!='\0'){
        printf("str[%d] => %c\n",i,str[i]);
        i++;
    }

    return 0;
}
```

Se digitarmos a string ```"Arroz"```, a saída para o programa acima será:

```
str[0] => A
str[1] => r
str[2] => r
str[3] => o
str[4] => z
```

Mas o que ocorre?

<img src="images/strings2.png" alt="Percorrendo uma string" width="70%">
