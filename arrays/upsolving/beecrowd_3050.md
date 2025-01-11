# Resolução Beecrowd 3050 - Distância entre Amigos

## Enunciado

Clique [aqui](https://judge.beecrowd.com/pt/problems/view/3050)

## Ideia

Seja o vetor ```P``` contendo a quantidade de andares de todos os prédios descritos na entrada do problema.

Não sabemos em quais prédios e quais andares (apartamentos) os dois amigos A e B estão. Para maximizar a distância entre eles, o correto é assumir que eles estarão nos últimos andares de cada prédio.

Sabe-se que a distância entre dois prédios ```i``` e ```j``` é definida como:

```P[i] + (j-i) + P[j]```

Veja que \(j - i\) e se refere à distância horizontal entre os prédios \(i\) e \(j\).

1- Assuma que a distância máxima entre dois colegas A e B - resposta para o problema - seja ```max_dist```. Como condição inicial, determinamos inicialmente que esses amigos possam estar nos prédios de índice ```i = 0``` e ```j = 1```.
- Fazemos então ```max_dist = P[0] + P[1] + 1```. Assim, no primeiro exemplo de teste, se ```P[0] = 2``` e ```P[1] = 3```, então ```max_dist = 2 + 3 + 1 = 6```.

2- 
