#include<stdio.h>

int max(int a, int b){
    if(a > b){
        return a;
    }else{
        return b;
    }
}

int main(){
    int i,j,n,m,s,maior_linhas,maior_colunas;
    int campo[100][100];
    
    scanf("%d %d",&n,&m);
    
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            scanf("%d",&campo[i][j]);
        }
    }
    
    maior_linhas = -1;
    
    for(i = 0; i < n; i++){
        s = 0;
        for(j = 0; j < m; j++){
            s+=campo[i][j];
        }
        if(s > maior_linhas){
            maior_linhas = s;
        }
    }
    
    maior_colunas = -1;
    
    for(j = 0; j < m; j++){
        s = 0;
        for(i = 0; i < n; i++){
            s+=campo[i][j];
        }
        if(s > maior_colunas){
            maior_colunas = s;
        }
    }
    
    printf("%d\n",max(maior_linhas,maior_colunas));
    
    return 0;
}
