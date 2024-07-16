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
