#include<stdio.h>
#define MAX_NOME 50

struct pais{
    char nome[MAX_NOME+1]; // tem o char esp \0
    int medalha[3];
};

typedef struct pais Paihs;

int comparar_string(char str1[MAX_NOME+1], char str2[MAX_NOME+1]){

    int i;

    for(i = 0; str1[i]!='\0' && str2[i]!='\0'; i++){
        if(str1[i] != str2[i]){
            if(str1[i] > str2[i]){
                return 1;
            }else{
                return -1;
            }
        }
    }

    if(str1[i] == '\0' && str2[i] == '\0'){
        return 0; // strings iguais
    }else{
        if(str2[i] == '\0'){
            return 1; // str1 > str2
        }else{
            return -1; // str1 < str2
        }
    }
}

void copiar_string(char destino[MAX_NOME+1], char fonte[MAX_NOME+1]){
    int i;
    for(i = 0; fonte[i] != '\0'; i++){
        destino[i] = fonte[i];
    }
    destino[i] = '\0';
}

void troca(Paihs quadro[500], int i, int j){
    int aux;
    char outro[MAX_NOME+1];

    aux = quadro[i].medalha[0];
    quadro[i].medalha[0] = quadro[j].medalha[0];
    quadro[j].medalha[0] = aux;

    aux = quadro[i].medalha[1];
    quadro[i].medalha[1] = quadro[j].medalha[1];
    quadro[j].medalha[1] = aux;

    aux = quadro[i].medalha[2];
    quadro[i].medalha[2] = quadro[j].medalha[2];
    quadro[j].medalha[2] = aux;

    //outro = quadro[i].nome;//errado!!!!
    copiar_string(outro,quadro[i].nome);
    copiar_string(quadro[i].nome,quadro[j].nome);
    copiar_string(quadro[j].nome,outro);
}

void ordena(Paihs quadro[500], int n){
    int i,j,k;

    for(i = 0; i < n-1;i++){
        for(j = i+1; j < n; j++){
            k = 0; // k comeca no ind da medalha de ouro
            while(quadro[i].medalha[k] == quadro[j].medalha[k]){
                k++;
            }
            if(k <= 2){
                if(quadro[i].medalha[k] < quadro[j].medalha[k]){
                    troca(quadro,i,j);
                }
            }else{
                if(comparar_string(quadro[i].nome,quadro[j].nome) > 0){
                    troca(quadro,i,j);
                }
            }
        }
    }
}

int main(){

    int i,n;
    Paihs quadro[500];

    scanf("%d",&n);

    for(i = 0; i < n; i++){
        getchar();
        scanf("%s %d %d %d",quadro[i].nome,&quadro[i].medalha[0],&quadro[i].medalha[1],&quadro[i].medalha[2]);
    }

    ordena(quadro,n);

    for(i = 0; i < n; i++){
        printf("%s %d %d %d\n",quadro[i].nome,quadro[i].medalha[0],quadro[i].medalha[1],quadro[i].medalha[2]);
    }

    return 0;
}
