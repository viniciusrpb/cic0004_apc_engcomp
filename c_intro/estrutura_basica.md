# 2.1. Estrutura Básica

## O começo

A criação de um programa em linguagem C começa pela seguinte estrutura básica. Abra um arquivo em texto e cole o seguinte código-fonte.

```
int main(){

    return 0;
}
```

Agora vamos entender o que cada parte faz:

```int main() { ... }```: Trata-se da função principal do programa, que é o ponto de partida do programa. Todo programa em linguagem C deve ter uma função main(). A palavra ```int``` antes do nome ```main()``` indica que esta função retornará um valor inteiro para onde foi chamada - isto é, no Terminal do Linux ou outro Sistema Operacional equivalente.

Tudo que está dentro das chaves (abre e fecha chaves) ```{ ... }``` são os comandos, expressões e instruções da função principal. Estas chaves são marca registrada da Linguagem C e delimitam o escopo de comandos mais complexos (estruturas condicionais, de repetição, de funções e estruturas), sendo no caso o escopo da função ```main()```.

Isso é um indício dos assuntos que vem pela frente. Um programa em linguagem C pode fazer uso de outras funções, como as matemáticas ou de entrada e saída, como também funções criadas pelo próprio desenvolvedor (você no caso) para organizar o código-fonte e melhorar a abstração.

```return 0;```: uma vez que a função ```main()``` está "configurada" para retornar um valor inteiro, esse comando faz com que o valor ```0``` sempre seja retornado pela função ```main``` para o local onde foi chamad - isto é no Terminal do Linux. O valor inteiro que aparece ao lado do comando ```return``` está relacionada a um comportamento que o programa pode ter . No caso, o valor zero indica que o programa terminou com sucesso. Qualquer outro valor diferente de zero indica algum tipo de erro ou condição de saída anormal.

