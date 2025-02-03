#include <stdio.h>

int main(){
    
    int i,ans,n;
    int fib[101];
    
    scanf("%d",&n);
    
    for(i = 0; i < n;i++){
        scanf("%d",&fib[i]);
    }
    
    ans = 0;
    for(i = 2; i < n;i++){
        if(fib[i] == fib[i-1]+fib[i-2]){
            ans++;
        }
    }
    
    printf("%d\n",ans);
    
    return 0;
}
