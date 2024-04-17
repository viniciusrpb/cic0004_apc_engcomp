# 4.3. Estrutura Switch-Case

A estrutura condicional do tipo switch-case permite tratar selecionar um bloco de comando específico a ser executado com base no valor de uma variável.

A estrutura geral switch-case é mostrada a seguir:

```
switch(VARIAVEL) {
    case CONSTANTE_1:
        /*comandos a serem executados caso VARIAVEL seja igual a CONSTANTE_1*/
        break;
    case CONSTANTE_2:
        /*comandos a serem executados caso VARIAVEL seja igual a CONSTANTE_2*/
        break;
    default:
        /*comandos a serem executados caso VARIAVEL não seja igual a CONSTANTE_1, nem CONSTANTE_2*/
        break;
}
```

em que ```CONSTANTE_1``` e ```CONSTANTE_2``` são constantes associadas ao tipo de dados da variável ```VARIAVEL```.

O comando ```break``` é empregado para sair da estrutura switch-case após um bloco de código ter sido executado. Sem o ```break```, o programa executaria os demais blocos de comando. Já o bloco ```default``` é opcional e é executado se nenhum dos valores dos case corresponder ao valor da variável ```VARIAVEL```.

Um exemplo de como utilizar a estrutura switch-case é apresentado a seguir. No caso 

```
#include <stdio.h>

int main() {
    int a,b,ans;
    char op;

    printf("Digite uma expressao aritmetica na forma a op b\n");
    printf("a e b devem ser inteiros, op pode ser +, -, *, /\n");
    printf("Digite a expressao: ");
    scanf("%d %c %d",&a,&op,&b);

    switch(op) {
        case '+':
            ans = a + b;
            break;
        case '-':
            ans = a - b;
            break;
        case '*':
            ans = a * b;
            break;
        case '/':
            if(b != 0){
                ans = a / b;
            }else{
                printf("ERRO: b deve ser diferente de zero\n");
            }
            break;
        default:
            ans = -1;
            break;
    }

    printf("%d\n", ans);
    return 0;
}
```
