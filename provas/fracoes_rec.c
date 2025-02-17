#include<stdio.h>

int gcd(int a, int b){
    if(b == 0)
        return a;
    return gcd(b,a%b);
}

int main(){
    int mdc,baixo,cima,a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
        
    baixo = b*d;
    cima = d*a + b*c;
        
    mdc = gcd(baixo,cima);
        
    baixo = baixo / mdc;
    cima = cima / mdc;

    printf("%d %d\n",cima,baixo);
        
    return 0;
}
