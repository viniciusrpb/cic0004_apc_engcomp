#include<stdio.h>

int main(){
    int i,n,porta,ans;
  
    scanf("%d",&n);
    
    ans = 0;
    
    for(i = 0; i < n; i++){
        scanf("%d",&porta);
        if(porta != 1){
            ans++;
        }
    }
    
    printf("%d\n",ans);
    
    return 0;
}
