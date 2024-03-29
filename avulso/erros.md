# Erros de Compilação Comuns (e como resolvê-los)


### Uso incorreto de operador

No exemplo abaixo, o uso operador **++** está incorreto, pois ele não requer outra variável - trata-se de um operador unário.

```
  int a,b;

  a = 1;
  b = 2;

  a++b;
```

isso vai gerar o erro:

```error: expected ‘;’ before ‘a’```

Para corrigi-lo, basta remover o ```b``` logo após o ```a++```:

  ```
int main(){
    int a,b;

    a = 1;
    b = 2;

    a++;
    return 0;
}
```

### Declaração repetida da variável ```a``` mas com diferentes tipos.

Veja o código-fonte abaixo:

```
    int a;
    float a;
```
  
  vai gerar o erro:
  
  ```
  error: conflicting types for ‘a’; have ‘float’
      7 |     float a;
        |           ^
  note: previous declaration of ‘a’ with type ‘int’
      6 |     int a;
  ```

### Esqueceu de algum símbolo de pontuação?

Veja o código-fonte abaixo:

```
#include<stdio.h>

int main(){

    int a

    printf("%d\n",a);

    return 0;
}
```

Ao compilar esse código-fonte, o seguinte erro será emitido pelo GCC:

```
error: expected ‘=’, ‘,’, ‘;’, ‘asm’ or ‘__attribute__’ before ...
```

Vale lembrar que o ```;``` faz parte da sintaxe da linguagem C e sempre deve ser colocado após atribuições, declarações de variáveis e estruturas. No código-fonte, faltou colocar o  ```;``` logo após a declaração da variável inteira  ```a```. Corrigindo:

```
#include<stdio.h>

int main(){

    int a;

    printf("%d\n",a);

    return 0;
}
```
