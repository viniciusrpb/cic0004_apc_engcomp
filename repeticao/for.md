# Laço For

## Definição

É uma estrutura de repetição do tipo **contada** que executa um bloco de código-fonte múltiplas vezes, geralmente com um contador controlando o número de repetições. A sintaxe básica do ```for``` é:

```
for (inicialização; condição de permanência no laço; evolução) {
    // Bloco de código-fonte a ser repetido
}
```

As principais parte do ```for``` são:

- Inicialização: colocar um valor inicial para a variável responsável pela contagem (variável contadora) necessários para controlar a quantidade de iterações ou passos a serem executados pelo laço. Vale ressaltar que a inicialização é executada apenas uma vez, no início do laço;
- Condição de permanência no laço: trata-se de uma comparação como ocorre na estrutura if-else que verifica se a repetição deve continuar. Enquanto a condição for verdadeira, o laço continuará executando.
- Evolução: atualização da variável de controle a cada iteração após a finalização da execução de todo o bloco do código-fonte no escopo do laço for.

## Exemplos

### Encontrar o menor dentre N elementos lidos da entrada

```
int i,n,a,menor;

scanf("%d",&n);

scanf("%d",&menor);

for(i = 0; i < n; i++){
    scanf("%d",&a);
    if(a < menor){
        menor = a;
    }
}
```

### Encontrar o maior dentre N elementos lidos da entrada

```
int maior,i,n,a;

scanf("%d",&n);

scanf("%d",&maior);

for(i = 0; i < n; i++){
    scanf("%d",&a);
    if(a < maior){
        maior = a;
    }
}
```

### Somar N elementos lidos da entrada

```
long long soma;
int i,n,a;

scanf("%d",&n);

soma = 0;

for(i = 0; i < n; i++){
    scanf("%d",&a);
    soma = soma + a;
}
```




