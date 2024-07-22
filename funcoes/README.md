# 10. Funções

```
tipo nome_da_funcao( [lista de parametros] ){

    return ALGO;
}
```





```
#include<stdio.h>

int f(int x){
    int y;
    y = x+1;
    return y;
}

int main(){
    int a,b;

    scanf("%d",&a);

    b = f(a);

    printf("%d\n",b);
    return 0;
}
```

ou 

```
#include<stdio.h>

/* Cabecalho (header) da funcao*/
int f(int x);

int main(){
    int a,b;

    scanf("%d",&a);

    b = f(a);

    printf("%d\n",b);
    return 0;
}

int f(int x){
    int y;
    y = x+1;
    return y;
}
```


```
#include<stdio.h>
#include<string.h>

#define MAX_N 100
// funcao retorna um valor inteiro

int strcmp_athletico(char str1[MAX_N+1], char str2[MAX_N+1]){

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

int main(){
    char str1[MAX_N+1],str2[MAX_N+1];
    int ans,cap;

    scanf("%s %s",str1,str2);

    ans = strcmp(str1,str2);

    cap = strcmp_athletico(str1,str2);

    printf("strcmp String.h: %d\n",ans);
    printf("strcmp Furacao: %d\n",cap);

    return 0;
}
```

