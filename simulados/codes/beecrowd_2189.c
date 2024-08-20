#include <stdio.h>
 
int main() {
    
    int n,i,ans,a,teste;
 
    scanf("%d",&n);
    
    teste = 1;
    
    while(n>0){
        
        ans = 0;
        for(i = 1; i <= n; i++){
            scanf("%d",&a);
            if(a == i){
                ans = i;
            }
        }
        
        printf("Teste %d\n%d\n\n",teste++,ans);
        scanf("%d",&n);
    }
 
    return 0;
}
