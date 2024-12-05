# Resolução Beecrowd 2462

Para resolver o problema, é necessário calcular dois valores para os voos entre as cidades A e B: a duração real do voo (em minutos) e a diferença entre os fusos horários das cidades A e B (em horas). Seguem os passos para a resolução:

1. Interpretar os horários fornecidos
A entrada tem 4 valores:

pA: Horário de partida de A para B (hora local de A).
cB: Horário de chegada de A para B (hora local de B).
pB: Horário de partida de B para A (hora local de B).
cA: Horário de chegada de B para A (hora local de A).
Os horários estão no formato hh:mm e representam o ciclo de 24 horas.

2. Converter os horários em minutos absolutos
Converta os horários no formato hh:mm para minutos desde o início do dia para facilitar os cálculos:

Fórmula: total_minutos = hh * 60 + mm.
3. Calcular a duração real do voo
A duração do voo é a média das durações calculadas para os dois voos:

Duração A → B: (cB_local - pA_local) ± fuso_B_A
Duração B → A: (cA_local - pB_local) ± fuso_A_B
Como os voos são simétricos (ida e volta têm a mesma duração), basta calcular a duração usando a diferença entre os horários considerando os fusos.

4. Determinar a diferença de fusos horários
A diferença de fusos horários entre B e A pode ser determinada diretamente comparando os deslocamentos temporais observados nos voos:
Para o voo A → B: (cB - pA) - duração real.
Para o voo B → A: (cA - pB) - duração real.
A diferença de fusos horários será consistente entre esses cálculos e precisa ser normalizada para o intervalo de -12 a 12 horas.

5. Imprimir a saída
A saída consiste em dois valores:

Duração do voo em minutos (valor médio calculado).
Diferença de fusos horários em horas (B - A).
Observações:
Leve em consideração os casos em que o horário de chegada pode estar no dia seguinte. Para isso, use aritmética modular (% 1440) para ajustar os cálculos.
Se a diferença entre horários for negativa, significa que o tempo ultrapassou a meia-noite. Ajuste somando 1440 minutos (24 horas).
