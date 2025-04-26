#include<stdio.h>

int main(){
    
    int n,brancas,pretas;
    
    scanf("%d",&n);
    
    pretas = (n*n)/2;
    
    if(n%2 == 0){
        brancas = pretas;
    } else {
        brancas = pretas+1;
    }
    
    printf("%d casas brancas e %d casas pretas\n",brancas,pretas);
    
    return 0;
}
