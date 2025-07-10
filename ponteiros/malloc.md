# 12.4. Alocação Dinâmica de Memória

## Alocação Estática de Memória

Até o momento, estudamos na Linguagem C a **alocação estática de memória**, que ocorre comumente nos vetores, strings e matrizes. Nessa abordagem, o tamanho e o tempo de vida da memória são determinados em tempo de compilação. Isso significa que:

- A memória é reservada antes da execução do programa. Por exemplo, a declaração do vetor de inteiros abaixo:

```
int arr[50];
```

significa que **50 * 4 bytes = 200 bytes** serão alocados no processo de compilação do código-fonte, sendo este espaço imutável.

- O tempo de vida da variável é fixo, durante toda a execução do programa.
  
- A alocação da memória é feita na *stack* (pilha) ou *data segment* (em variáveis globais - opssss, não vimos isso!!).

### Vantagens

- É simples de usar no código-fonte.
- Menor chance de vazamento de memória, já que a liberação é automática.

### Desvantagens

- O tamanho do vetor é fixo e deve ser conhecido antes de compilar.
- Desperdício de memória se o array for maior do que o necessário.
- Falta de flexibilidade para crescer ou encolher estruturas durante a execução.

## Alocação Dinâmica de Memória

Suponha que você queira ler *n* números da entrada padrão, em que o valor de *n* não é conhecido em tempo de compilação. É a típica situação:

```
int n;
scanf("%d", &n);
```

Não é recomendável fazer:

```
int n;
scanf("%d", &n);
int v[n];
```

Observação: tal operação só é permitida no padrão C99+ e com limitações. Você saberia me responder qual é a capacidade máxima do vetor ```v```, já que seu tamanho é determinado em tempo de compilação?

A solução é utilizar alocação dinâmica de memória, via função ```malloc```.

## Função malloc

```
int *v = (int *) malloc(sizeof(int)*n);
```
