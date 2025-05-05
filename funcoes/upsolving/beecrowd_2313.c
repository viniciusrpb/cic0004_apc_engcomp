#include<stdio.h>

int main(){
    long long int a,b,c;

    scanf("%lld %lld %lld",&a,&b,&c);

    if(a+b > c && b+c > a && a+c > b){
        if(a == b && b == c){
            printf("Valido-Equilatero\n");
        } else{
            if((a == c && a != b) || ((b == c) && (b != a)) || (a==b) && (a !=c)){
                printf("Valido-Isoceles\n");
            } else {
                printf("Valido-Escaleno\n");
            }
        }

        if((a*a == (b*b + c*c)) || (b*b == (a*a + c*c)) || (c*c == (a*a + b*b))){
            printf("Retangulo: S\n");
        } else {
            printf("Retangulo: N\n");
        }

    } else {
        printf("Invalido\n");
    }

    return 0;
}
