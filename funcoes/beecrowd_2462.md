# Resolução Beecrowd 2462 - Voo

## O que o problema pede?

São descritas duas viagens (ida e volta) entre duas cidades A e B. Para a viagem de ida, fornece-se o horário ```hpA:mpA``` de partida da cidade A e o horário de chegada na cidade B ```hcB:mcB```. Já na viagem de volta, o voo sai às ```hpB:mpB``` e chega à cidade A às ```hcA:mcA```. O voo pode passar por diferentes fusos horários no globo terrestre.

Você deve construir um algoritmo que determine o menor tempo possível de viagem entre as cidades A e B, como também a diferença de fuso horário entre essas cidades. O tempo de viagem deve ser expresso em minutos, enquanto que o fuso horário deve ser expresso em horas.

## Analisando Exemplos

*Observação: os exemplos descritos abaixo são diferentes dos exemplos apresentados no problema.*

**Exemplo 1:** Seja o voo de ida saindo da cidade A às 13:30 e chegando à cidade B às 22:30. Já o voo de volta saindo da cidade B às 08:15 e chegando na cidade A às 15:15.

Pode-se verificar que a viagem de ida dura **09 horas e 00 minutos**. Já a viagem de volta dura **07 horas e 00 minutos**.

Por isso, o tempo médio de viagem é (9+7)/2 = 08 horas. Se o tempo médio de voo é 08 horas e a viagem de ida dura 09 horas, então temos um fuso horário de 01 hora.


**Exemplo 2:** Seja o voo de ida saindo da cidade A às 22:00 e chegando à cidade B às 02:00. Já o voo de volta saindo da cidade B às 06:30 e chegando 14:30.

O tempo do voo de ida é calculado como 02:00 - 22:00 = 2 - 22 = -20 horas. Opa, não se pode ter um tempo de viagem negativo. Fazemos então: 24 + (-20) = 04 horas. Faz mais sentido, certo?

O tempo do voo de volta é calculado como 14:30 - 06:30 = 14 - 06 = 08 horas, e que 30 minutos - 30 minutos é igual a zero. Total de viagem é 08 horas.

Por isso, o tempo médio de viagem é (4+8)/2 = 06 horas. Se o tempo médio de voo é 06 horas, a viagem de ida dura 04 horas, então temos um fuso horário de 02 horas.


**Exemplo 3:** Seja o voo de ida saindo da cidade A às 10:00 e chegando à cidade B às 02:00. Já o voo de volta saindo da cidade B às 03:00 e chegando às 23:00 horas na cidade A.

O tempo do voo de ida é calculado como 02:00 - 10:00 = 2 - 10 = -08 horas. Como não se pode ter um tempo de viagem negativo, fazemos então: 24 + (-08) = 16 horas.

O tempo do voo de volta é calculado como 23:00 - 03:00 = 23 - 03 = 20 horas.

Por isso, o tempo médio de viagem é (16+20)/2 = 18 horas. Agora temos uma situação interessante. Podemos fazer uma viagem de 18 horas ou de 06 horas, considerando que o tempo máximo de viagem é 24 horas. Vamos sempre optar pelo menor tempo possível de viagem. Logo, podemos fazer:

18 horas - 12 horas = 06 horas

É como se voássemos no sentido contrário, isto é, se a referência da viagem é no sentido anti-horário, seria como se a viagem fosse feita no sentido horário.

O fuso horário é então calculado como o horário de partida da cidade A subtraído do tempo médio do voo: 02 horas - 06 horas = - 04 horas.

## Raciocínio

Nos exemplos anteriores, trabalhamos apenas com as horas e os minutos separadamente, mas é bem mais interessantes padronizarmos todos os horários para minutos. Por exemplo, para um voo que sai às 22:15 da cidade A e chega às 07:45 à cidade B, podemos fazer as contas:

```22:15 => 16 × 60 + 15 = 975```

```07:45 => 7 × 60 + 45 = 465```

Agora existem duas situações para se considerar em cada viagem:

1) O horário de chegada é maior (em valor) do que o horário de partida. Por exemplo:

O voo sai da cidade A às 13:30 e chega à cidade B às 22:30

2) O horário de chegada é menor (em valor) do que o horário de chegada. Por exemplo:

O voo sai da cidade A às 22:15 e chega à cidade B às 03:30

Além disso, temos que garantir que o tempo médio de viagem seja o menor possível. Apesar de sempre pensarmos que a viagem é feita no sentido anti-horário (de rotação da Terra), podemos pegar um caminho mais curto no sentido horário. Além disso, temos que garantir que os fusos horários fiquem no intervalo fechado [-12,12], como mostra o mapa [aqui](https://guiadoestudante.abril.com.br/curso-enem/fusos-horarios-como-os-paises-acertam-os-seus-relogios) - se você é terraplanista, lamento.

Depois de converter todos os horários para minutos, temos ```pA```, ```cB```, ```pB``` e ```cA``` como sendo os valores em minutos associados aos horários de partida da cidade A, de chegada à cidade B, de partida da cidade B e de chegada à cidade A, respectivamente.

A viagem de ida é então calculada como:

```ida = cB - pA```

Caso o valor de ida seja negativo, faça depois ```ida = 1440 + ida```

Já a viagem de volta é calculada como:

```volta = cA - pB```

Caso o valor de volta seja negativo, faça depois ```volta = 1440 + volta```

**Tempo de viagem**

É calculado como a média simples entre os valores de ida e volta. Caso o valor seja maior do que 12 horas, é melhor pegar o caminho sentido contrário para se pegar o menor caminho. Logo>

```
tempo de viagem = (ida+volta)/2
```

e se tempo de viagem >= 720 (720 é a quantidade de minutos para representar 12 horas), então:

```
tempo de viagem = 720 - tempo de viagem
```

**Fuso horário**

Para calcular o fuso horário, basta pegar o valor inteiro da viagem de ida e subtrair do tempo de viagem. Divida esse valor por 60 para pegar o fuso horário em horas.

```
fuso = (ida - tempo de viagem)/60
```

Para garantir que o fuso horário fique no intervalo fechado [-12,12], se fuso > 12, faça então:

```
fuso = fuso - 24
```

Suponha que o fuso originalmente calculado seja 18 horas. Com a operação de verificação acima, o fuso horário no intervalo correto será ```-6``` horas.

## Solução em Linguagem C - Código-fonte

```
#include<stdio.h>

int converteMinutos(int horas, int minutos){
    return horas*60 + minutos;
}

int main(){
    
    int hpA,mpA,hpB,mpB,hcA,mcA,hcB,mcB,cA,pA,cB,pB,fuso,ida,volta,tempo_final,virou;

    scanf("%d:%d %d:%d %d:%d %d:%d",&hpA,&mpA,&hcB,&mcB,&hpB,&mpB,&hcA,&mcA);
    
    pA = converteMinutos(hpA,mpA);
    cB = converteMinutos(hcB,mcB);
    
    pB = converteMinutos(hpB,mpB);
    cA = converteMinutos(hcA,mcA);
    
    ida = cB - pA;
    
    if(ida < 0){
        ida=1440+ida;
    }
    
    volta = cA - pB;
    
    if(volta < 0){
        volta=1440+volta;
    }
    
    tempo_final = (ida+volta)/2;
    
    if(tempo_final>=720){
        tempo_final = tempo_final - 720;
    }
    
    fuso = (ida-tempo_final)/60;
    if(fuso > 12){
        fuso = fuso - 24;
    }
    
    printf("%d %d\n", tempo_final, fuso);
    
    return 0;
}
```
