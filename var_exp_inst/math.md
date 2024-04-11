# 3.4. Funções Matemáticas

```
#include<stdio.h>
#include<math.h>

int main(){
  
  return 0;
}
```

**IMPORTANTE:** ao incluir a biblioteca de funções matemáticas ```#include<math.h>``` no seu código-fonte, o comando de compilação é alterado incluindo-se a flag ```-lm``` como mostrado abaixo:

```
gcc arquivo.c -lm -o bin
```

Se não houverem erros, o arquivo executável do programa poderá ser executado com o seguinte comando:

```
./bin
```

**IMPORTANTE:** as funções matemáticas por padrão recebem números reais de dupla precisão (```double```), mas caso você coloque uma variável inteira para receber o resultado, apenas a parte inteira será considerada.

## Potência

```pow(x, y)```: Retorna o resultado da potência do inteiro ```x``` elevado à potência ```y```, isto é x^y.

```
#include<stdio.h>
#include<math.h>

int main(){
  int x,y;

  x = 3;
  y = 4;

  ans = pow(x,y);

  printf("%d",ans); /*retorna 81*/

  return 0;
}
```

## Raiz Quadrada

```sqrt(x)```: Retorna o resultado da raiz quadrada de ```x```.

```
#include<stdio.h>
#include<math.h>

int main(){
  int x;
  double ans;

  x = 16;

  ans = sqrt(x);

  printf("%lf\n",ans); /*retorna 4.0*/

  return 0;
}
```

## Valor absoluto

```fabs(x)```: Retorna o valor absoluto do número ```x```.

```
#include<stdio.h>
#include<math.h>

int main(){
  int ans;

  ans = fabs(-4);

  printf("%d\n",ans); /*imprime 4*/

  return 0;
}
```

## Teto 

```ceil(x)```: Retorna o menor número inteiro maior ou igual a x.

```
#include<stdio.h>
#include<math.h>

int main(){
  int ans;

  ans = ceil(6.54);

  printf("ceil(%d\n",ans); /*retorna 7*/

  return 0;
}
```

## Piso

```floor(x)```: Retorna o menor número inteiro maior ou igual a ```x```.

```
#include<stdio.h>
#include<math.h>

int main(){
  int ans;

  ans = floor(6.54);

  printf("%d\n",ans); /*retorna 6*/

  return 0;
}
```

## Arredondamento

```round(x)```: Recebe um valor real do tipo ```double``` ```x``` e retorna arredondado para o inteiro mais próximo.

```
#include<stdio.h>
#include<math.h>

int main(){
  int ans;

  ans = round(6.54);

  printf("%d\n",ans); /*retorna 7*/

  return 0;
}
```




floor(x): Retorna o maior número inteiro menor ou igual a x.
round(x): 
Funções Trigonométricas:

sin(x), cos(x), tan(x): Retorna o seno, cosseno e tangente de x, onde x é em radianos.
asin(x), acos(x), atan(x): Retorna o arco seno, arco cosseno e arco tangente de x, em radianos.
Funções Exponenciais e Logarítmicas:

exp(x): Retorna o valor de e elevado a potência x.
log(x): Retorna o logaritmo natural de x.
log10(x): Retorna o logaritmo de x na base 10.

Funções de Valor Absoluto:

fabs(x): Retorna o valor absoluto de x para números de ponto flutuante.

Outras Funções Matemáticas:


fmod(x, y): Retorna o resto da divisão de x por y.
remainder(x, y): Retorna o valor do resto da divisão de x por y.


