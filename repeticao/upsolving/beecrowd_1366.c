#include <stdio.h>
 
int main() {
 
    int n,i,c,v,ans;
    
    scanf("%d",&n);
    
    while(n!=0){
        
        ans = 0;
        for(i = 0; i < n; i++){
            scanf("%d %d",&c,&v);
            ans += v/2;
        }
        ans = ans/2;
        printf("%d\n",ans);
        scanf("%d",&n);
    }
 
    return 0;
}
