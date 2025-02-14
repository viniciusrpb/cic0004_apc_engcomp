/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Autor: Vinicius R. P. Borges

Tópico: Strings e Estruturas
Objetivo: Solução do problema beecrowd 1911 - Help Girafales
          https://judge.beecrowd.com/pt/problems/view/1911

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_1911.c -o help
./help
*/

#include<stdio.h>
#include<string.h>

// define a estrutura do aluno
struct aluno{
    char nome[21];
    char assinatura[21];
};

// define o tipo "Aluno" como sendo igual a "struct aluno"
typedef struct aluno Aluno;

// funcao que verifica quantos caracteres sao distintos em duas assinaturas (duas strings) 
int verificaAssinatura(char original[21], char aula[21]){
    int i,diff,n,m;
    
    diff=0;
    
    n = strlen(original);
    m = strlen(aula);

    if(n < m){
        for(i = 0; i < n; i++){
            if(original[i] != aula[i]){
                diff++;
            }
        }
    }else{
        for(i = 0; i < m; i++){
            if(original[i] != aula[i]){
                diff++;
            }
        }
    }
    return diff;
}

int main(){

    Aluno lista[50];
    char nome_aula[21],assinado_aula[21];
    int i,j,n,m,ans,diff;
    
    scanf("%d",&n);
    while(n!=0){
        
        // Pega o nome do aluno e sua assinatura original
        for(i = 0; i < n; i++){
            getchar();
            scanf("%s %s",lista[i].nome,lista[i].assinatura);        
        }
        
        scanf("%d",&m);
        
        ans = 0;

        // Le m nomes da lista de presenca
        for(i = 0; i < m; i++){
            // retira o caractere '\n' do buffer
            getchar();

            // Leitura do nome do aluno e o nome assinado na aula
            scanf("%s %s",nome_aula,assinado_aula);

            // (1) procura na lista de presenca pelo nome do aluno na aula
            for(j = 0; j < n; j++){
                      
                // se o j-esimo aluno da lista e o nome do aluno na aula sendo consultado...
                if(strcmp(nome_aula,lista[j].nome) == 0){
                    
                    // vamos verificar se a assinatura difere no maximo em um caractere na lista oficial
                    diff = verificaAssinatura(lista[j].assinatura, assinado_aula);
                          
                    // se sim, assinatura eh falsa, contabilize na variavel "ans"
                    if(diff > 1){
                        ans++;
                    }
                }
            }
        }
        printf("%d\n",ans);
        
        scanf("%d",&n);
    }
    
    return 0;
}
