#include<stdio.h>

int main(){
    int p,d,b,soma;
    
    scanf("%d %d %d",&p,&d,&b);
    
    soma = p+(2*d)+(3*b);
    
    if(soma >= 150){
        printf("B\n");
    }
    else if(soma >= 120){
        printf("D\n");
    }
    else if(soma >= 100){
        printf("P\n");
    }
    else{
        printf("N\n");
    }
    
    return 0;
}
