#include<stdio.h>

int main(){

    int i,n,t,v,ans;
    
    scanf("%d",&n);
    
    ans = 0;
    
    for(i = 0; i < n; i++){
        scanf("%d %d",&t,&v);
        ans += t*v;
    }
    
    printf("%d\n",ans);

    return 0;
}
