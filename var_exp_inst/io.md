# 3. Variáveis e Expressões

## 3.3. Entrada e Saída de Dados



```
#include<stdio.h>

int main(){
    char c1,c2;

    c1 = '4';
    c2 = 'a';

    printf("Caractere c1 = %c\n",c1);
    printf("Segundo caractere eh %c\n",c2);

    c2 = c1;  // variavel c2 recebe o valor da variavel c1

    printf("Agora c2 = %c\n",c2);

    //printf("Codigo Ascii de %c eh %d\n",c2,c2);

    return 0;
}
```
