# 9.3. Vetores de Strings 

```
#include<stdio.h>
#define MAX_N 100
#define MAX_M 100

int main(){
    int i,j,n,m;
    // armazena ateh MAX_N strings
    // cada strings contendo ateh MAX_M caracteres
    char vetor_str[MAX_N][MAX_M+1];
    // ler n linhas da entrada
    scanf("%d",&n);
    getchar(); // tchau \n

    for(i = 0; i < n;i++){
        scanf("%s",vetor_str[i]);
        getchar(); // tchau \n
    }

    for(i = 0; i < n; i++){
        // imprime a string na linha i
        printf("%s\n",vetor_str[i]);
    }

    return 0;
}
```
