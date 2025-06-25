# Beecrowd 3217 - Chuva Caindo

## Enunciado

Clique [aqui](https://www.beecrowd.com.br/repository/UOJ_3217.html).

## Entendendo o problema

O contexto do problema baseia-se em uma situação em que se deseja calcular a quantidade total de chuva que caiu, dada uma medição em um tubo com vazamento.

Supondo que começa uma chuva, que cai a uma taxa constante (não mencionada no texto), mas o tubo tem um vazamento a partir de certa altura **L**. Sempre que o nível da água ultrapassa essa altura, a água começa a vazar a uma taxa constante **K** mm/h.
Após a chuva parar, mede-se a altura da água no tubo. O objetivo é determinar a quantidade total de chuva, levando em conta:

- a duração da chuva **T1**;
- o instante de tempo **T2** em que ocorre a observação do nível da água (horas);
- o nível de água **H** no tubo quando o observamos (mm);
- a altura do vazamento **L** (mm);
- a taxa de vazamento de água **K**  (mm/h);

Determine **F1** e **F2**, que são, respectivamente, a menor e a maior precipitações, em milímetros, que resultaria nas observações dadas. Deve-se assumir que o tubo não transborda nem perde água por evaporação.

## Raciocínio

Vamos analisar os casos possíveis.

Se ```H < L```, significa que choveu exatamente **H** milímetros. Caso contrário... queremos saber a quantidade de chuva que caiu durante o período T1, certo? Assim, podemos dizer que:

```F = x * T1```

em que **F** é a quantidade de chuva que caiu (quase a resposta para o problema) em milímetros, **T1** é a duração em horas da chuva (fornecido no enunciado) e **x** é a vazão da chuva (mm/horas) na região do tubo.

**Preste atenção na variável x**: ela não foi definida no enunciado, mas a criamos para fornecer um elo nas duas partes de resolução do problema.

**PARTE 1)** Uma informação importante que temos é o nível da água (em milímetros) no tubo após a observação, isto é, após **T2** horas. Esse nível é dado pela variável **H**. A partir de H, podemos determinar o nível da água no tubo logo após a chuva (após **T1** horas).

Bom, veja que a quantidade de água que vazou do tubo pelo furo no período de **T2** horas é dada por:

```K*T2```         (observe que esse valor é em milímetros)

Logo, o nível da água ```H'``` logo após a chuva pode ser descrita como:

(1) ```H' = H + K*T2```          (ou seja, o nível de água que restou no tubo somado à quantidade de água que vazou)

**PARTE 2)** Podemos também determinar ```H'``` de outra forma: do início da chuva até **T1** horas. Nesse caso, sabemos que obrigatoriamente o tubo irá encher **L** milímetros. A pergunta que fica agora: qual é a quantidade de água (em milímetros) que entrou e saiu do tubo após o nível da água aumentar no interior do tubo em relação à **L**? Essas entradas e saídas de água devem ser contabilizadas, pois é chuva que caiu!

O tempo gasto para encher **L** milímetros do tubo (sem alcançar o furo) é dado por:

```T0 = L/x```              (esse valor resultante **T0** é em horas!)

Temos que saber agora o nível de água no tubo que foi ganho entre **T0** e **T1**. A partir de agora, começa a sair água pelo furo, mas a chuva continua caindo. Nesse caso, a diferença entre essas vazões é dada por:

```D = x - K```

o nível de água ganho após a água ultrapassar a marca do furo **L** é então:

```D*(T1 - T0)```

Por fim, o nível de água **H'** no tubo logo após a chuva pode também ser calculado como:

(2) ```H' = L + D*(T1 - T0)```         (observe aqui a soma dos níveis até o furo e acima do furo!)

Olha a situação agora: podemos igualar os dois H's para determinar o valor de **x**:

```H' (1) = H' (2)```

```H + K*T2 = L + D*(T1 - T0)```

ao desenvolver a fórmula acima, você chegará em uma equação de segundo grau, em que **x** é a variável incógnita. Determine **x** ao resolver a equação de segundo grau obtida para chegar às respostas **F1** e **F2** do problema.

