#include<stdio.h>

int ehTriangulo(long long int a, long long int b, long long int c){
    if(a+b > c && b+c > a && a+c > b){
        return 1; // sim
    } else {
        return 0; // nao
    }
}

int ehEquilatero(long long int x, long long int y, long long int z){
    if(x == y && y == z){
        return 1; // sim, eh equilatero
    } else {
        return 0; // nao eh equilatero
    }
}

int ehIsoceles(long long int a, long long int b, long long int c){
    if((a == c && a != b) || ((b == c) && (b != a)) || (a==b) && (a !=c)){
        return 1; // sim, o triangulo eh isoceles
    } else {
        return 0;
    }
}

int ehTriangRetangulo(long long int a, long long int b, long long int c){
    if((a*a == (b*b + c*c)) || (b*b == (a*a + c*c)) || (c*c == (a*a + b*b))){
        return 1; // sim, eh triangulo retangulo
    } else {
        return 0; // nao, nao eh triangulo retangulo
    }
}


int main(){
    long long int a,b,c;

    scanf("%lld %lld %lld",&a,&b,&c);

    if(ehTriangulo(a,b,c) == 1){
        if(ehEquilatero(a,b,c) == 1){
            printf("Valido-Equilatero\n");
        } else{
            if(ehIsoceles(a,b,c) == 1){
                printf("Valido-Isoceles\n");
            } else {
                printf("Valido-Escaleno\n");
            }
        }

        if(ehTriangRetangulo(a,b,c) == 1){
            printf("Retangulo: S\n");
        } else {
            printf("Retangulo: N\n");
        }

    } else {
        printf("Invalido\n");
    }

    return 0;
}
