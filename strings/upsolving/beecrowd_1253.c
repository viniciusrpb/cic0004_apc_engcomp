/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Dr. Vinicius R. P. Borges

Tópico: Strings
Objetivo: Solução do problema beecrowd 1253 - Caesar Cipher
          https://judge.beecrowd.com/pt/problems/view/1253

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_1253.c -o cesar
./cesar
*/

#include<stdio.h>
#include<string.h>

// a funcao recebe as strings com a mensagem codificada e a mensagem original
// o vetor "original" sera preenchido normalmente e sua alteracao persiste
// no decorrer do programa. Eh a "famosa" passagem por referencia

void solve(char codificada[51], char original[51], int shift){
    int i,n;
    n = strlen(codificada);

    for(i = 0; i < n; i++){
        // se o deslocamento resultar em um caractere que nao eh uma letra valida, isto eh,
        // se ele sair do intervalo abc...xwyz
        if(codificada[i]-shift < 65){
            // volta o caractere para o final desse alfabeto 
            original[i] = codificada[i]-shift+26;
        } else {
            original[i] = codificada[i]-shift;
        }
    }
    
    // coloca o '\0' "na mao" apos o ultimo caractere da sentenca
    // para indicar que esse vetor de char eh uma string
    original[i] = '\0';
}

int main(){
    char str_codificada[51],str_original[51]; //max 50 caracteres + '\0'
    int shift,n;

    scanf("%d",&n);

    while(n > 0){
        scanf("%s",str_codificada);
        scanf("%d",&shift);
        getchar(); // tchau '\n'

        solve(str_codificada,str_original,shift);
        
        printf("%s\n",str_original);
        n--;
    }

    return 0;
}




