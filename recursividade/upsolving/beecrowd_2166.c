#include<stdio.h>

double sqrt2(int n){
    //caso base: como parar a recursao
    if(n == 0){
        return 0;
    }
    // recorrencia: chamada da funcao
    return 1/(2+sqrt2(n-1));
}

int main(){
    int n; // valor max. 100

    scanf("%d",&n);

    printf("%.10lf\n",1+sqrt2(n));

    return 0;
}
