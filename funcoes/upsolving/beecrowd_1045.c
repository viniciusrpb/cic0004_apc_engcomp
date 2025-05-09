#include<stdio.h>

double min(double a, double b){
    if(a < b){
        return a;
    } else {
        return b;
    }
}

double max(double a, double b){
    if(a > b){
        return a;
    } else {
        return b;
    }
}

int main(){
    double aa,bb,cc,a,b,c;

    scanf("%lf %lf %lf",&aa,&bb,&cc);

    c = min(aa,min(bb,cc));
    a = max(aa,max(bb,cc));
    b = (aa+bb+cc) - (a+c);

    if(a >= b+c){
        printf("NAO FORMA TRIANGULO\n");
    } else {
        if(a*a == b*b + c*c){
            printf("TRIANGULO RETANGULO\n");
        } else if(a*a > b*b + c*c) {
            printf("TRIANGULO OBTUSANGULO\n");
        } else {
            printf("TRIANGULO ACUTANGULO\n");
        }

        if(a == b && b == c){
            printf("TRIANGULO EQUILATERO\n");
        } else if((a == b && b != c) || (a == c && b != c) || (b == c && a != c)){
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    return 0;
}
