# Resolução Beecrowd 3050 - Distância entre Amigos

## Enunciado

Clique [aqui](https://judge.beecrowd.com/pt/problems/view/3050)

## Ideia

A distância entre dois apartamentos \(A\) e \(B\) é definida como:

\[ a + p + b \]

onde:

- \(a\) é o número de andares que \(A\) desce até o térreo.
- \(p\) é o número de prédios entre \(A\) e \(B\).
- \(b\) é o número de andares que \(B\) sobe até o apartamento.

Para dois prédios nas posições \(i\) e \(j\), a distância (D) pode ser definida como:

\[\text{D} = A[i] + p + B[j] \]

Veja que \(p = j - i\) e se refere à distância horizontal entre os prédios \(i\) e \(j\).
