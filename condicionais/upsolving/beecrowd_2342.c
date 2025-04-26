#include<stdio.h>

int main(){
    
    int n,a,b,ans;
    char op;
    
    scanf("%d",&n);
    scanf("%d %c %d",&a,&op,&b);
    
    if(op == '+'){
        ans = a+b;
    } else {
        ans = a*b;
    }
    
    if(ans > n){
        printf("OVERFLOW\n");
    } else {
        printf("OK\n");
    } 
    
    return 0;
}
