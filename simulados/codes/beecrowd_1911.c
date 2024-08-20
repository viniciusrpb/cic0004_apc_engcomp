#include<stdio.h>
#include<string.h>

struct aluno{
    char nome[21];
    char assinatura[21];
};

typedef struct aluno Aluno;

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
    
        for(i = 0; i < n; i++){
            getchar();
            scanf("%s %s",lista[i].nome,lista[i].assinatura);        
        }
        
        scanf("%d",&m);
        
        ans = 0;
        
        for(i = 0; i < m; i++){
            getchar();
            scanf("%s %s",nome_aula,assinado_aula);
            for(j = 0; j < n; j++){
                if(strcmp(nome_aula,lista[j].nome) == 0){
                    diff = verificaAssinatura(lista[j].assinatura, assinado_aula);
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
