#include<stdio.h>

int main(){
    int n,a,b;
    
    scanf("%d",&n);
    scanf("%d %d",&a,&b);
    
    if(a+b > n){
        printf("Deixa para amanha!\n");
    } else {
        printf("Farei hoje!\n");
    }
    
    return 0;
}
