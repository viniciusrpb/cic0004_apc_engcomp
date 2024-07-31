# 12. Estruturas Heterogêneas (Registros)

<img src="images/estruturas.png" width="80%" height="80%">

Um registro (ou estrutura, ou *struct*) é um conjunto de variáveis agrupadas sob um único nome, permitindo o armazenamento de diferentes tipos de dados em uma única amostra (objeto, instância, ou entidade). Um registro facilita a organização e a manipulação de dados complexos, proporcionando uma maneira eficiente de agrupar dados relacionados.

```
Definição de struct
A definição de uma struct em C é feita usando a palavra-chave struct, seguida pelo nome da estrutura e pelo conjunto de variáveis que a compõem entre chaves {}. Aqui está um exemplo básico:

c
Copy code
struct Ponto {
    int x;
    int y;
};
Neste exemplo, a struct chamada Ponto agrupa dois inteiros, x e y, que representam as coordenadas de um ponto em um plano bidimensional.

Objetivos das structs
Os principais objetivos das structs na linguagem C são:

Organização de Dados Relacionados: structs permitem agrupar variáveis relacionadas sob um mesmo nome, facilitando a gestão e a compreensão dos dados.

Abstração: Elas ajudam a criar abstrações mais próximas dos conceitos do mundo real, permitindo uma modelagem de dados mais intuitiva.

Facilidade de Manipulação: Com structs, é possível manipular um conjunto de variáveis como uma única unidade, o que simplifica a passagem de múltiplos dados para funções e o retorno de dados complexos.

Modularidade: A utilização de structs promove a modularidade do código, permitindo uma separação clara entre diferentes partes de um programa.

Leitura e Manutenção do Código: Programas que usam structs tendem a ser mais fáceis de ler e manter, uma vez que os dados relacionados são agrupados de maneira lógica.
```

```
#include<stdio.h>
#include<string.h>

struct atleta{
    int velocidade;
    double altura_pulo;
    char nome[51];
};

typedef struct atleta Atleta;

void imprimeJogadores(Atleta jogs[30], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("\nDados do Jogador %d\n",i+1);
        printf("Nome: %s\n",jogs[i].nome);
        printf("Velocidade: %d\n",jogs[i].velocidade);
        printf("Altura do pulo: %.2lf\n",jogs[i].altura_pulo);
    }
}

int main(){
    int i,n;
    Atleta elenco[30];

    scanf("%d",&n);

    for(i = 0; i < n; i++){
        scanf("%d",&elenco[i].velocidade);
        printf("Endereco veloc: %p\n",&elenco[i].velocidade);
        scanf("%lf",&elenco[i].altura_pulo);
        printf("Endereco pulo: %p\n",&elenco[i].altura_pulo);
        getchar();
        scanf("%s",elenco[i].nome);
        printf("Endereco nome: %p\n",elenco[i].nome);
    }

    imprimeJogadores(elenco,n);

    return 0;
}

/*ll num;

    /*scanf("%d",&jogador.velocidade);
    scanf("%lf",&jogador.altura_pulo);
    getchar();
    scanf("%s",jogador.nome);*/
```
