# Máximo Divisor Comum - Greatest Common Divisor (Versão Recursiva)

A ideia empregada para o cálculo do Máximo Divisor Comum (*Greatest Common Divisor* - GCD) se baseia no [Algoritmo de Euclides](http://clubes.obmep.org.br/blog/sala-de-estudos-algoritmo-de-euclides-para-determinacao-de-mdc/diagramas/).

## Definição

O GCD entre dois números inteiros positivos é o maior divisor em comum entre eles. Por exemplo, se ```a=84``` e ```b=16```, podemos ver pela fatoração de cada número pelos seus fatores primos que:

```
84 = 2 x 2 x 3 x 7

16 = 2 x 2 x 2 x 2
```

Podemos ver que existe uma sequência de ```2x2``` em comum na fatoração de 84 e 16. Logo o GCD entre 84 e 16 é 2 x 2 = 4.

Por definição, temos as seguintes propriedades para o gcd:

- Divisibilidade:

```
gcd(a,0) = a
```
- Comutatividade:

```
gcd(a,b) = gcd(b,a)
```

## Ideia do Algoritmo

Sejam dois números inteiros ```a``` e ```b```, em que ```a > b```. De acordo com a seguinte propriedade da divisibilidade:

```se k divide a e k divide b, então k divide (ap + bq)```

em que ```p``` e ```q``` são números inteiros.

Além disso, a divisão de Euclides afirma que, dados dois números inteiros  ```a``` e ```b```, com ```b > 0```, existem inteiros ```q``` e ```r``` tais que:

```a = b.q + r```, para ```0 <= r < b```.

Podemos reescrever 

```r = a - b.q```

e assim podemos provar que o ```gcd(a,b)``` = ```gcd(b,r)```.

Isso ocorre porque tanto ```a``` quanto ```b``` podem ser expressos como combinações lineares (múltiplos inteiros) de seus divisores, e ```r``` é simplesmente uma dessas combinações. Assim, a sequência:

```b, r, r',...``` reduz os números gradativamente, mantendo-se o mesmo gcd.

Temos o ponto de partida para mostrar que todos os divisores de ```a``` e ```b``` também dividem ```a-b```. Logo, não estamos perdendo o maior divisor comum ao fazermos isso. Assim sendo, podemos calcular o máximo divisor comum (gcd) entre ```a``` e ```b``` (```gcd(a,b)```) como sendo igual ao gcd entre ```a-b``` e ```b```?

Por exemplo, se ```a=84``` e ```b=16```, sabemos no exemplo acima que o ```gcd(84,16) = 4```. Como ficaria o GCD entre ```84-16=68``` e ```16```?

```
68 = 2 x 2 x 17
16 = 2 x 2 x 2 x 2
```

Podemos verificar que o GCD entre 68 e 16 também é ```4```. E agora, se subtrairmos ```b``` duas vezes de ```a```, obtendo-se ```x=a-2b``` o gcd entre ```x``` e ```b``` se altera? Bom, ```x = a - 2b = 84 - 32 = 52```, então:

```
52 = 2 x 2 x 13
16 = 2 x 2 x 2 x 2
```

O GCD entre 52 e 16 também é ```4```. Por fim, vamos subtrair ```b``` três vezes de ```a```, obtendo-se ```x=a-3b```. Agora, o gcd entre ```x``` e ```b``` será 4? Fazendo-se ```x = a - 3b = 84 - 48 = 36```, então:

```
36 = 2 x 2 x 9
16 = 2 x 2 x 2 x 2
```

E também o GCD entre ```a-3b``` e ```b``` também é 4! Podemos então formular que:

```
gcd(a,b) = gcd(a-b,b) = gcd(a-2b,b) = gcd(a-3b,b) = ... = gcd(a-yb,b)
```

em que ```y``` é a quantidade de vezes que podemos subtrair ```b``` de ```a``` mantendo-se a igualdade acima. Isso mostra que não perdemos o maior divisor comum ao fazermos essas subtrações. Entretanto, chega um momento em que ```a-yb``` fica menor do que ```b```. Por exemplo, para ```y=5```, teríamos ```a-yb = 84 - 5 x 16 = 84 - 80```.

A pergunta que fica é: quantas vezes podemos subtrair ```b``` de ```a```, ou ainda, qual é o valor de  ```y```?

Resposta:

```y = a / b```

em que ```/``` é a divisão inteira. Logo, temos que:

```
y = 84/16 = 5
```

Isso significa que:

```
gcd(84,16) = gcd(84-5*16,16) = gcd(4,16)
```

Repare que fizemos todas as substrações de uma única só vez com a estrátegia explicada acima. A fórmula anterior pode ser reescrita de forma simplificada como:

```
gcd(a-y*b,b) = gcd(a % b, b) = gcd(84%16,16) = gcd(4,16)
```

em que % é a operação de resto de divisão. Entretanto, como a % b < b, visando garantir que ```a > b```,  quando ```a <= b``` podemos utilizar a propriedade vista anteriormente para continuar a repetição do processo:

```
gcd(a,b) = gcd(b,a)
```

assim, a relação completa que podemos elaborar é a seguinte:

```
gcd(a,b) = gcd(a-y*b,b) = gcd(a % b, b) = gcd(b,a % b)
```

Por exemplo:

```
gcd(84,16) = gcd(84-5*16,16) = gcd(4,16) = gcd(84 % 16, 16) = gcd(16, 84 % 16)
```

O processo completo de determinaro ```gcd(a,b) = gcd(b,a%b)``` precisa ter um fim. Chega um momento em que ```b=0```, então utilizamos a definição 

```
gcd(a,0) = a
```

Para parar a repetição das subtrações. Por fim, podemos formular a resolução do problema do máximo divisor comum como:

```
gcd(a,b) = a,  se b=0
gcd(a,b) = gcd(b, a % b)
```

## Código-fonte

```
#include<stdio.h>

int gcd(int a, int b){
    if(b == 0){
        return a;
    }
    //int l = a/b; //pega a div int entre a e b
    // gcd(a,b) = gcd(a-l*b,b) = gcd(a%b,b)
    //a%b > b, gcd (a%b,b) = gcd(b,a%b)

    return gcd(b,a%b);
}
```

```

int main(){
    int a,b,mdc;

    scanf("%d %d",&a,&b);

    mdc = gcd(a,b);

    printf("MDC(%d,%d) = %d\n",a,b,mdc);

    return 0;
}
```

## Extra: Mínimo Múltiplo Comum (Least Common Multiple - LCM)

O mínimo múltiplo comum (MMC) de dois ou mais números é o menor número inteiro positivo que é múltiplo de todos eles.

Por exemplo, o LCM entre 2 e 3 é 6. Pois:

- Múltiplos de 2: 2, 4, **6**, 8, 10, **12**, 14, 16, **18**, ...
  
- Múltiplos de 3: 3, **6**, 9, **12**, 15, **18**, 21, 24, 27, ...

Observe que **6**, **12** e **18** são múltiplos em comum entre 2 e 3, mas o menor múltiplo comum possível é o **6**.

O LCM pode ser calculado a partir do GCD:

```
int lcm(int a, int b){
    return (a*b)/gcd(a,b);
}
```

pois ```a*b``` é um valor que garantidamente representa um múltiplo entre ```a``` e ```b```.

Por exemplo, para ```a=24``` e ```b=18```, o ```gcd(24,18)``` é ```6```, pois a fatoração em números primos de ```24``` e ```18``` resulta em:

```24 = 2 x 2 x 2 x 3``` e ```18 = 2 x 3 x 3```

A maior subsequência de fatores é ```2 x 3``` cujo produto é igual a ```6```. Logo, o ```gcd(24,18) = 6```. Assim, temos:

```LCM(24,18) = (a * b) / gcd (a*b) = (24 * 18) / 6 = 432 / 6 = 72```.

Logo, o produto ```a*b``` contém todos os fatores elevados com a soma dos expoentes para cada número. A divisão pelo GCD reduzi cada expoente somado de volta para o máximo dos dois em cada fator.
