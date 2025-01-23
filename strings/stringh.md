# Biblioteca String

A biblioteca ```string.h``` é uma biblioteca padrão da linguagem C que implementa diversas funções para manipulação de strings (cadeias de caracteres). Lembre-se que em todas as strings, os vetores de caracteres devem terminar com o caractere nulo (```\0```).

Não se esqueça de incluir a biblioteca ```string.h``` no cabeçalho do código, como mostra o exemplo abaixo:

```
#include<stdio.h>
#include<string.h>

int main(){

    /*...*/

    return 0;
}
```

É responsabilidade do programador garantir que as string a serem passadas para as funções sejam válidos e que a memória necessária tenha sido alocada.

## strlen

Retorna o comprimento de uma string (número de caracteres antes do ```\0```). Exemplo de como utilizar:

```
#include<stdio.h>
#include<string.h>

int main(){
    int n;
    char str[10001];
    
    scanf("%[^\n]",str);
    
    n = strlen(str);
    
    printf("A string %s possui %d caracteres\n",str,n);
    return 0;
}
```

## strcpy

Copia o conteúdo de uma string **origem** para outra string **destino**.

```
#include<stdio.h>
#include<string.h>

int main(){
    char origem[10001],destino[10001];
    
    scanf("%[^\n]",origem);
    
    strcpy(destino,origem);
    
    printf("%s\n",destino);
    return 0;
}
```

## strcat

Essa função concatena (anexa) uma string **origem** ao final da string **destino**.

```
#include<stdio.h>
#include<string.h>

int main(){
    char origem[10001],destino[10001];
    
    scanf("%[^\n]",origem);
    getchar();
    scanf("%[^\n]",destino);
    
    strcat(destino,origem);
    
    printf("%s\n",destino);
    return 0;
}
```

## strcmp

Compara duas strings lexicograficamente, isto é, determina a ordem das strings como se fossem ordenadas em um dicionário. A função ```strcmp``` compara duas strings caractere por caractere (com base nos seus códigos ASCII) até encontrar uma diferença ou até que ambas as strings terminem.

```
#include<stdio.h>
#include<string.h>

int main(){
    char str1[10001], str2[10001];
    int diff;

    scanf("%[^\n]",str1);
    getchar();
    scanf("%[^\n]",str2);

    diff = strcmp(str1,str2);

    if(diff > 0){
        printf("%s eh maior do que %s\n",str1,str2);
    }
    else{
        if(diff < 0){
            printf("%s eh menor do que %s\n",str1,str2);
        }
        else{
            printf("%s eh igual a %s\n",str1,str2);
        }
    }

    return 0;
}
```

A função ```strcmp``` retorna:
- Um valor negativo se ```str1``` vem antes de ```str2``` lexicograficamente.
- Zero (0) se ```str1``` e ```str2``` são idênticas.
- Um valor positivo se ```str1``` vem depois de ```str2``` lexicograficamente.

O valor retornado (no código-fonte acima se trata de ```diff```) corresponde à posição (índice) dos caracteres em que a primeira diferença foi encontrada.

