#include<stdio.h>

int min(int a, int b){
    if(a < b){
        return a;
    } else {
        return b;
    }
}

int max(int a, int b){
    if(a > b){
        return a;
    } else {
        return b;
    }
}

int main(){
    int maior,menor,meio,a,b,c;

    scanf("%d %d %d",&a,&b,&c);

    menor = min(a,min(b,c));
    maior = max(a,max(b,c));
    meio = (a+b+c) - (menor+maior);

    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",menor,meio,maior,a,b,c);

    return 0;
}
