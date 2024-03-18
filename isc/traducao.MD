# O Processo de Tradução

Suponha que você desenvolveu um algoritmo em um código-fonte/script em uma determinada linguagem de programação. Queremos que esse código-fonte seja executado como um programa em computador. Para esse propósito, devemos converter o código-fonte/script para linguagem de máquina, em que essa mesma informação (comandos/instruções/dados) é representada no sistema binário (*bits*). A linguagem de máquina é a representação utilizada para viabilizar a comunicação entre o hardware e o software.

O processo de conversão de um código-fonte/script originalmente escrito em uma linguagem de alto nível para uma linguagem de baixo nível é denominado *tradução*. A figura abaixo ilustra o passo-a-passo desse processo:

![O processo de tradução](imgs/traducao2.png)

A grande etapa de **Tradução** pode ser feita por meio de três abordagens: compilação, interpretaçãoe híbrida. Detalhamos abaixo cada uma das etapas mencionadas:

## Linguagem em Alto Nível

Se tratam dos algoritmos computacionais descritos em alguma linguagem de programação. Compare os dois códigos-fontes escritos nas linguagens Python e C, respectivamente (observe a diferença na sintaxe, estrutura e nome dos comandos):

**Python**
```
a = int(input("Informe o valor do numero a: "))
b = int(input("Informe o valor do numero b: "))

s=a+b
print(f"Soma de a e b eh: {s}")
```

**C**
```
#include<stdio.h>

int main(){
	int a,b,s;
	
	printf("Informe o valor do numero a: \n");
	scanf("%d",&a);
	printf("Informe o valor do numero b: \n");
	scanf("%d",&b);
	
	s=a+b;
	
	printf("Soma de a e b eh: %d\n",s);
	
	return 0;
}
```

## Linguagem de Montagem

Também conhecida como *Assembly*, é uma linguagem de nível intermediária entre a linguagem de alto nível e a linguagem de máquina. O Assembly possui uma sintaxe que é legível por humanos, mas que permite representar textualmente o conjunto de instruções de máquina (ISA) do computador.

O uso de uma linguagem de montagem tem como vantagens a melhora no desempenho do processo de tradução do código-fonte/script em linguagem de alto nível para a linguagem de máquina. Antigamente, nem sempre todos os computadores possuíam compiladores/interpretadores para rodar um programa escrito em determinada linguagem, então a linguagem de montagem, apesar da sintaxe mais complicada, se mostrou uma opção viável.

O exemplo é o resultado da conversão do código-fonte anterior em Assembly:

```
.data
               
.text
 
main:                  
	li $s0, 10
	li $s1, 17
	add $s2,$s1,$s0

	li $v0,1
	la $a0, ($s2)
	syscall

	li $v0, 10
	syscall
```

Um programa denominado **montador** é designado para converter os comandos/instruções Assembly em linguagem de máquina. Tal conversão depende da arquitetura do sistema computacional associado e da especificação do processador, não sendo portanto, única. No exemplo acima, é apresentado o código em linguagem Assembly MIPS (de *Microprocessor without Interlocked Pipeline Stages*), apesar de existirem outros tipos como x86.

PS.: o propósito do MIPS é bem diferente do x86, já que baseiam em diferentes tipos de conjuntos de instruções! O MIPS se baseia em um conjunto reduzido de instruções, enquanto que o Assembly x86 se baseia em arquiteturas com conjuntos complexos de instrulões. Mas isso é conversa para outra disciplina: *Organização e Arquitetura de Computadores*.


## Linguagem de Máquina

Também conhecida como código de máquina, é a linguagem padrão dos computadores. A informação está representada por bits (zero e um), sendo lida, armazenada e processada pela unidade central de processamento (CPU).

```
010101010101010101010000000111100101010111100000000110101010001010101010101010101010101010101010101010001111100101010101010110010011001011001001010100111
000110001010011001010101010101010101000000011110010101011110000000011010101000101010101010101010101010101010101010101000111110010101010101011001001100101
100100101010011100011000101001100101010101010101010100000001111001010101111000000001101010100010101010101010101010101010101010101010100011111001010101010
101100100110010110010010101001110001100010100110010101010101010101010000000111100101010111100000000110101010001010101010101010101010101010101010101010001
111100101010101010110010011001011001001010100111000110001010011001010101010101010101000000011110010101011110000000011010101000101010101010101010101010101
010101010101000111110010101010101011001001100101100100101010011100011000101001100101010101010101010100000001111001010101111000000001101010100010101010101
010101010101010101010101010100011111001010101010101100100110010110010010101001110001100010100110010101010101010101010000000111100101010111100000000110101
010001010101010101010101010101010101010101010001111100101010101010110010011001011001001010100111000110001010011001010101010101010101000000011110010101011
110000000011010101000101010101010101010101010101010101010101000111110010101010101011001001100101100100101010011100011000101001100101010101010101010100000
001111001010101111000000001101010100010101010101010101010101010101010101010100011111001010101010101100100110010110010010101001110001100010100110010101010
101010101010000000111100101010111100000000110101010001010101010101010101010101010101010101010001111100101010101010110010011001011001001010100111000110001
```

Como os computadores processam a informação em linguagem de máquina? Isso depende da arquitetura do computador e do seu conjunto de instruções *(ISA - Instruction Set Architecture)*, que definem os modos de endereçamento de memória, conjunto de registradores, tamanho da palavra de memória, fluxo de controle etc. Esses estudos serão feitos de maneira detalhada em uma outra disciplina, denominada CIC0099 - Organização e Arquitetura de Computadores.


# Compilação

A **compilação** transforma o código-fonte escrito em uma linguagem de programação em alto nível em linguagem de máquina de uma única vez antes do programa ser executado. Como resultado, o processo de compilação gera um arquivo executável (*exe* para Windows e *.bin* para o Linux, por exemplo) que deve ser executado apenas em sistemas computacionais com características similares. O **compilador** apresenta todos os erros no código-fonte após o processo de compilação. Caso sejam encontrados erros de sintaxe, o arquivo executável não é gerado. A execução do arquivo executável é realizada pela unidade central de processamento, por meio do Sistema Operacional.

Exemplos de linguagens compiladas: C, C++, Pascal, Rust

# Interpretação

A **interpretação** é a abordagem que converte cada comando/instrução em um programada desenvolvido em linguagem de alto nível em um respectivo comando/instrução em linguagem de máquina durante a execução do programa.

O programa que interpreta um código-fonte e possibilita sua execução é o **interpretador**. O interpretador é um programa que converte cada comando/instrução do código-fonte/script diretamente em linguagem de máquina. A tarefa do compilador e do interpretador é a mesma: converter o código-fonte em linguagem em alto nível para linguagem de máquina.

- O **interpretador** mostra os erros de cada linha, uma a uma, durante a execução do programa associado ao código-fonte/script passado como entrada.

Exemplos de linguagens interpretadas: Matlab, Javascript, Ruby, Perl, PHP

# Híbridas

A abordagem híbrida compreende o processo de tradução que emprega tanto aspectos de compilação e interpretação para a geração do código em linguagem de máquina a partir do código-fonte. Nesses casos, existe um compilador que verifica erros de sintaxe no código-fonte e, consequentemente, gera um código em linguagem intermediária (*bytecode*). Esse programa em *bytecode* é então executado por meio de uma máquina virtual. Exemplos de linguagens híbridas: Java e Python.

Na linguagem Java, o compilador **javac** gera a representação *bytecode*, que fica salva como arquivos *.class* em disco, que são então executados pela Java Virtual Machine (JVM). A Java Virtual Machine está implementada no software OpenJDK. Por exemplo, seja um código-fonte em linguagem Java denominado *Fonte.java*. Para rodar esse programa, deve-se então digitar os dois comandos a seguir no terminal do Linux:

```
$ javac Fonte.java 
```

que irá gerar o arquivo *bytecode* *Fonte.class*.

```
$ java Fonte
```

faz com que o *bytecode* seja executado pela JVM.

No caso do Python, o processo é similar, apesar de parecer "misterioso". Primeiramente, o **python3** compila o código-fonte que está no arquivo em formato *.py*, resultando na geração de uma representação em *bytecode*. Observe que no caso do Python não ocorre a criação de um arquivo associado ao *bytecode*. Em seguida, a máquina virtual Python3 (Python Virtual Machine) executa o programa a partir da representação *bytecode* seguindo o processo de interpretação. Assim, do ponto de vista do programador, como apenas uma etapa é realizada (o programador apenas efetua o comando ```python3``` para rodar o programa associado a um código-fonte), a linguagem Python é muitas vezes confundida como sendo interpretada.

# Comparativo Interpretação vs Compilação

- Programas compilados rodam mais rápido quando comparados aos programas baseados em linguagem interpretadas, sendo menos dependentes do desempenho do sistema operacional e da qualidade do hardware.

- Não existe a melhor abordagem, isto é, se linguagens interpretadas são melhores do que linguagens compiladas! Depende da aplicação, por exemplo, em um navegador web, em que os sites a serem apresentados pelo navegador variam conforme a navegação do usuário. Nesse caso, o uso de uma linguagem interpretada é mais apropriado.  
