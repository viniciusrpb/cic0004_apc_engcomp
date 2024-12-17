# Resolução Beecrowd 2462 - Voo

## O que o problema pede?

São descritas duas viagens (ida e volta) entre duas cidades A e B. Para a viagem de ida, fornece-se o horário hpA:mpA de partida da cidade A e o horário de chegada na cidade B hcB:mcB. Já na viagem de volta, o voo sai às hpB:mbB e chega à cidade A às hcA:mcA. O voo pode passar por diferentes fusos horários.

Você deve construir um algoritmo que determine o menor tempo possível de viagem entre as cidades A e B, como também a diferença de fuso horário entre essas cidades. 

## Raciocínio

Há duas situações para se considerar em cada viagem:

1) O horário de chegada é maior (em valor) do que o horário de partida. Por exemplo:

O voo sai da cidade A às 13:30 e chega na cidade B às 22:30

2) O horário de chegada é menor (em valor) do que o horário de chegada. Por exemplo:

O voo sai da cidade A às 22:15 e chega na cidade B às 03:30 

## Analisando Exemplos

Seja o voo de ida saindo da cidade A às 13:30 e chegando na cidade B às 22:30. Já o voo de volta saindo às 08:15 e chegando 15:15.

Pode-se verificar que a viagem de ida dura **09 horas e 00 minutos**. Já a viagem de volta dura **07 horas e 00 minutos**.

Por isso, o tempo médio de viagem é (9+7)/2 = 08 horas.

A entrada pode ser lida da seguinte forma:

```
scanf("%d:%d %d:%d %d:%d %d:%d",&hpA,&mpA,&hcB,&mcB,&hpB,&mpB,&hcA,&mcA);
```

em que 

- hpA: variável inteira das horas de saída da cidade A;
- mpA: variável ,&hcB,&mcB,&hpB,&mpB,&hcA,&mcA

##
