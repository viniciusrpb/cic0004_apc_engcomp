# 8.1. Representação de Strings

Strings podem ser declaradas e inicializadas de várias maneiras:

## Inicialização direta

### Vetor de caracteres

```
char str[10] = "Ola mundo";
```

Aqui, o vetor ```str``` tem espaço para até 10 caracteres. A constante ```"Ola mundo"``` ocupa 11 posições: 10 caracteres + o caractere nulo ```\0```.


### Vetor de caracteres

```
char nome[4] = {'O', 'l', 'a', '\0'};
```

Cada caractere é declarado explicitamente, e o último caractere é ```\0```.

## Leitura de Strings da Entrada Padrão

### scanf clássico:

Utilize o especificador ```%s``` para capturar uma string da entrada padrão:

```
char str[101];

scanf("%s", str);
```

Observe que no comando acima, a string pode ter até 100 caracteres e 1 caractere para armazenar o ```\0```.

No código-fonte completo, tem-se:

```
#include<stdio.h>

int main(){
    char str[101];

    scanf("%s", str);

    printf("String lida: %s\n", str);

    return 0;
}
```

O operador ```&``` (retorna o endereço de uma variável) não é necessário no ```scanf``` ao usar o especificador ```%s``` porque o nome de um vetor de qualquer tipo já é, por si só, uma referência para o seu primeiro elemento (que está na primeira posição).

É importante salientar que ```scanf``` com o especificador ```%s``` não lê espaços em branco. Caso você digite *"Athletico Paranaense"* e apertar *ENTER*, aparecerá na saída:

```String lida: Athletico```

A parte remanescente ```Paranaense``` permanecerá no Buffer de Entrada e Saída aguardando ser lida por um outro comando ```scanf```.

### scanf para ler até \n

Caso você queira ler uma string com espaços em branco e até encontrar a quebra de linha (caractere ```\n```), faça:

```
scanf("%[^\n]", str);
```
O caractere \n permanece no buffer:

Depois de usar ```%[^\n]```, o caractere ```\n``` ainda permanecerá no Buufer de I/O, podendo causar problemas em leituras subsequentes. Por isso, se livre desse ```\n``` por meio do comando:

```
getchar();
```

*Obs.:* nas versões mais antigas da Linguagem C, era comum se usar ```scanf("%[^\n]s", str);```, mas atualmente o caractere constante ```s``` não é mais necessário, sendo ignorado pelos compiladores mais modernos, como o GCC.

**Evite o estouro do Buffer de I/O**: execute o código-fonte abaixo e veja o que acontece.

```
#include <stdio.h>

int main() {
    char str1[6];
    char str2[21] = "Remo e Paysandu";

    scanf("%s",str1);

    printf("str1: = %s\n", str1);

    printf("str2: = %s\n", str2);

    return 0;
}
```

Observe que se o usuário digitar mais caracteres do que a string ```str1``` suporta, a memória adjacente associada à outra variável ```str2``` será sobrescrita. Por isso, tome cuidado ao declarar o tamanho máximo de cada string. **Sempre coloque o espaço de memória realmente necessário para armazenar todos os caracteres a serem lidos da entrada em uma string**.
Em juízes online, como o Beecrowd, verifique nos limites das entradas do problema, o tamanho máximo que cada string pode possuir. 

### Função ```fgets```

Outra possibilidade é utilizar a função ```fgets```

```
char str[101];

fgets(str, sizeof(str), stdin);
```

Ela garante que não mais do que o tamanho do vetor seja lido. Além isso, ela inclui o caractere de nova linha (```\n```) na string, a menos que a linha lida seja maior que o espaço disponível.

```sizeof``` é um operador que retorna a quantidade de bytes necessárias para representar todo o espaço de memória demandado pela variável ```str```. No caso será *101* posições vezes 1 byte = 101 bytes. ```stdin``` é a abreviação de *standard input* - entrada padrão.

