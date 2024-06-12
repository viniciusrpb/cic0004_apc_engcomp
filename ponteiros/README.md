# Ponteiros

## Definição

## Operador &

```
#include<stdio.h>

int main(){

    int n;
    char c;
    int *p;  // ponteiro para inteiro
    char *pc; // ponteiro para char

    scanf("%d",&n);

    printf("Endereco de n: %p\n",&n);
    printf("Endereco de c: %p\n",&c);
    printf("Endereco de *p: %p\n",&p);
    printf("Endereco de *pc: %p\n",&pc);

    return 0;
}
```

## Operador Indireto (*)

```
#include<stdio.h>

int main(){

    int n;
    int *p;  // ponteiro para inteiro

    n = 3;

    p = &n;  // p aponta para n
             // p armazena o endereco de n

    printf("Endereco de n: %p\n",&n);
    printf("Valor de n: %d\n",n);
    printf("Endereco armazenado em p: %p\n",p);
    printf("Acesso indireto a n: %d\n",*p);

    *p = 7;

    printf("2) Valor de n: %d\n",n);

    return 0;
}
```

## Aritmética de Ponteiros



## Ponteiros e Vetores

```
#include<stdio.h>
#define MAX_N 10
int main(){

    int i,n;
    int v[MAX_N];

    printf("Endereco de v: %p\n",v);
    printf("Endereco de v (com &): %p\n",&v);

    scanf("%d",&n);

    for(i = 0; i < n; i++){
        printf("v[%d] no endereco %p\n",i,v+i);
        scanf("%d",v+i);
    }

    for(i = 0; i < n; i++){
        printf("%d ",*(v+i)); //v[i]
    }
    printf("\n");

    return 0;
}
```

