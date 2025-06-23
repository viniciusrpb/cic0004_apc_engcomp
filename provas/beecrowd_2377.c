#include<stdio.h>

int main() {
 
    int qtdePedagios,l,d,k,p,ans;
    
    scanf("%d %d",&l,&d);
    scanf("%d %d",&k,&p);
    
    qtdePedagios = l/d;
    
    ans = k*l + qtdePedagios*p;
    
    printf("%d\n",ans);
 
    return 0;
}
