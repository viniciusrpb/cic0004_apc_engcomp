#include<stdio.h>
#include<string.h>

struct pais{
    char nome[1001]; // nome do pais + '\0'
    int ouro, prata, bronze;
};

typedef struct pais Pais;

int comparaString(char str1[1001], char str2[1001]){

    int i,j,n,m;

    n = strlen(str1);
    m = strlen(str2);

    for(i = 0; i < m && i < n; i++){
        if(str1[i] > str2[i]){
            return i+1;
        }
        else{
            if(str1[i] < str2[i]){
                return -(i+1);
            }
        }
    }
    // depois de sair do laco
    if(str1[i] > str2[i]){
        return (i+1);
    }
    else{
        if(str1[i] < str2[i]){
            return -(i+1);
        }
        else{
            return 0;
        }
    }
}

// ordena um vetor de structs
void ordena(Pais v[500], int n){

    int i,j;
    Pais aux;

    for(i = 0; i < n-1; i++){
        for(j = i+1; j < n; j++){
            // se o i-esimo pais tem mais medalhas de ouro do que o j-esimo pais 
            if(v[i].ouro < v[j].ouro){
                // se sim, faz a troca
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
            else{
                // se houver empate nas medalhas de ouro entre os paises i e j
                if(v[i].ouro == v[j].ouro){
                    // verifica se o i-esimo pais tem mais medalhas de prata do que o j-esimo pais, faz a troca 
                    if(v[i].prata < v[j].prata){
                        // se sim, faz a troca entre os paises, para que o i-esimo pais com mais
                        // medalhas de ouro venha antes do j-esimo pais
                        aux = v[i];
                        v[i] = v[j];
                        v[j] = aux;
                    }
                    else{
                        if(v[i].prata == v[j].prata){
                            if(v[i].bronze < v[j].bronze){
                                aux = v[i];
                                v[i] = v[j];
                                v[j] = aux;
                            }
                            else{
                                if(v[i].bronze == v[j].bronze){
                                    if(comparaString(v[i].nome,v[j].nome) > 0){
                                        aux = v[i];
                                        v[i] = v[j];
                                        v[j] = aux;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

int main(){
    int i,n;
    Pais paises[500];

    scanf("%d",&n);
    
    for(i = 0; i < n; i++){
        getchar();
        //Belgica 2 2 2
        scanf("%s",paises[i].nome);
        scanf("%d",&paises[i].ouro);
        scanf("%d",&paises[i].prata);
        scanf("%d",&paises[i].bronze);
    }
    
    ordena(paises, n); // chamada da funcao

    for(i = 0; i < n; i++){
        printf("%s %d %d %d\n",paises[i].nome,paises[i].ouro,paises[i].prata,paises[i].bronze);
    }
    
    return 0;
}
