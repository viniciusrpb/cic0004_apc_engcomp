#include<stdio.h>

int main(){
    
    int b,t,areaNota,felix,marzia;
    
    scanf("%d",&b);
    scanf("%d",&t);
    
    // area do retangulo = base * altura
    areaNota = 70*160;
    
    // area do trapezio = (altura*(baseMaior + baseMenor))/2
    felix = (b + t)*35;
    
    marzia = areaNota - felix;
    
    if(marzia > felix){
        printf("2\n");
    } else {
        if(marzia < felix){
            printf("1\n");
        } else {
            printf("0\n");
        } 
    }
    
    return 0;
}
